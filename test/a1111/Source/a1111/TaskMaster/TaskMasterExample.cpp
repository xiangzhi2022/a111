// Copyright Epic Games, Inc. All Rights Reserved.

#include "TaskMasterExample.h"
#include "Engine/Engine.h"

ATaskMasterExample::ATaskMasterExample()
{
    PrimaryActorTick.bCanEverTick = true;
    
    // Create the task component
    TaskComponent = CreateDefaultSubobject<UTaskComponent>(TEXT("TaskComponent"));
    
    CurrentTask = nullptr;
}

void ATaskMasterExample::BeginPlay()
{
    Super::BeginPlay();
    
    // Bind to task component events
    if (TaskComponent)
    {
        TaskComponent->InitializeTaskManager();
        
        // Bind to task manager events
        if (TaskComponent->TaskManager)
        {
            TaskComponent->TaskManager->OnTaskManagerUpdated.AddDynamic(this, &ATaskMasterExample::OnTaskManagerUpdated);
            TaskComponent->TaskManager->OnTaskAdded.AddDynamic(this, &ATaskMasterExample::OnTaskAdded);
        }
    }
    
    // Create some sample tasks
    CreateSampleTasks();
}

void ATaskMasterExample::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATaskMasterExample::CreateSampleTasks()
{
    if (!TaskComponent)
    {
        return;
    }
    
    // Create sample tasks
    UTask* Task1 = TaskComponent->CreateTask(TEXT("TASK_001"), TEXT("Design Player Character"), TEXT("Create the main player character with basic movement"));
    if (Task1)
    {
        Task1->SetPriority(ETaskPriority::High);
        Task1->AddTag(TEXT("Design"));
        Task1->AddTag(TEXT("Character"));
        Task1->EstimatedDuration = 120.0f; // 2 hours
    }
    
    UTask* Task2 = TaskComponent->CreateTask(TEXT("TASK_002"), TEXT("Implement Jump Mechanics"), TEXT("Add jumping functionality to the player character"));
    if (Task2)
    {
        Task2->SetPriority(ETaskPriority::Medium);
        Task2->AddTag(TEXT("Programming"));
        Task2->AddTag(TEXT("Character"));
        Task2->EstimatedDuration = 60.0f; // 1 hour
    }
    
    UTask* Task3 = TaskComponent->CreateTask(TEXT("TASK_003"), TEXT("Create Level 1"), TEXT("Design and build the first level of the game"));
    if (Task3)
    {
        Task3->SetPriority(ETaskPriority::Critical);
        Task3->AddTag(TEXT("Level Design"));
        Task3->EstimatedDuration = 480.0f; // 8 hours
    }
    
    UTask* Task4 = TaskComponent->CreateTask(TEXT("TASK_004"), TEXT("Add Sound Effects"), TEXT("Implement sound effects for player actions"));
    if (Task4)
    {
        Task4->SetPriority(ETaskPriority::Low);
        Task4->AddTag(TEXT("Audio"));
        Task4->EstimatedDuration = 90.0f; // 1.5 hours
    }
    
    // Print initial statistics
    PrintTaskStatistics();
}

void ATaskMasterExample::CompleteTask(const FString& TaskID)
{
    if (!TaskComponent)
    {
        return;
    }
    
    UTask* Task = TaskComponent->GetTask(TaskID);
    if (Task)
    {
        Task->CompleteTask();
        UE_LOG(LogTemp, Warning, TEXT("Task completed: %s"), *Task->Title);
    }
}

void ATaskMasterExample::PrintTaskStatistics()
{
    if (!TaskComponent)
    {
        return;
    }
    
    int32 TotalTasks, ActiveTasks, CompletedTasks, CancelledTasks;
    TaskComponent->GetTaskStatistics(TotalTasks, ActiveTasks, CompletedTasks, CancelledTasks);
    
    UE_LOG(LogTemp, Warning, TEXT("Task Statistics:"));
    UE_LOG(LogTemp, Warning, TEXT("  Total Tasks: %d"), TotalTasks);
    UE_LOG(LogTemp, Warning, TEXT("  Active Tasks: %d"), ActiveTasks);
    UE_LOG(LogTemp, Warning, TEXT("  Completed Tasks: %d"), CompletedTasks);
    UE_LOG(LogTemp, Warning, TEXT("  Cancelled Tasks: %d"), CancelledTasks);
}

void ATaskMasterExample::WorkOnNextTask()
{
    if (!TaskComponent)
    {
        return;
    }
    
    UTask* NextTask = TaskComponent->GetNextTask();
    if (NextTask)
    {
        CurrentTask = NextTask;
        CurrentTask->SetStatus(ETaskStatus::InProgress);
        
        UE_LOG(LogTemp, Warning, TEXT("Now working on: %s"), *CurrentTask->Title);
        
        // Bind to task completion event
        CurrentTask->OnTaskCompleted.AddDynamic(this, &ATaskMasterExample::OnTaskCompleted);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No tasks available to work on"));
    }
}

void ATaskMasterExample::OnTaskManagerUpdated(UTaskManager* Manager)
{
    UE_LOG(LogTemp, Log, TEXT("Task Manager Updated"));
}

void ATaskMasterExample::OnTaskAdded(UTask* Task)
{
    UE_LOG(LogTemp, Log, TEXT("Task Added: %s"), *Task->Title);
}

void ATaskMasterExample::OnTaskCompleted(UTask* Task)
{
    UE_LOG(LogTemp, Warning, TEXT("Task Completed: %s (Duration: %.2f minutes)"), *Task->Title, Task->ActualDuration);
    
    if (CurrentTask == Task)
    {
        CurrentTask = nullptr;
    }
    
    // Print updated statistics
    PrintTaskStatistics();
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "TaskComponent.h"
#include "Modules/ModuleManager.h"

UTaskComponent::UTaskComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    TaskManager = nullptr;
    bAutoCreateTaskManager = true;
    MaxTasks = 100;
}

void UTaskComponent::BeginPlay()
{
    Super::BeginPlay();
    
    if (bAutoCreateTaskManager)
    {
        InitializeTaskManager();
    }
}

void UTaskComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UTaskComponent::InitializeTaskManager()
{
    if (!TaskManager)
    {
        TaskManager = NewObject<UTaskManager>(this);
        
        // Bind to task manager events
        TaskManager->OnTaskManagerUpdated.AddDynamic(this, &UTaskComponent::OnTaskManagerUpdated);
        TaskManager->OnTaskAdded.AddDynamic(this, &UTaskComponent::OnTaskAdded);
        TaskManager->OnTaskRemoved.AddDynamic(this, &UTaskComponent::OnTaskRemoved);
    }
}

UTask* UTaskComponent::CreateTask(const FString& TaskID, const FString& Title, const FString& Description)
{
    if (!IsTaskManagerValid())
    {
        InitializeTaskManager();
    }
    
    if (!CanAddTask())
    {
        return nullptr;
    }
    
    return TaskManager->AddTask(TaskID, Title, Description);
}

UTask* UTaskComponent::GetTask(const FString& TaskID) const
{
    if (!IsTaskManagerValid())
    {
        return nullptr;
    }
    
    return TaskManager->GetTask(TaskID);
}

bool UTaskComponent::RemoveTask(const FString& TaskID)
{
    if (!IsTaskManagerValid())
    {
        return false;
    }
    
    return TaskManager->RemoveTask(TaskID);
}

TArray<UTask*> UTaskComponent::GetActiveTasks() const
{
    if (!IsTaskManagerValid())
    {
        return TArray<UTask*>();
    }
    
    return TaskManager->GetActiveTasks();
}

TArray<UTask*> UTaskComponent::GetTasksByStatus(ETaskStatus Status) const
{
    if (!IsTaskManagerValid())
    {
        return TArray<UTask*>();
    }
    
    return TaskManager->GetTasksByStatus(Status);
}

TArray<UTask*> UTaskComponent::GetTasksByPriority(ETaskPriority Priority) const
{
    if (!IsTaskManagerValid())
    {
        return TArray<UTask*>();
    }
    
    return TaskManager->GetTasksByPriority(Priority);
}

TArray<UTask*> UTaskComponent::GetTasksByTag(const FString& Tag) const
{
    if (!IsTaskManagerValid())
    {
        return TArray<UTask*>();
    }
    
    return TaskManager->GetTasksByTag(Tag);
}

void UTaskComponent::GetTaskStatistics(int32& TotalTasks, int32& ActiveTasks, int32& CompletedTasks, int32& CancelledTasks) const
{
    if (!IsTaskManagerValid())
    {
        TotalTasks = 0;
        ActiveTasks = 0;
        CompletedTasks = 0;
        CancelledTasks = 0;
        return;
    }
    
    TaskManager->GetTaskStatistics(TotalTasks, ActiveTasks, CompletedTasks, CancelledTasks);
}

UTask* UTaskComponent::GetNextTask() const
{
    if (!IsTaskManagerValid())
    {
        return nullptr;
    }
    
    return TaskManager->GetNextTask();
}

void UTaskComponent::ClearAllTasks()
{
    if (!IsTaskManagerValid())
    {
        return;
    }
    
    TaskManager->ClearAllTasks();
}

void UTaskComponent::SortTasksByPriority()
{
    if (!IsTaskManagerValid())
    {
        return;
    }
    
    TaskManager->SortTasksByPriority();
}

void UTaskComponent::SortTasksByCreationTime()
{
    if (!IsTaskManagerValid())
    {
        return;
    }
    
    TaskManager->SortTasksByCreationTime();
}

bool UTaskComponent::IsTaskManagerValid() const
{
    return TaskManager != nullptr;
}

void UTaskComponent::OnTaskManagerUpdated(UTaskManager* Manager)
{
    // Override in Blueprint to handle task manager updates
}

void UTaskComponent::OnTaskAdded(UTask* Task)
{
    // Override in Blueprint to handle task added events
}

void UTaskComponent::OnTaskRemoved(UTask* Task)
{
    // Override in Blueprint to handle task removed events
}

bool UTaskComponent::CanAddTask() const
{
    if (!IsTaskManagerValid())
    {
        return true; // Allow creation of task manager
    }
    
    int32 TotalTasks, ActiveTasks, CompletedTasks, CancelledTasks;
    GetTaskStatistics(TotalTasks, ActiveTasks, CompletedTasks, CancelledTasks);
    
    return TotalTasks < MaxTasks;
}

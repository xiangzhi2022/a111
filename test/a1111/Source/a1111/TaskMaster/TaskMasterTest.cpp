// Copyright Epic Games, Inc. All Rights Reserved.

#include "TaskMasterTest.h"
#include "Engine/Engine.h"

void UTaskMasterTest::RunAllTests()
{
    UE_LOG(LogTemp, Warning, TEXT("=== TaskMaster Test Suite ==="));
    
    TestBasicTaskOperations();
    TestTaskManagerOperations();
    TestTaskComponentOperations();
    TestTaskEvents();
    
    UE_LOG(LogTemp, Warning, TEXT("=== TaskMaster Test Suite Complete ==="));
}

void UTaskMasterTest::TestBasicTaskOperations()
{
    UE_LOG(LogTemp, Warning, TEXT("Testing Basic Task Operations..."));
    
    // Test task creation
    UTask* TestTask = NewObject<UTask>();
    bool bTaskCreated = (TestTask != nullptr);
    LogTestResult(TEXT("Task Creation"), bTaskCreated);
    
    if (bTaskCreated)
    {
        // Test task initialization
        TestTask->InitializeTask(TEXT("TEST_001"), TEXT("Test Task"), TEXT("A test task"));
        bool bTaskInitialized = (TestTask->TaskID == TEXT("TEST_001") && TestTask->Title == TEXT("Test Task"));
        LogTestResult(TEXT("Task Initialization"), bTaskInitialized);
        
        // Test priority setting
        TestTask->SetPriority(ETaskPriority::High);
        bool bPrioritySet = (TestTask->Priority == ETaskPriority::High);
        LogTestResult(TEXT("Priority Setting"), bPrioritySet);
        
        // Test tag operations
        TestTask->AddTag(TEXT("Test"));
        bool bTagAdded = TestTask->HasTag(TEXT("Test"));
        LogTestResult(TEXT("Tag Addition"), bTagAdded);
        
        TestTask->RemoveTag(TEXT("Test"));
        bool bTagRemoved = !TestTask->HasTag(TEXT("Test"));
        LogTestResult(TEXT("Tag Removal"), bTagRemoved);
        
        // Test status changes
        TestTask->SetStatus(ETaskStatus::InProgress);
        bool bStatusChanged = (TestTask->Status == ETaskStatus::InProgress);
        LogTestResult(TEXT("Status Change"), bStatusChanged);
        
        // Test task completion
        TestTask->CompleteTask();
        bool bTaskCompleted = (TestTask->Status == ETaskStatus::Completed);
        LogTestResult(TEXT("Task Completion"), bTaskCompleted);
        
        // Test elapsed time
        float ElapsedTime = TestTask->GetElapsedTime();
        bool bTimeTracked = (ElapsedTime >= 0.0f);
        LogTestResult(TEXT("Time Tracking"), bTimeTracked);
    }
}

void UTaskMasterTest::TestTaskManagerOperations()
{
    UE_LOG(LogTemp, Warning, TEXT("Testing TaskManager Operations..."));
    
    // Test manager creation
    UTaskManager* Manager = NewObject<UTaskManager>();
    bool bManagerCreated = (Manager != nullptr);
    LogTestResult(TEXT("Manager Creation"), bManagerCreated);
    
    if (bManagerCreated)
    {
        // Test task addition
        UTask* Task1 = Manager->AddTask(TEXT("TASK_001"), TEXT("Task 1"), TEXT("First test task"));
        bool bTaskAdded = (Task1 != nullptr);
        LogTestResult(TEXT("Task Addition"), bTaskAdded);
        
        // Test duplicate task prevention
        UTask* DuplicateTask = Manager->AddTask(TEXT("TASK_001"), TEXT("Duplicate"), TEXT("Should not be added"));
        bool bDuplicatePrevented = (DuplicateTask == nullptr);
        LogTestResult(TEXT("Duplicate Prevention"), bDuplicatePrevented);
        
        // Test task retrieval
        UTask* RetrievedTask = Manager->GetTask(TEXT("TASK_001"));
        bool bTaskRetrieved = (RetrievedTask == Task1);
        LogTestResult(TEXT("Task Retrieval"), bTaskRetrieved);
        
        // Test multiple tasks
        UTask* Task2 = Manager->AddTask(TEXT("TASK_002"), TEXT("Task 2"), TEXT("Second test task"));
        Task2->SetPriority(ETaskPriority::High);
        Task1->SetPriority(ETaskPriority::Low);
        
        // Test active tasks
        TArray<UTask*> ActiveTasks = Manager->GetActiveTasks();
        bool bActiveTasksFound = (ActiveTasks.Num() == 2);
        LogTestResult(TEXT("Active Tasks"), bActiveTasksFound);
        
        // Test priority filtering
        TArray<UTask*> HighPriorityTasks = Manager->GetTasksByPriority(ETaskPriority::High);
        bool bPriorityFiltering = (HighPriorityTasks.Num() == 1 && HighPriorityTasks[0] == Task2);
        LogTestResult(TEXT("Priority Filtering"), bPriorityFiltering);
        
        // Test next task
        UTask* NextTask = Manager->GetNextTask();
        bool bNextTaskCorrect = (NextTask == Task2); // Should be high priority task
        LogTestResult(TEXT("Next Task Selection"), bNextTaskCorrect);
        
        // Test task removal
        bool bTaskRemoved = Manager->RemoveTask(TEXT("TASK_001"));
        LogTestResult(TEXT("Task Removal"), bTaskRemoved);
        
        // Test statistics
        int32 Total, Active, Completed, Cancelled;
        Manager->GetTaskStatistics(Total, Active, Completed, Cancelled);
        bool bStatisticsCorrect = (Total == 1 && Active == 1 && Completed == 0 && Cancelled == 0);
        LogTestResult(TEXT("Statistics"), bStatisticsCorrect);
    }
}

void UTaskMasterTest::TestTaskComponentOperations()
{
    UE_LOG(LogTemp, Warning, TEXT("Testing TaskComponent Operations..."));
    
    // Test component creation
    UTaskComponent* Component = NewObject<UTaskComponent>();
    bool bComponentCreated = (Component != nullptr);
    LogTestResult(TEXT("Component Creation"), bComponentCreated);
    
    if (bComponentCreated)
    {
        // Test initialization
        Component->InitializeTaskManager();
        bool bManagerInitialized = Component->IsTaskManagerValid();
        LogTestResult(TEXT("Manager Initialization"), bManagerInitialized);
        
        if (bManagerInitialized)
        {
            // Test task creation through component
            UTask* Task = Component->CreateTask(TEXT("COMP_TASK_001"), TEXT("Component Task"), TEXT("Task created through component"));
            bool bTaskCreated = (Task != nullptr);
            LogTestResult(TEXT("Component Task Creation"), bTaskCreated);
            
            // Test task retrieval through component
            UTask* RetrievedTask = Component->GetTask(TEXT("COMP_TASK_001"));
            bool bTaskRetrieved = (RetrievedTask == Task);
            LogTestResult(TEXT("Component Task Retrieval"), bTaskRetrieved);
            
            // Test statistics through component
            int32 Total, Active, Completed, Cancelled;
            Component->GetTaskStatistics(Total, Active, Completed, Cancelled);
            bool bStatisticsCorrect = (Total == 1 && Active == 1);
            LogTestResult(TEXT("Component Statistics"), bStatisticsCorrect);
            
            // Test task removal through component
            bool bTaskRemoved = Component->RemoveTask(TEXT("COMP_TASK_001"));
            LogTestResult(TEXT("Component Task Removal"), bTaskRemoved);
        }
    }
}

void UTaskMasterTest::TestTaskEvents()
{
    UE_LOG(LogTemp, Warning, TEXT("Testing Task Events..."));
    
    // Test task events
    UTask* TestTask = NewObject<UTask>();
    TestTask->InitializeTask(TEXT("EVENT_TASK_001"), TEXT("Event Test Task"), TEXT("Testing events"));
    
    // Test status change event
    bool bStatusEventFired = false;
    TestTask->OnStatusChanged.AddLambda([&bStatusEventFired](UTask* Task) {
        bStatusEventFired = true;
    });
    
    TestTask->SetStatus(ETaskStatus::InProgress);
    LogTestResult(TEXT("Status Change Event"), bStatusEventFired);
    
    // Test completion event
    bool bCompletionEventFired = false;
    TestTask->OnTaskCompleted.AddLambda([&bCompletionEventFired](UTask* Task) {
        bCompletionEventFired = true;
    });
    
    TestTask->CompleteTask();
    LogTestResult(TEXT("Completion Event"), bCompletionEventFired);
    
    // Test manager events
    UTaskManager* Manager = NewObject<UTaskManager>();
    bool bManagerEventFired = false;
    Manager->OnTaskAdded.AddLambda([&bManagerEventFired](UTask* Task) {
        bManagerEventFired = true;
    });
    
    Manager->AddTask(TEXT("EVENT_TASK_002"), TEXT("Manager Event Test"), TEXT("Testing manager events"));
    LogTestResult(TEXT("Manager Event"), bManagerEventFired);
}

void UTaskMasterTest::LogTestResult(const FString& TestName, bool bPassed)
{
    FString Result = bPassed ? TEXT("PASS") : TEXT("FAIL");
    UE_LOG(LogTemp, Warning, TEXT("  %s: %s"), *TestName, *Result);
}

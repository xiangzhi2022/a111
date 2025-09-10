// Copyright Epic Games, Inc. All Rights Reserved.

#include "TaskManager.h"
#include "Modules/ModuleManager.h"

UTaskManager::UTaskManager()
{
    // Constructor
}

UTask* UTaskManager::AddTask(const FString& TaskID, const FString& Title, const FString& Description)
{
    // Check if task already exists
    if (GetTask(TaskID) != nullptr)
    {
        return nullptr;
    }

    // Create new task
    UTask* NewTask = NewObject<UTask>(this);
    NewTask->InitializeTask(TaskID, Title, Description);
    
    // Bind to task events
    NewTask->OnStatusChanged.AddDynamic(this, &UTaskManager::OnTaskStatusChanged);
    
    // Add to tasks array
    Tasks.Add(NewTask);
    
    // Broadcast events
    OnTaskAdded.Broadcast(NewTask);
    OnTaskManagerUpdated.Broadcast(this);
    
    return NewTask;
}

bool UTaskManager::RemoveTask(const FString& TaskID)
{
    int32 TaskIndex = FindTaskIndex(TaskID);
    if (TaskIndex != INDEX_NONE)
    {
        UTask* TaskToRemove = Tasks[TaskIndex];
        
        // Unbind from events
        TaskToRemove->OnStatusChanged.RemoveDynamic(this, &UTaskManager::OnTaskStatusChanged);
        
        // Remove from array
        Tasks.RemoveAt(TaskIndex);
        
        // Broadcast events
        OnTaskRemoved.Broadcast(TaskToRemove);
        OnTaskManagerUpdated.Broadcast(this);
        
        return true;
    }
    
    return false;
}

UTask* UTaskManager::GetTask(const FString& TaskID) const
{
    int32 TaskIndex = FindTaskIndex(TaskID);
    if (TaskIndex != INDEX_NONE)
    {
        return Tasks[TaskIndex];
    }
    
    return nullptr;
}

TArray<UTask*> UTaskManager::GetActiveTasks() const
{
    TArray<UTask*> ActiveTasks;
    
    for (UTask* Task : Tasks)
    {
        if (Task && Task->IsActive())
        {
            ActiveTasks.Add(Task);
        }
    }
    
    return ActiveTasks;
}

TArray<UTask*> UTaskManager::GetTasksByStatus(ETaskStatus Status) const
{
    TArray<UTask*> FilteredTasks;
    
    for (UTask* Task : Tasks)
    {
        if (Task && Task->Status == Status)
        {
            FilteredTasks.Add(Task);
        }
    }
    
    return FilteredTasks;
}

TArray<UTask*> UTaskManager::GetTasksByPriority(ETaskPriority Priority) const
{
    TArray<UTask*> FilteredTasks;
    
    for (UTask* Task : Tasks)
    {
        if (Task && Task->Priority == Priority)
        {
            FilteredTasks.Add(Task);
        }
    }
    
    return FilteredTasks;
}

TArray<UTask*> UTaskManager::GetTasksByTag(const FString& Tag) const
{
    TArray<UTask*> FilteredTasks;
    
    for (UTask* Task : Tasks)
    {
        if (Task && Task->HasTag(Tag))
        {
            FilteredTasks.Add(Task);
        }
    }
    
    return FilteredTasks;
}

void UTaskManager::GetTaskStatistics(int32& TotalTasks, int32& ActiveTasks, int32& CompletedTasks, int32& CancelledTasks) const
{
    TotalTasks = Tasks.Num();
    ActiveTasks = 0;
    CompletedTasks = 0;
    CancelledTasks = 0;
    
    for (UTask* Task : Tasks)
    {
        if (Task)
        {
            switch (Task->Status)
            {
                case ETaskStatus::Pending:
                case ETaskStatus::InProgress:
                    ActiveTasks++;
                    break;
                case ETaskStatus::Completed:
                    CompletedTasks++;
                    break;
                case ETaskStatus::Cancelled:
                    CancelledTasks++;
                    break;
            }
        }
    }
}

void UTaskManager::ClearAllTasks()
{
    // Unbind from all task events
    for (UTask* Task : Tasks)
    {
        if (Task)
        {
            Task->OnStatusChanged.RemoveDynamic(this, &UTaskManager::OnTaskStatusChanged);
        }
    }
    
    // Clear tasks array
    Tasks.Empty();
    
    // Broadcast update
    OnTaskManagerUpdated.Broadcast(this);
}

void UTaskManager::SortTasksByPriority()
{
    Tasks.Sort([](const UTask& A, const UTask& B) {
        return (int32)A.Priority > (int32)B.Priority;
    });
    
    OnTaskManagerUpdated.Broadcast(this);
}

void UTaskManager::SortTasksByCreationTime()
{
    Tasks.Sort([](const UTask& A, const UTask& B) {
        return A.CreatedTime < B.CreatedTime;
    });
    
    OnTaskManagerUpdated.Broadcast(this);
}

UTask* UTaskManager::GetNextTask() const
{
    UTask* NextTask = nullptr;
    ETaskPriority HighestPriority = ETaskPriority::Low;
    
    for (UTask* Task : Tasks)
    {
        if (Task && Task->IsActive())
        {
            if ((int32)Task->Priority > (int32)HighestPriority)
            {
                HighestPriority = Task->Priority;
                NextTask = Task;
            }
        }
    }
    
    return NextTask;
}

void UTaskManager::OnTaskStatusChanged(UTask* Task)
{
    OnTaskManagerUpdated.Broadcast(this);
}

int32 UTaskManager::FindTaskIndex(const FString& TaskID) const
{
    for (int32 i = 0; i < Tasks.Num(); i++)
    {
        if (Tasks[i] && Tasks[i]->TaskID == TaskID)
        {
            return i;
        }
    }
    
    return INDEX_NONE;
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "Task.h"
#include "Modules/ModuleManager.h"

UTask::UTask()
{
    Status = ETaskStatus::Pending;
    Priority = ETaskPriority::Medium;
    CreatedTime = FDateTime::Now();
    StartTime = FDateTime::Now();
    EstimatedDuration = 0.0f;
    ActualDuration = 0.0f;
}

void UTask::InitializeTask(const FString& InTaskID, const FString& InTitle, const FString& InDescription)
{
    TaskID = InTaskID;
    Title = InTitle;
    Description = InDescription;
    CreatedTime = FDateTime::Now();
    StartTime = FDateTime::Now();
}

void UTask::SetStatus(ETaskStatus NewStatus)
{
    if (Status != NewStatus)
    {
        Status = NewStatus;
        OnStatusChanged.Broadcast(this);
        
        if (NewStatus == ETaskStatus::Completed)
        {
            CompleteTask();
        }
        else if (NewStatus == ETaskStatus::Cancelled)
        {
            CancelTask();
        }
    }
}

void UTask::SetPriority(ETaskPriority NewPriority)
{
    Priority = NewPriority;
}

void UTask::AddTag(const FString& Tag)
{
    if (!Tags.Contains(Tag))
    {
        Tags.Add(Tag);
    }
}

void UTask::RemoveTag(const FString& Tag)
{
    Tags.Remove(Tag);
}

bool UTask::HasTag(const FString& Tag) const
{
    return Tags.Contains(Tag);
}

float UTask::GetElapsedTime() const
{
    FDateTime CurrentTime = FDateTime::Now();
    return (CurrentTime - CreatedTime).GetTotalMinutes();
}

bool UTask::IsActive() const
{
    return Status == ETaskStatus::Pending || Status == ETaskStatus::InProgress;
}

void UTask::CompleteTask()
{
    if (Status != ETaskStatus::Completed)
    {
        Status = ETaskStatus::Completed;
        CompletedTime = FDateTime::Now();
        UpdateActualDuration();
        OnTaskCompleted.Broadcast(this);
        OnStatusChanged.Broadcast(this);
    }
}

void UTask::CancelTask()
{
    if (Status != ETaskStatus::Cancelled)
    {
        Status = ETaskStatus::Cancelled;
        CompletedTime = FDateTime::Now();
        UpdateActualDuration();
        OnStatusChanged.Broadcast(this);
    }
}

void UTask::UpdateActualDuration()
{
    if (CompletedTime.IsValid())
    {
        ActualDuration = (CompletedTime - StartTime).GetTotalMinutes();
    }
}

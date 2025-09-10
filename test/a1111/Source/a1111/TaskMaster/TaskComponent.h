// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Task.h"
#include "TaskManager.h"
#include "TaskComponent.generated.h"

/**
 * TaskComponent - A component that can be attached to any Actor
 * Provides easy access to task management functionality
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class A1111_API UTaskComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UTaskComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    /** Task Manager instance */
    UPROPERTY(BlueprintReadOnly, Category = "TaskComponent")
    UTaskManager* TaskManager;

    /** Auto-create task manager on begin play */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TaskComponent")
    bool bAutoCreateTaskManager;

    /** Maximum number of tasks allowed */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TaskComponent")
    int32 MaxTasks;

public:
    /** Initialize the task manager */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    void InitializeTaskManager();

    /** Create a new task */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    UTask* CreateTask(const FString& TaskID, const FString& Title, const FString& Description = TEXT(""));

    /** Get a task by ID */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    UTask* GetTask(const FString& TaskID) const;

    /** Remove a task */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    bool RemoveTask(const FString& TaskID);

    /** Get all active tasks */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    TArray<UTask*> GetActiveTasks() const;

    /** Get tasks by status */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    TArray<UTask*> GetTasksByStatus(ETaskStatus Status) const;

    /** Get tasks by priority */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    TArray<UTask*> GetTasksByPriority(ETaskPriority Priority) const;

    /** Get tasks by tag */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    TArray<UTask*> GetTasksByTag(const FString& Tag) const;

    /** Get task statistics */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    void GetTaskStatistics(int32& TotalTasks, int32& ActiveTasks, int32& CompletedTasks, int32& CancelledTasks) const;

    /** Get next task to work on */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    UTask* GetNextTask() const;

    /** Clear all tasks */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    void ClearAllTasks();

    /** Sort tasks by priority */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    void SortTasksByPriority();

    /** Sort tasks by creation time */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    void SortTasksByCreationTime();

    /** Check if task manager is valid */
    UFUNCTION(BlueprintCallable, Category = "TaskComponent")
    bool IsTaskManagerValid() const;

protected:
    /** Handle task manager updates */
    UFUNCTION()
    void OnTaskManagerUpdated(UTaskManager* Manager);

    /** Handle task added */
    UFUNCTION()
    void OnTaskAdded(UTask* Task);

    /** Handle task removed */
    UFUNCTION()
    void OnTaskRemoved(UTask* Task);

private:
    /** Check if we can add more tasks */
    bool CanAddTask() const;
};

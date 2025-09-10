// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Engine.h"
#include "Delegates/Delegate.h"
#include "Task.generated.h"

UENUM(BlueprintType)
enum class ETaskStatus : uint8
{
    Pending     UMETA(DisplayName = "Pending"),
    InProgress  UMETA(DisplayName = "In Progress"),
    Completed   UMETA(DisplayName = "Completed"),
    Cancelled   UMETA(DisplayName = "Cancelled")
};

UENUM(BlueprintType)
enum class ETaskPriority : uint8
{
    Low        UMETA(DisplayName = "Low"),
    Medium     UMETA(DisplayName = "Medium"),
    High       UMETA(DisplayName = "High"),
    Critical   UMETA(DisplayName = "Critical")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTaskStatusChanged, class UTask*, Task);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTaskCompleted, class UTask*, Task);

/**
 * Core Task class for TaskMaster system
 * Handles individual task management with status, priority, and callbacks
 */
UCLASS(BlueprintType, Blueprintable)
class A1111_API UTask : public UObject
{
    GENERATED_BODY()

public:
    UTask();

    /** Task identifier */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
    FString TaskID;

    /** Task title */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
    FString Title;

    /** Task description */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
    FString Description;

    /** Current task status */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
    ETaskStatus Status;

    /** Task priority */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
    ETaskPriority Priority;

    /** Creation time */
    UPROPERTY(BlueprintReadOnly, Category = "Task")
    FDateTime CreatedTime;

    /** Completion time */
    UPROPERTY(BlueprintReadOnly, Category = "Task")
    FDateTime CompletedTime;

    /** Estimated duration in minutes */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
    float EstimatedDuration;

    /** Actual duration in minutes */
    UPROPERTY(BlueprintReadOnly, Category = "Task")
    float ActualDuration;

    /** Tags for categorization */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
    TArray<FString> Tags;

    /** Callbacks */
    UPROPERTY(BlueprintAssignable, Category = "Task")
    FOnTaskStatusChanged OnStatusChanged;

    UPROPERTY(BlueprintAssignable, Category = "Task")
    FOnTaskCompleted OnTaskCompleted;

public:
    /** Initialize task with basic information */
    UFUNCTION(BlueprintCallable, Category = "Task")
    void InitializeTask(const FString& InTaskID, const FString& InTitle, const FString& InDescription = TEXT(""));

    /** Set task status */
    UFUNCTION(BlueprintCallable, Category = "Task")
    void SetStatus(ETaskStatus NewStatus);

    /** Set task priority */
    UFUNCTION(BlueprintCallable, Category = "Task")
    void SetPriority(ETaskPriority NewPriority);

    /** Add tag to task */
    UFUNCTION(BlueprintCallable, Category = "Task")
    void AddTag(const FString& Tag);

    /** Remove tag from task */
    UFUNCTION(BlueprintCallable, Category = "Task")
    void RemoveTag(const FString& Tag);

    /** Check if task has specific tag */
    UFUNCTION(BlueprintCallable, Category = "Task")
    bool HasTag(const FString& Tag) const;

    /** Get time elapsed since creation */
    UFUNCTION(BlueprintCallable, Category = "Task")
    float GetElapsedTime() const;

    /** Check if task is active (Pending or InProgress) */
    UFUNCTION(BlueprintCallable, Category = "Task")
    bool IsActive() const;

    /** Complete the task */
    UFUNCTION(BlueprintCallable, Category = "Task")
    void CompleteTask();

    /** Cancel the task */
    UFUNCTION(BlueprintCallable, Category = "Task")
    void CancelTask();

protected:
    /** Update actual duration when task is completed */
    void UpdateActualDuration();

private:
    /** Start time for duration tracking */
    FDateTime StartTime;
};

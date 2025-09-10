// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TaskComponent.h"
#include "TaskMasterExample.generated.h"

/**
 * Example Actor demonstrating TaskMaster usage
 * This class shows how to use the TaskMaster system in your game
 */
UCLASS(BlueprintType, Blueprintable)
class A1111_API ATaskMasterExample : public AActor
{
    GENERATED_BODY()

public:
    ATaskMasterExample();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    /** Task Component for managing tasks */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TaskMaster")
    UTaskComponent* TaskComponent;

    /** Example: Create some sample tasks */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Example")
    void CreateSampleTasks();

    /** Example: Complete a task */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Example")
    void CompleteTask(const FString& TaskID);

    /** Example: Get task statistics */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Example")
    void PrintTaskStatistics();

    /** Example: Get next task to work on */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Example")
    void WorkOnNextTask();

protected:
    /** Handle task manager updates */
    UFUNCTION()
    void OnTaskManagerUpdated(UTaskManager* Manager);

    /** Handle task added */
    UFUNCTION()
    void OnTaskAdded(UTask* Task);

    /** Handle task completed */
    UFUNCTION()
    void OnTaskCompleted(UTask* Task);

private:
    /** Current task being worked on */
    UPROPERTY()
    UTask* CurrentTask;
};

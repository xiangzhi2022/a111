// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Engine.h"
#include "Task.h"
#include "TaskManager.h"
#include "TaskComponent.h"
#include "TaskMasterTest.generated.h"

/**
 * Test class for TaskMaster system
 * Provides static functions to test TaskMaster functionality
 */
UCLASS(BlueprintType, Blueprintable)
class A1111_API UTaskMasterTest : public UObject
{
    GENERATED_BODY()

public:
    /** Run all TaskMaster tests */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Test")
    static void RunAllTests();

    /** Test basic task creation and management */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Test")
    static void TestBasicTaskOperations();

    /** Test task manager functionality */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Test")
    static void TestTaskManagerOperations();

    /** Test task component functionality */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Test")
    static void TestTaskComponentOperations();

    /** Test task events */
    UFUNCTION(BlueprintCallable, Category = "TaskMaster Test")
    static void TestTaskEvents();

private:
    /** Helper function to log test results */
    static void LogTestResult(const FString& TestName, bool bPassed);
};

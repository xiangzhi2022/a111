# TaskMaster System

A comprehensive task management system for Unreal Engine 5 projects.

## Overview

TaskMaster provides a complete task management solution with the following features:

- **Task Management**: Create, update, and track individual tasks
- **Priority System**: Assign priorities (Low, Medium, High, Critical) to tasks
- **Status Tracking**: Track task status (Pending, InProgress, Completed, Cancelled)
- **Time Tracking**: Monitor estimated and actual task duration
- **Tag System**: Categorize tasks with custom tags
- **Event System**: React to task changes with Blueprint-friendly events
- **Component Integration**: Easy integration with any Actor via TaskComponent

## Core Classes

### UTask
The fundamental task class that represents a single task.

**Key Features:**
- Task ID, title, and description
- Status and priority management
- Time tracking (creation, completion, duration)
- Tag system for categorization
- Event callbacks for status changes

**Usage:**
```cpp
UTask* MyTask = NewObject<UTask>();
MyTask->InitializeTask(TEXT("TASK_001"), TEXT("My Task"), TEXT("Task description"));
MyTask->SetPriority(ETaskPriority::High);
MyTask->AddTag(TEXT("Important"));
MyTask->CompleteTask();
```

### UTaskManager
Manages multiple tasks and provides centralized task operations.

**Key Features:**
- Task collection management
- Filtering by status, priority, and tags
- Task statistics
- Sorting capabilities
- Event broadcasting

**Usage:**
```cpp
UTaskManager* Manager = NewObject<UTaskManager>();
UTask* Task = Manager->AddTask(TEXT("TASK_001"), TEXT("My Task"));
TArray<UTask*> ActiveTasks = Manager->GetActiveTasks();
UTask* NextTask = Manager->GetNextTask();
```

### UTaskComponent
A component that can be attached to any Actor for easy task management.

**Key Features:**
- Automatic task manager creation
- Blueprint-friendly interface
- Event handling
- Task limit management

**Usage:**
```cpp
// In your Actor class
UTaskComponent* TaskComponent = CreateDefaultSubobject<UTaskComponent>(TEXT("TaskComponent"));

// Create tasks
UTask* Task = TaskComponent->CreateTask(TEXT("TASK_001"), TEXT("My Task"));

// Get statistics
int32 Total, Active, Completed, Cancelled;
TaskComponent->GetTaskStatistics(Total, Active, Completed, Cancelled);
```

## Enums

### ETaskStatus
- `Pending`: Task is waiting to be started
- `InProgress`: Task is currently being worked on
- `Completed`: Task has been finished
- `Cancelled`: Task has been cancelled

### ETaskPriority
- `Low`: Low priority task
- `Medium`: Medium priority task
- `High`: High priority task
- `Critical`: Critical priority task

## Events

### Task Events
- `OnStatusChanged`: Fired when task status changes
- `OnTaskCompleted`: Fired when task is completed

### TaskManager Events
- `OnTaskAdded`: Fired when a task is added to the manager
- `OnTaskRemoved`: Fired when a task is removed from the manager
- `OnTaskManagerUpdated`: Fired when the task manager is updated

## Blueprint Integration

All classes are fully Blueprint-compatible with:
- Blueprint-callable functions
- Blueprint-assignable events
- Blueprint-readable properties
- Blueprint-spawnable components

## Example Usage

See `TaskMasterExample.h` and `TaskMasterExample.cpp` for a complete example of how to use the TaskMaster system.

## Getting Started

1. **Add TaskComponent to an Actor:**
   ```cpp
   UTaskComponent* TaskComponent = CreateDefaultSubobject<UTaskComponent>(TEXT("TaskComponent"));
   ```

2. **Create Tasks:**
   ```cpp
   UTask* Task = TaskComponent->CreateTask(TEXT("TASK_001"), TEXT("My Task"), TEXT("Description"));
   Task->SetPriority(ETaskPriority::High);
   Task->AddTag(TEXT("Important"));
   ```

3. **Work with Tasks:**
   ```cpp
   UTask* NextTask = TaskComponent->GetNextTask();
   if (NextTask)
   {
       NextTask->SetStatus(ETaskStatus::InProgress);
       // Do work...
       NextTask->CompleteTask();
   }
   ```

4. **Get Statistics:**
   ```cpp
   int32 Total, Active, Completed, Cancelled;
   TaskComponent->GetTaskStatistics(Total, Active, Completed, Cancelled);
   ```

## Best Practices

1. **Use meaningful Task IDs**: Use descriptive IDs like "TASK_001", "CHARACTER_DESIGN", etc.
2. **Set appropriate priorities**: Use the priority system to manage task importance
3. **Use tags for organization**: Tag tasks with relevant categories
4. **Monitor task duration**: Use estimated vs actual duration to improve planning
5. **Handle events**: Bind to task events to react to changes
6. **Use the component**: Prefer TaskComponent over direct TaskManager usage for easier integration

## Future Enhancements

- Task dependencies and prerequisites
- Task templates and recurring tasks
- Task assignment to team members
- Progress tracking and milestones
- Export/import functionality
- UI widgets for task management

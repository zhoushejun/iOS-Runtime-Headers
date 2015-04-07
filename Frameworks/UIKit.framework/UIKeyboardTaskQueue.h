/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext;

@interface UIKeyboardTaskQueue : NSObject {
    NSMutableArray *_deferredTasks;
    BOOL _executingOnMainThread;
    UIKeyboardTaskExecutionContext *_executionContext;
    NSConditionLock *_lock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _mainThreadContinuation;

    NSMutableArray *_tasks;
}

@property(retain) UIKeyboardTaskExecutionContext * executionContext;

- (void)addDeferredTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)continueExecutionOnMainThread;
- (void)dealloc;
- (id)executionContext;
- (void)finishExecution;
- (id)init;
- (BOOL)isMainThreadExecutingTask;
- (void)lock;
- (void)lockWhenReadyForMainThread;
- (void)performDeferredTaskIfIdle;
- (void)performTask:(id)arg1;
- (void)performTaskOnMainThread:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)promoteDeferredTaskIfIdle;
- (id)scheduleTask:(id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3;
- (void)setExecutionContext:(id)arg1;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)unlock;
- (void)waitUntilAllTasksAreFinished;

@end

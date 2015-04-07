/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSString;

@interface NSThread : NSObject {
    unsigned char _bytes[44];
    id _private;
}

@property(getter=isCancelled,readonly) BOOL cancelled;
@property(getter=isExecuting,readonly) BOOL executing;
@property(getter=isFinished,readonly) BOOL finished;
@property(readonly) BOOL isMainThread;
@property(copy) NSString * name;
@property int qualityOfService;
@property unsigned int stackSize;
@property(retain,readonly) NSMutableDictionary * threadDictionary;
@property double threadPriority;

+ (void)_im_runBlock:(id)arg1;
+ (id)_mapkit_networkIOThread;
+ (void)_mapkit_runThread:(id)arg1;
+ (id)callStackReturnAddresses;
+ (id)callStackSymbols;
+ (id)currentThread;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (void)exit;
+ (BOOL)isDying;
+ (BOOL)isMainThread;
+ (BOOL)isMultiThreaded;
+ (id)mainThread;
+ (BOOL)setThreadPriority:(double)arg1;
+ (void)sleepForTimeInterval:(double)arg1;
+ (void)sleepUntilDate:(id)arg1;
+ (double)threadPriority;
+ (BOOL)tsp_hasReadFileAccess;
+ (BOOL)tsp_isArchiverThread;
+ (BOOL)tsp_isRunningFinalizeHandlersForLegacyDocument;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(id)arg1;
+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(id)arg1;
+ (void)tsp_performSynchronousOperationWithThreadDictionaryObject:(id)arg1 forKey:(id)arg2 usingBlock:(id)arg3;
+ (void)tsp_runFinalizeHandlersForReadCoordinator:(id)arg1 usingBlock:(id)arg2;

- (void)__im_performBlock:(id)arg1;
- (void)__im_performBlock:(id)arg1 afterDelay:(double)arg2;
- (void)__im_performBlock:(id)arg1 afterDelay:(double)arg2 modes:(id)arg3;
- (void)__im_performBlock:(id)arg1 modes:(id)arg2;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(BOOL)arg2 modes:(id)arg3;
- (void)_nq:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (BOOL)isCancelled;
- (BOOL)isDying;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isMainThread;
- (void)main;
- (id)name;
- (int)qualityOfService;
- (void)registerForStopNotification;
- (id)runLoop;
- (void)setName:(id)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setStackSize:(unsigned int)arg1;
- (void)setThreadPriority:(double)arg1;
- (BOOL)shouldStop;
- (unsigned int)stackSize;
- (void)start;
- (id)threadDictionary;
- (double)threadPriority;
- (void)unregisterForStopNotification;

@end

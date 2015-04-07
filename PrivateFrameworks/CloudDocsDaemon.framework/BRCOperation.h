/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCAccountSession, BRCLocalContainer, BRCThrottle, CKDatabase, NSDate, NSError, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BRCOperation : NSOperation {
    BRCAccountSession *_accountSession;
    BOOL _allowsCellularAccess;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BRCLocalContainer *_container;
    CKDatabase *_database;
    BOOL _executing;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishBlock;

    BOOL _finished;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _isDiscretionary;
    NSError *_lastError;
    NSDate *_lastTryDate;
    id _logSections;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _mainBlock;

    NSString *_name;
    NSDate *_nextTryDate;
    BRCThrottle *_operationThrottle;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSDate *_startDate;
    NSMutableArray *_subOperations;
    long long _throttleHash;
    BOOL _usesBackgroundSession;
}

@property(retain) BRCAccountSession * accountSession;
@property BOOL allowsCellularAccess;
@property(readonly) NSObject<OS_dispatch_queue> * callbackQueue;
@property(retain) BRCLocalContainer * container;
@property CKDatabase * database;
@property(readonly) NSError * error;
@property(getter=isExecuting) BOOL executing;
@property(copy) id finishBlock;
@property(getter=isFinished) BOOL finished;
@property BOOL isDiscretionary;
@property(readonly) id logSections;
@property(copy) id mainBlock;
@property(copy) NSString * name;
@property BRCThrottle * operationThrottle;
@property BOOL usesBackgroundSession;

- (void).cxx_destruct;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (void)_executeAndBumpThrottle:(id)arg1;
- (BOOL)_finishIfCancelled;
- (void)_main;
- (void)_scheduleExecutionWithPreviousError:(id)arg1 throttle:(id)arg2;
- (id)accountSession;
- (void)addSubOperation:(id)arg1;
- (BOOL)allowsCellularAccess;
- (id)callbackQueue;
- (void)cancel;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (id)container;
- (id)database;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)finishBlock;
- (BOOL)finishIfCancelled;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 group:(id)arg2;
- (BOOL)isConcurrent;
- (BOOL)isDiscretionary;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)logSections;
- (void)main;
- (id)mainBlock;
- (id)name;
- (id)operationThrottle;
- (void)setAccountSession:(id)arg1;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setContainer:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setExecuting:(BOOL)arg1;
- (void)setFinishBlock:(id)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setIsDiscretionary:(BOOL)arg1;
- (void)setMainBlock:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOperationThrottle:(id)arg1;
- (void)setUsesBackgroundSession:(BOOL)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)start;
- (id)state;
- (BOOL)usesBackgroundSession;

@end

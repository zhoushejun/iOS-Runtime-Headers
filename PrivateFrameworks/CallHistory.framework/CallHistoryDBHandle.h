/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class CallDBManager, CallDBProperties, NSManagedObjectContext, NSString;

@interface CallHistoryDBHandle : CHLogger {
    id _observerCallDBPropRef;
    id _observerCallRecordRef;
    CallDBManager *callDBManager;
    CallDBProperties *fCallDBProperties;
    NSManagedObjectContext *fCallDBPropertiesContext;
    NSManagedObjectContext *fCallRecordContext;
    NSString *objectId;
}

@property(readonly) CallDBManager * callDBManager;
@property(readonly) NSString * objectId;

+ (id)create;
+ (id)createWithDBManager:(id)arg1;

- (void).cxx_destruct;
- (id)callDBManager;
- (id)callRecordContext;
- (id)createCallRecord;
- (void)dealloc;
- (void)deleteAll;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(BOOL)arg3;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordMergeConflicts:(id)arg1;
- (id)initWithDBManager:(id)arg1;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (id)objectId;
- (void)postTimersChangedNotification;
- (void)registerForNotifications:(id)arg1;
- (void)resetTimers;
- (BOOL)save:(id*)arg1;
- (void)setCallDBProperties;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (void)updateCallDBProperties;

@end

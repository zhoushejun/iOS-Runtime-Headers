/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSPersistentStoreCoordinator, NSSet, NSString, NSUndoManager;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
    id *_additionalPrivateIvars;
    id *_cachedObsInfoByEntity;
    int _cd_rc;
    NSMutableSet *_changedObjects;
    NSString *_contextLabel;
    NSMutableSet *_deletedObjects;
    void *_dispatchQueue;
    double _fetchTimestamp;
    struct _managedObjectContextFlags { 
        unsigned int _registeredForCallback : 1; 
        unsigned int _propagatesDeletesAtEndOfEvent : 1; 
        unsigned int _exhaustiveValidation : 1; 
        unsigned int _processingChanges : 1; 
        unsigned int _useCommittedSnapshot : 1; 
        unsigned int _registeredUndoTransactionID : 1; 
        unsigned int _retainsAllRegisteredObjects : 1; 
        unsigned int _savingInProgress : 1; 
        unsigned int _wasDisposed : 1; 
        unsigned int _unprocessedChangesPending : 1; 
        unsigned int _isDirty : 1; 
        unsigned int _ignoreUndoCheckpoints : 1; 
        unsigned int _propagatingDeletes : 1; 
        unsigned int _isNSEditorEditing : 1; 
        unsigned int _isMainThreadBlessed : 1; 
        unsigned int _isImportContext : 1; 
        unsigned int _preflightSaveInProgress : 1; 
        unsigned int _disableDiscardEditing : 1; 
        unsigned int _isParentStoreContext : 1; 
        unsigned int _postSaveNotifications : 1; 
        unsigned int _isMerging : 1; 
        unsigned int _concurrencyType : 1; 
        unsigned int _reservedFlags : 10; 
    } _flags;
    int _ignoreChangeNotification;
    id _infoByGID;
    NSMutableSet *_insertedObjects;
    id _lock;
    long _lockCount;
    NSMutableSet *_lockedObjects;
    NSString *_name;
    long _objectStoreLockCount;
    id _parentObjectStore;
    id _queueOwner;
    id _referenceQueue;
    NSMutableSet *_refreshedObjects;
    void *_reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved6;
    int _spinLock;
    short _undoTransactionID;
    NSMutableSet *_unprocessedChanges;
    NSMutableSet *_unprocessedDeletes;
    NSMutableSet *_unprocessedInserts;
}

@property(readonly) unsigned int concurrencyType;
@property(readonly) NSSet * deletedObjects;
@property(readonly) BOOL hasChanges;
@property(readonly) NSSet * insertedObjects;
@property(retain) id mergePolicy;
@property(copy) NSString * name;
@property(retain) NSManagedObjectContext * parentContext;
@property(retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property BOOL propagatesDeletesAtEndOfEvent;
@property(readonly) NSSet * registeredObjects;
@property BOOL retainsRegisteredObjects;
@property double stalenessInterval;
@property(retain) NSUndoManager * undoManager;
@property(readonly) NSSet * updatedObjects;
@property(readonly) NSMutableDictionary * userInfo;

+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (BOOL)_handleError:(id)arg1 withError:(id*)arg2;
+ (void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (BOOL)_attemptCoalesceChangesForFetch;
- (unsigned int)_batchRetainedObjects:(id*)arg1 forCount:(unsigned int)arg2 withIDs:(id*)arg3 optionalHandler:(id)arg4 withInlineStorage:(BOOL)arg5;
- (void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2;
- (BOOL)_checkObjectForExistenceAndCacheRow:(id)arg1;
- (void)_clearChangedThisTransaction:(id)arg1;
- (void)_clearDeletions;
- (void)_clearInsertions;
- (void)_clearLockedObjects;
- (void)_clearOriginalSnapshotAndInitializeRec:(id)arg1;
- (void)_clearOriginalSnapshotForObject:(id)arg1;
- (void)_clearRefreshedObjects;
- (void)_clearUnprocessedDeletions;
- (void)_clearUnprocessedInsertions;
- (void)_clearUnprocessedUpdates;
- (void)_clearUpdates;
- (id)_committedSnapshotForObject:(id)arg1;
- (void)_copyChildObject:(id)arg1 toParentObject:(id)arg2 fromChildContext:(id)arg3;
- (unsigned int)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id*)arg4;
- (unsigned int)_countWithNoChangesForRequest:(id)arg1 error:(id*)arg2;
- (void)_createAndPostChangeNotification:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 withRefreshes:(id)arg4;
- (id)_createStoreFetchRequestForFetchRequest:(id)arg1;
- (id)_currentEventSnapshotForObject:(id)arg1;
- (void)_dealloc__;
- (id)_debuggingOnly_localObjectForGlobalID:(id)arg1;
- (id)_delegate;
- (void)_didSaveChanges;
- (void)_disableChangeNotifications;
- (BOOL)_disableDiscardEditing;
- (void)_dispose:(BOOL)arg1;
- (void)_disposeObjects:(id*)arg1 count:(unsigned long)arg2 notifyParent:(BOOL)arg3;
- (void)_enableChangeNotifications;
- (void)_enqueueEndOfEventNotification;
- (void)_establishEventSnapshotsForObject:(id)arg1;
- (id)_executeAsynchronousFetchRequest:(id)arg1;
- (void)_forceInsertionForObject:(id)arg1;
- (void)_forceRegisterLostFault:(id)arg1;
- (void)_forceRemoveFromDeletedObjects:(id)arg1;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 removeFromRegistry:(BOOL)arg3;
- (id)_globalIDForObject:(id)arg1;
- (id)_globalIDsForObjects:(id)arg1;
- (void)_growRegistrationCollectionForEntitySlot:(unsigned int)arg1 toSize:(unsigned int)arg2;
- (BOOL)_handleError:(id)arg1 withError:(id*)arg2;
- (BOOL)_handleOptimisticLockingError:(id)arg1 withError:(id*)arg2;
- (BOOL)_hasIDMappings;
- (BOOL)_ignoringChangeNotifications;
- (id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class*)arg2;
- (void)_incrementUndoTransactionID;
- (void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2;
- (void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2;
- (void)_informParentStoreNoLongerInterestedInObjectIDs:(id)arg1;
- (void)_informParentStoreOfInterestInObjectIDs:(id)arg1;
- (id)_initWithParentObjectStore:(unsigned long)arg1;
- (void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_isImportContext;
- (BOOL)_isPreflightSaveInProgress;
- (void)_managedObjectContextEditor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(struct { id x1; SEL x2; void *x3; }*)arg3;
- (id)_mappedForParentStoreID:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)_mergeChangesFromRemoteContextSave:(id)arg1;
- (void)_mergeRefreshEpilogueForObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (BOOL)_mergeRefreshObject:(id)arg1 mergeChanges:(BOOL)arg2 withPersistentSnapshot:(id)arg3;
- (id)_newSaveRequestForCurrentState;
- (id)_newUnchangedLockedObjects;
- (void)_noop:(id)arg1;
- (void)_objectsChangedInStore:(id)arg1;
- (id)_orderedSetWithResultsFromFetchRequest:(id)arg1;
- (id)_parentObjectsForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (BOOL)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)_parentProcessSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)_parentStore;
- (void)_performCoordinatorActionAndWait:(id)arg1;
- (void)_persistentStoreDidUpdateAdditionalRowsWithNewVersions:(id)arg1;
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1;
- (void)_postRefreshedObjectsNotificationAndClearList;
- (BOOL)_postSaveNotifications;
- (BOOL)_prepareForPushChanges:(id*)arg1;
- (void)_prepareUnprocessedDeletionAfterRefresh:(id)arg1;
- (void)_processChangedStoreConfigurationNotification:(id)arg1;
- (BOOL)_processDeletedObjects:(id*)arg1;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)_processNotificationQueue;
- (void)_processObjectStoreChanges:(id)arg1;
- (id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5;
- (id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (id)_processPendingUpdates:(id)arg1;
- (BOOL)_processRecentChanges:(id*)arg1;
- (void)_processRecentlyForgottenObjects:(id)arg1;
- (void)_processReferenceQueue:(BOOL)arg1;
- (void)_propagateDeletesUsingTable:(id)arg1;
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id*)arg1;
- (void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(BOOL)arg3;
- (void)_registerClearStateWithUndoManager;
- (void)_registerForNotificationsWithCoordinator:(id)arg1;
- (void)_registerObject:(id)arg1 withID:(id)arg2;
- (void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2;
- (void)_registerUndoForInsertedObjects:(id)arg1;
- (void)_registerUndoForModifiedObjects:(id)arg1;
- (void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3;
- (void)_resetAllChanges;
- (id)_retainedObjectWithID:(id)arg1;
- (id)_retainedObjectWithID:(id)arg1 error:(id*)arg2;
- (id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(BOOL)arg3;
- (id)_retainedObjectsFromRemovedStore:(id)arg1;
- (id)_retainedRegisteredObjects;
- (void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(BOOL)arg4 contextInfo:(void*)arg5 delayed:(BOOL)arg6;
- (void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2;
- (void)_setDelegate:(id)arg1;
- (void)_setDisableDiscardEditing:(BOOL)arg1;
- (void)_setIsUbiquityImportContext:(BOOL)arg1;
- (void)_setParentContext:(id)arg1;
- (void)_setPersistentStoreCoordinator:(id)arg1;
- (void)_setPostSaveNotifications:(BOOL)arg1;
- (void)_setRetainsRegisteredObjects:(BOOL)arg1;
- (void)_setStalenessInterval:(double)arg1;
- (void)_setStopsValidationAfterFirstError:(BOOL)arg1;
- (void)_setUndoManager:(id)arg1;
- (void)_startObservingUndoManagerNotifications;
- (void)_stopConflictDetectionForObject:(id)arg1;
- (void)_stopObservingUndoManagerNotifications;
- (BOOL)_stopsValidationAfterFirstError;
- (void)_storeConfigurationChanged:(id)arg1;
- (void)_thereIsNoSadnessLikeTheDeathOfOptimism;
- (BOOL)_tryRetain;
- (void)_undoDeletions:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_undoUpdates:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (void)_updateUnprocessedOwnDestinations:(id)arg1;
- (BOOL)_validateChangesForSave:(id*)arg1;
- (BOOL)_validateDeletesUsingTable:(id)arg1 withError:(id*)arg2;
- (BOOL)_validateObjects:(id)arg1 forOperation:(unsigned int)arg2 error:(id*)arg3 exhaustive:(BOOL)arg4 forSave:(BOOL)arg5;
- (void)assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (BOOL)commitEditing;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (unsigned int)concurrencyType;
- (unsigned int)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)deleteObject:(id)arg1;
- (id)deletedObjects;
- (id)description;
- (void)detectConflictsForObject:(id)arg1;
- (void)discardEditing;
- (void)encodeWithCoder:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (void)finalize;
- (BOOL)hasChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcurrencyType:(unsigned int)arg1;
- (void)insertObject:(id)arg1;
- (id)insertedObjects;
- (BOOL)isEditing;
- (BOOL)isUserInterfaceContext;
- (void)lock;
- (void)lockObjectStore;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
- (id)mergePolicy;
- (id)name;
- (id)name;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)objectDidBeginEditing:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (id)objectRegisteredForID:(id)arg1;
- (id)objectWithID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)parentContext;
- (void)performBlock:(id)arg1;
- (void)performBlockAndWait:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)photoLibrary;
- (void)pl_refresh;
- (void)processPendingChanges;
- (BOOL)propagatesDeletesAtEndOfEvent;
- (void)redo;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (id)registeredObjects;
- (oneway void)release;
- (void)reset;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)retainsRegisteredObjects;
- (void)rollback;
- (BOOL)save:(id*)arg1;
- (void)setMergePolicy:(id)arg1;
- (void)setName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentContext:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPropagatesDeletesAtEndOfEvent:(BOOL)arg1;
- (void)setRetainsRegisteredObjects:(BOOL)arg1;
- (void)setStalenessInterval:(double)arg1;
- (void)setUndoManager:(id)arg1;
- (double)stalenessInterval;
- (BOOL)tryLock;
- (void)undo;
- (id)undoManager;
- (void)unlock;
- (void)unlockObjectStore;
- (id)updatedObjects;
- (id)userInfo;

@end

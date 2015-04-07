/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLManagedObjectContextPTPNotificationDelegate>, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_xpc_object>, PLDelayedFiledSystemDeletions, PLMergePolicy, PLPhotoLibrary;

@interface PLManagedObjectContext : NSManagedObjectContext {
    NSMutableArray *_albumUuidForCloudDeletion;
    NSMutableSet *_avalancheUUIDsForUpdate;
    int _changeSource;
    NSMutableSet *_delayedAlbumCountUpdates;
    NSMutableSet *_delayedAlbumOrderUpdates;
    NSMutableSet *_delayedAssetsForFileSystemPersistency;
    NSMutableArray *_delayedCloudFeedAlbumUpdates;
    NSMutableArray *_delayedCloudFeedAssetInserts;
    NSMutableArray *_delayedCloudFeedAssetUpdates;
    NSMutableArray *_delayedCloudFeedCommentInserts;
    NSMutableSet *_delayedCloudFeedDeletionEntries;
    NSMutableArray *_delayedCloudFeedInvitationRecordUpdates;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    NSMutableArray *_delayedDupeAnalysisCloudInserts;
    NSMutableArray *_delayedDupeAnalysisNormalInserts;
    NSMapTable *_delayedMomentAssetDeletions;
    NSMutableArray *_delayedMomentAssetUpdates;
    NSMutableDictionary *_delayedSearchIndexUpdateUUIDs;
    BOOL _hasMetadataChanges;
    BOOL _isBackingALAssetsLibrary;
    BOOL _isConnectedToChangeHub;
    BOOL _isInitializingSingletons;
    BOOL _isObservingChangesForPTPNotificationDelegate;
    PLMergePolicy *_mergePolicy;
    BOOL _mergingChanges;
    PLPhotoLibrary *_photoLibrary;
    <PLManagedObjectContextPTPNotificationDelegate> *_ptpNotificationDelegate;
    BOOL _regenerateVideoThumbnails;
    BOOL _savingDuringMerge;
    BOOL _suspendClientServerTransactions;
    NSMutableDictionary *_updatedObjectsAttributes;
    NSMutableDictionary *_updatedObjectsRelationships;
    NSMutableArray *_uuidForCloudDeletion;
    NSObject<OS_xpc_object> *changeHubConnection;
}

@property NSObject<OS_xpc_object> * changeHubConnection;
@property int changeSource;
@property(retain) PLDelayedFiledSystemDeletions * delayedDeletions;
@property BOOL hasMetadataChanges;
@property BOOL isBackingALAssetsLibrary;
@property BOOL isInitializingSingletons;
@property(readonly) BOOL isUserInterfaceContext;
@property(readonly) BOOL mergingChanges;
@property PLPhotoLibrary * photoLibrary;
@property <PLManagedObjectContextPTPNotificationDelegate> * ptpNotificationDelegate;
@property BOOL regenerateVideoThumbnails;
@property(readonly) BOOL savingDuringMerge;
@property BOOL suspendClientServerTransactions;

+ (void)__prepareEntityPropertyLookups;
+ (id)_attributeNamesByIndexByEntityNames;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (BOOL)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (BOOL)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forceSourceModelVersion:(id)arg4;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (BOOL)_rebuildAndRetryPersistentStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forced:(BOOL)arg4;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (id)allContextsNotIdenticalTo:(void*)arg1;
+ (BOOL)assetsLibraryLoggingEnabled;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (BOOL)canMergeRemoteChanges;
+ (void)configurePersistentStoreCoordinator:(id)arg1;
+ (id)contextForDatabaseCreation:(const char *)arg1;
+ (id)contextForPhotoLibrary:(id)arg1 name:(const char *)arg2;
+ (BOOL)databaseIsMissing;
+ (id)databasePath;
+ (void)delayedAlbumCountUpdatesFromChangeHubEvent:(id)arg1 countUpdates:(id*)arg2;
+ (void)delayedAlbumOrderingUpdatesFromChangeHubEvent:(id)arg1 orderingUpdates:(id*)arg2;
+ (void)delayedAssetsForFileSystemPersistencyUpdatesFromChangeHubEvent:(id)arg1 assetUpdates:(id*)arg2;
+ (void)delayedCloudFeedDataFromChangeHubEvent:(id)arg1 albumUpdates:(id*)arg2 assetInserts:(id*)arg3 assetUpdates:(id*)arg4 commentInserts:(id*)arg5 invitationRecordUpdates:(id*)arg6 deletionEntries:(id*)arg7;
+ (void)delayedDupeAnalysisDataFromChangeHubEvent:(id)arg1 normalInserts:(id*)arg2 cloudInserts:(id*)arg3;
+ (void)delayedMomentDataFromChangeHubEvent:(id)arg1 insertsAndUpdates:(id*)arg2 deletes:(id*)arg3;
+ (void)delayedSearchIndexUpdatesFromChangeHubEvent:(id)arg1 updates:(id*)arg2;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3;
+ (void)handleUnknownMergeEvent;
+ (BOOL)hasAtLeastOneAsset;
+ (BOOL)hasConfiguredPhotoLibrary;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(id)arg3;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(id)arg2;
+ (void)moveOldStoreAside;
+ (BOOL)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (id)sharedPersistentStoreCoordinator;
+ (BOOL)storeIsOldEnough;
+ (BOOL)useModelMigratorToCreateDatabase;

- (void)_contextObjectsDidChange:(id)arg1;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 ofEntityKind:(id)arg4 fromRemoteContextDidSaveNotification:(id)arg5;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (BOOL)_isValidDelete:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)_recordAlbumUUIDForSearchIndexUpdate:(id)arg1 isInsert:(BOOL)arg2;
- (void)_recordAssetUUIDForSearchIndexUpdate:(id)arg1 isInsert:(BOOL)arg2;
- (void)_recordManagedObjectUUID:(id)arg1 forSearchIndexUpdateKey:(id)arg2;
- (void)_recordNormalAssetForDupeAnalyzis:(id)arg1;
- (void)_recordStreamAssetForDupeAnalyzis:(id)arg1;
- (BOOL)_tooManyAssetChangesToHandle:(unsigned int)arg1;
- (void)appendDelayedAlbumCountUpdatesToXPCMessage:(id)arg1;
- (void)appendDelayedAlbumOrderingUpdatesToXPCMessage:(id)arg1;
- (void)appendDelayedAssetsForFileSystemPersistencyUpdate:(id)arg1;
- (void)appendDelayedCloudFeedDataToXPCMessage:(id)arg1;
- (void)appendDelayedDupeAnalysisToXPCMessage:(id)arg1;
- (void)appendDelayedMomentDataToXPCMessage:(id)arg1;
- (void)appendDelayedSearchIndexUpdatesToXPCMessage:(id)arg1;
- (id)changeHubConnection;
- (int)changeSource;
- (void)connectToChangeHub;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (unsigned int)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delayedDeletions;
- (void)disconnectFromChangeHub;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)getAndClearRecordedAlbumForCloudDeletion;
- (id)getAndClearRecordedAssetForCloudDeletion;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (void)getAndClearUpdatedObjectsAttributes:(id*)arg1 relationships:(id*)arg2;
- (void)getDelayedAlbumCountUpdates:(id*)arg1;
- (void)getDelayedAlbumOrderingUpdates:(id*)arg1;
- (void)getDelayedAssetsForFilesystemPersistencyUpdates:(id*)arg1;
- (void)getDelayedCloudFeedAlbumUpdates:(id*)arg1 assetInserts:(id*)arg2 assetUpdates:(id*)arg3 commentInserts:(id*)arg4 invitationRecordUpdates:(id*)arg5 deletionEntries:(id*)arg6;
- (void)getDelayedDupeAnalysisNormalInserts:(id*)arg1 cloudInserts:(id*)arg2;
- (void)getDelayedMomentInsertsAndUpdates:(id*)arg1 deletes:(id*)arg2;
- (void)getDelayedSearchIndexUpdates:(id*)arg1;
- (id)globalValueForKey:(id)arg1;
- (BOOL)hasMetadataChanges;
- (id)initWithConcurrencyType:(unsigned int)arg1 useSharedPersistentStoreCoordinator:(BOOL)arg2;
- (BOOL)isBackingALAssetsLibrary;
- (BOOL)isInitializingSingletons;
- (BOOL)isReadOnly;
- (BOOL)isUserInterfaceContext;
- (BOOL)mergingChanges;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)photoLibrary;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (id)ptpNotificationDelegate;
- (void)recordAdditionalAssetAttributesForSearchIndexUpdate:(id)arg1;
- (void)recordAlbumCountUpdate:(id)arg1;
- (void)recordAlbumForCloudDeletion:(id)arg1;
- (void)recordAlbumForCloudFeedUpdate:(id)arg1;
- (void)recordAlbumForOrderingUpdate:(id)arg1;
- (void)recordAlbumForSearchIndexUpdate:(id)arg1;
- (void)recordAssetForAlbumCountUpdate:(id)arg1;
- (void)recordAssetForCloudDeletion:(id)arg1;
- (void)recordAssetForCloudFeedUpdate:(id)arg1;
- (void)recordAssetForDupeAnalysis:(id)arg1;
- (void)recordAssetForFileSystemPersistencyUpdate:(id)arg1;
- (void)recordAssetForMomentUpdate:(id)arg1;
- (void)recordAssetForSearchIndexUpdate:(id)arg1;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)recordCommentForCloudFeedUpdate:(id)arg1;
- (void)recordInvitationRecordForCloudFeedUpdate:(id)arg1;
- (void)recordManagedObjectWillSave:(id)arg1;
- (BOOL)regenerateVideoThumbnails;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (BOOL)save:(id*)arg1;
- (BOOL)savingDuringMerge;
- (void)setChangeHubConnection:(id)arg1;
- (void)setChangeSource:(int)arg1;
- (void)setDelayedDeletions:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setHasMetadataChanges:(BOOL)arg1;
- (void)setIsBackingALAssetsLibrary:(BOOL)arg1;
- (void)setIsInitializingSingletons:(BOOL)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)setRegenerateVideoThumbnails:(BOOL)arg1;
- (void)setSuspendClientServerTransactions:(BOOL)arg1;
- (void)setupLocalChangeNotifications;
- (BOOL)suspendClientServerTransactions;
- (void)tearDownLocalChangeNotifications;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;

@end

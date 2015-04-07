/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <NSObject><NSCopying>, NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSObject<PLAlbumProtocol>, NSOrderedSet, NSPredicate, NSString, NSURL, PLIndexMapper, PLManagedAsset, UIImage;

@interface PLFilteredAlbum : NSObject <PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache, PLUserEditableAlbumProtocol> {
    struct NSObject { Class x1; } *_backingAlbum;
    BOOL _backingAlbumSupportsCloudShared;
    BOOL _backingAlbumSupportsEdits;
    NSArray *_filterParameters;
    NSMutableIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSMutableOrderedSet *_weak_assets;
    int filter;
    BOOL isObservingContextChanges;
    NSPredicate *predicate;
}

@property NSMutableOrderedSet * _assets;
@property(readonly) unsigned int approximateCount;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property(retain) NSObject<PLAlbumProtocol> * backingAlbum;
@property unsigned int batchSize;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) BOOL canContributeToCloudSharedAlbum;
@property(readonly) BOOL canShowAvalancheStacks;
@property(readonly) BOOL canShowComments;
@property(retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords;
@property(retain) NSDate * cloudCreationDate;
@property(retain,readonly) NSDate * cloudFirstRecentBatchDate;
@property(retain) NSString * cloudGUID;
@property(retain) NSDate * cloudLastContributionDate;
@property(retain) NSDate * cloudLastInterestingChangeDate;
@property(retain) NSDictionary * cloudMetadata;
@property(retain) NSNumber * cloudMultipleContributorsEnabled;
@property(retain) NSNumber * cloudMultipleContributorsEnabledLocal;
@property BOOL cloudNotificationsEnabled;
@property(retain) NSString * cloudOwnerEmail;
@property(retain) NSString * cloudOwnerFirstName;
@property(retain) NSString * cloudOwnerFullName;
@property(retain) NSString * cloudOwnerHashedPersonID;
@property(retain) NSString * cloudOwnerLastName;
@property(retain) NSString * cloudPersonID;
@property(retain) NSNumber * cloudPublicURLEnabled;
@property(retain) NSNumber * cloudPublicURLEnabledLocal;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(retain) NSDate * cloudSubscriptionDate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * endDate;
@property int filter;
@property(readonly) NSArray * filterParameters;
@property(copy,readonly) NSIndexSet * filteredIndexes;
@property(retain,readonly) NSURL * groupURL;
@property BOOL hasUnseenContentBoolValue;
@property(readonly) unsigned int hash;
@property(retain) NSString * importSessionID;
@property(retain,readonly) PLIndexMapper * indexMapper;
@property(retain) NSOrderedSet * invitationRecords;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isFamilyCloudSharedAlbum;
@property(readonly) BOOL isFolder;
@property(readonly) BOOL isInTrash;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property BOOL isObservingContextChanges;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPanoramasAlbum;
@property(readonly) BOOL isPendingPhotoStreamAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL isRecentlyAddedAlbum;
@property(readonly) BOOL isStandInAlbum;
@property(readonly) BOOL isUserLibraryAlbum;
@property(readonly) BOOL isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(retain,readonly) NSString * localizedSharedWithLabel;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property(copy,readonly) NSString * name;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(retain,readonly) UIImage * posterImage;
@property(retain) NSPredicate * predicate;
@property(retain) NSString * publicURL;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(copy,readonly) id sortingComparator;
@property(retain,readonly) NSDate * startDate;
@property(readonly) Class superclass;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain,readonly) NSString * title;
@property(retain) NSNumber * unseenAssetsCount;
@property unsigned int unseenAssetsCountIntegerValue;
@property(retain,readonly) NSMutableOrderedSet * userEditableAssets;
@property(retain,readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 intersectFilter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)filteredIndexesInAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject { Class x1; }*)unfilteredAlbum:(struct NSObject { Class x1; }*)arg1;

- (id)_assets;
- (id)_cloudSharedBackingAlbum;
- (void)_commonInitWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (id)_editableBackingAlbum;
- (unsigned int)approximateCount;
- (id)assets;
- (unsigned int)assetsCount;
- (struct NSObject { Class x1; }*)backingAlbum;
- (void)backingContextDidChange:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)cachedIndexMapState;
- (BOOL)canContributeToCloudSharedAlbum;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (id)cloudAlbumSubscriberRecords;
- (id)cloudCreationDate;
- (id)cloudFirstRecentBatchDate;
- (id)cloudGUID;
- (id)cloudLastContributionDate;
- (id)cloudLastInterestingChangeDate;
- (id)cloudMetadata;
- (id)cloudMultipleContributorsEnabled;
- (id)cloudMultipleContributorsEnabledLocal;
- (BOOL)cloudNotificationsEnabled;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerHashedPersonID;
- (id)cloudOwnerLastName;
- (id)cloudPersonID;
- (id)cloudPublicURLEnabled;
- (id)cloudPublicURLEnabledLocal;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (id)cloudSubscriptionDate;
- (unsigned int)count;
- (unsigned int)countOfFilteredAssets;
- (id)currentStateForChange;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (id)description;
- (int)filter;
- (id)filterParameters;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)filteredIndexes;
- (void)getFilteredAssets:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)getUnseenStartMarkerIndex:(unsigned int*)arg1 count:(unsigned int*)arg2 showsProgress:(BOOL*)arg3;
- (id)groupURL;
- (BOOL)hasUnseenContentBoolValue;
- (id)importSessionID;
- (unsigned int)indexInFilteredAssetsOfObject:(id)arg1;
- (id)indexMapper;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned int)arg2;
- (id)invitationRecords;
- (BOOL)isCameraAlbum;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isEmpty;
- (BOOL)isFamilyCloudSharedAlbum;
- (BOOL)isFolder;
- (BOOL)isInTrash;
- (BOOL)isLibrary;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isObservingContextChanges;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isRecentlyAddedAlbum;
- (BOOL)isStandInAlbum;
- (BOOL)isUserLibraryAlbum;
- (BOOL)isWallpaperAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
- (id)localizedSharedWithLabel;
- (id)localizedTitle;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)mutableAssets;
- (id)name;
- (id)objectInFilteredAssetsAtIndex:(unsigned int)arg1;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned int)photosCount;
- (id)posterImage;
- (id)predicate;
- (id)publicURL;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned int)arg1;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)secondaryKeyAsset;
- (void)setBackingAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setCloudCreationDate:(id)arg1;
- (void)setCloudGUID:(id)arg1;
- (void)setCloudLastContributionDate:(id)arg1;
- (void)setCloudLastInterestingChangeDate:(id)arg1;
- (void)setCloudMetadata:(id)arg1;
- (void)setCloudMultipleContributorsEnabled:(id)arg1;
- (void)setCloudMultipleContributorsEnabledLocal:(id)arg1;
- (void)setCloudNotificationsEnabled:(BOOL)arg1;
- (void)setCloudOwnerEmail:(id)arg1;
- (void)setCloudOwnerFirstName:(id)arg1;
- (void)setCloudOwnerFullName:(id)arg1;
- (void)setCloudOwnerHashedPersonID:(id)arg1;
- (void)setCloudOwnerLastName:(id)arg1;
- (void)setCloudPersonID:(id)arg1;
- (void)setCloudPublicURLEnabled:(id)arg1;
- (void)setCloudPublicURLEnabledLocal:(id)arg1;
- (void)setCloudSubscriptionDate:(id)arg1;
- (void)setFilter:(int)arg1;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setInvitationRecords:(id)arg1;
- (void)setIsObservingContextChanges:(BOOL)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPublicURL:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setUnseenAssetsCount:(id)arg1;
- (void)setUnseenAssetsCountIntegerValue:(unsigned int)arg1;
- (void)set_assets:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)unseenAssetsCount;
- (unsigned int)unseenAssetsCountIntegerValue;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (id)userEditableAssets;
- (id)uuid;
- (unsigned int)videosCount;

@end

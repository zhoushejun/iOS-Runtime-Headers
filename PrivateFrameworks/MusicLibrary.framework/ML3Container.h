/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Predicate, NSArray, NSString;

@interface ML3Container : ML3Entity {
}

@property(copy,readonly) NSArray * cloudDisplayOrderingTerms;
@property(copy,readonly) NSArray * displayOrderingTerms;
@property(readonly) ML3Predicate * dynamicPredicate;
@property(getter=isLimitOrderingDescending,readonly) BOOL limitOrderingDescending;
@property(copy,readonly) NSArray * limitOrderingTerms;
@property(readonly) long long limitValue;
@property(getter=isLimitedByCount,readonly) BOOL limitedByCount;
@property(copy,readonly) NSString * limitingProperty;
@property(readonly) ML3Predicate * staticPredicate;

+ (id)__mediaTypesForTracksWithDatabaseConnection:(id)arg1 tracksPersistentIDsEnumerationBlock:(id)arg2;
+ (void)_addMediaTypesToContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;
+ (void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;
+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned long)arg3 limited:(BOOL)arg4 trackOrder:(unsigned long)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8;
+ (id)_mediaTypesForTracksInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;
+ (id)_mediaTypesForTracksWithSwappedPersistentIDs:(const long long*)arg1 count:(int)arg2 connection:(id)arg3;
+ (id)_mediaTypesForTracksWithSwappedPersistentIDsInArray:(id)arg1 connection:(id)arg2;
+ (void)_reloadContainedMediaTypesForContainerWithPersistID:(long long)arg1 connection:(id)arg2;
+ (void)_removeMediaTypesFromContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;
+ (void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 itemUpdateBlock:(id)arg3;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;
+ (BOOL)createMissingBuiltInSmartPlaylists:(id)arg1;
+ (id)databaseTable;
+ (id)defaultFilterPredicates;
+ (id)defaultOrderingTerms;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned int)arg4;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (BOOL)hasCriterionInCriteriaList:(struct SearchCriteriaList { }*)arg1 forITDBTrackField:(int)arg2;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (void)populateDynamicContainersInLibrary:(id)arg1;
+ (void)populateDynamicContainersInLibrary:(id)arg1 createBuiltinSmartPlaylists:(BOOL)arg2;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 createBuiltinSmartPlaylists:(BOOL)arg3;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 createBuiltinSmartPlaylists:(BOOL)arg3 usingConnection:(id)arg4;
+ (void)populateMediaTypesOfStaticContainersInLibrary:(id)arg1;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (void)populateStaticItemsOfDynamicContainersInLibrary:(id)arg1;
+ (id)predicateForCriteriaList:(struct SearchCriteriaList { }*)arg1 dynamicCriteria:(BOOL)arg2 parentMatchedAny:(BOOL)arg3;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;
+ (int)protocolSortTypeFromTrackOrder:(unsigned long)arg1;
+ (int)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (BOOL)smartCriteriaCanBeEvaluated:(id)arg1;
+ (unsigned long)trackOrderFromProtocolSortType:(int)arg1;
+ (BOOL)updateBuiltInSmartPlaylistNamesForCurrentLanguage:(id)arg1;

- (void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)arg1;
- (id)_addUnitesForCriterionInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_booleanStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_convertNumericValueFromCriterionMatchKey:(unsigned long)arg1 criteriaValue:(long long)arg2;
- (id)_criteriaListDescription:(struct SearchCriteriaList { }*)arg1 level:(int)arg2;
- (id)_dateStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_formatTime:(long long)arg1;
- (id)_nonzeroStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_numericStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (void)_setContainerSeedItemPersistentIDValue:(id)arg1;
- (BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 mediaTypesToRemove:(id)arg2 mediaTypesToAdd:(id)arg3 size:(int)arg4 notify:(BOOL)arg5;
- (BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 reloadContainedMediaTypes:(BOOL)arg2 mediaTypesToRemove:(id)arg3 mediaTypesToAdd:(id)arg4 size:(int)arg5 notify:(BOOL)arg6;
- (BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 reloadContainedMediaTypes:(BOOL)arg2 size:(int)arg3;
- (BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 reloadContainedMediaTypes:(BOOL)arg2 size:(int)arg3 notify:(BOOL)arg4;
- (id)_stringForCriterionBuffer:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_stringForCriterionMatchKey:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_stringForCriterionMatchType:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (id)_stringForTrackFieldCloudStatus:(long long)arg1;
- (id)_stringForTrackFieldMediaKind:(long long)arg1;
- (id)_stringStringForCriteriaInfo:(struct { unsigned int x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_7_1_1; struct SearchCriteriaList {} *x_7_1_2; } x7; })arg1;
- (BOOL)addTrackWithPersistentID:(long long)arg1;
- (BOOL)addTracksWithPersistentIDs:(long long*)arg1 count:(unsigned int)arg2;
- (BOOL)addTracksWithPersistentIDs:(long long*)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (id)childPlaylistPersistentIds;
- (id)cloudDisplayOrderingTerms;
- (id)criteriaListDescription;
- (id)displayOrderingTerms;
- (id)dynamicPredicate;
- (id)evaluationOrderingTerms;
- (struct SearchCriteriaList { }*)importedCriteriaList;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (BOOL)isBuiltInSmartPlaylist;
- (BOOL)isEvaluationOrderingDescending;
- (BOOL)isLimitOrderingDescending;
- (BOOL)isLimitedByCount;
- (id)limitOrderingTerms;
- (long long)limitValue;
- (id)limitingProperty;
- (BOOL)moveTrackFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)multiverseIdentifier;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
- (id)populateStatementParametersWithStaticTrackPersistentID:(id)arg1;
- (id)protocolItem;
- (BOOL)removeAllTracks;
- (BOOL)removeTracksAtIndexes:(id)arg1;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 indexesTransformBlock:(id)arg3;
- (BOOL)removeTracksWithPersistentIDs:(const long long*)arg1 atFilteredIndexes:(id)arg2;
- (BOOL)setContainsTrack:(BOOL)arg1 forPersistentID:(long long)arg2 notify:(BOOL)arg3;
- (BOOL)setTracksWithPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2;
- (BOOL)setTracksWithPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)setTracksWithSwappedPersistentIDData:(id)arg1;
- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(BOOL)arg3 withCompletionBlock:(id)arg4;
- (id)staticPredicate;
- (id)trackPersistentIds;

@end

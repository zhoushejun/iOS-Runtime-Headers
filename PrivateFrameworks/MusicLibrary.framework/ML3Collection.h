/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Collection : ML3Entity {
}

+ (id)artworkCacheIDProperty;
+ (BOOL)canonicalizeCollectionRepresentativeItemsWithWriteConnection:(id)arg1;
+ (id)collectionEntityClasses;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;
+ (id)trackForeignPersistentID;
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned int)arg3;
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned int)arg3 usingConnection:(id)arg4;

- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3;
- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkToken:(id)arg3;
- (void)updateTrackValues:(id)arg1;

@end

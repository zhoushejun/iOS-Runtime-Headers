/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncStatus : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, HDSyncAnchorMap, NSCopying> {
    NSMutableArray *_anchors;
    struct { 
        unsigned int statusCode : 1; 
    } _has;
    int _statusCode;
}

@property(retain) NSMutableArray * anchors;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL hasStatusCode;
@property(readonly) unsigned int hash;
@property int statusCode;
@property(readonly) Class superclass;

+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
+ (id)statusWithStatusCode:(int)arg1;

- (void).cxx_destruct;
- (void)addAnchors:(id)arg1;
- (void)addToPersistentUserInfo:(id)arg1;
- (unsigned int)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (id)anchors;
- (id)anchorsAtIndex:(unsigned int)arg1;
- (unsigned int)anchorsCount;
- (void)clearAnchors;
- (id)copyForPersistentUserInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)enumerateAnchorsAndSyncEntitiesWithBlock:(id)arg1;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (BOOL)readFrom:(id)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (void)setAnchors:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end

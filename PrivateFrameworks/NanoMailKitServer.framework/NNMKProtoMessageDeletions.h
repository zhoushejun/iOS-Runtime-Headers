/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSData, NSMutableArray;

@interface NNMKProtoMessageDeletions : PBCodable <NSCopying> {
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
    NSMutableArray *_messageDeletions;
}

@property(retain) NSData * dateSynced;
@property unsigned int fullSyncVersion;
@property(readonly) BOOL hasDateSynced;
@property BOOL hasFullSyncVersion;
@property(retain) NSMutableArray * messageDeletions;

- (void).cxx_destruct;
- (void)addMessageDeletion:(id)arg1;
- (void)clearMessageDeletions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasDateSynced;
- (BOOL)hasFullSyncVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageDeletionAtIndex:(unsigned int)arg1;
- (id)messageDeletions;
- (unsigned int)messageDeletionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)setMessageDeletions:(id)arg1;
- (void)writeTo:(id)arg1;

@end

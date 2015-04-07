/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecord, CKDPRecordIdentifier, CKDPRecordType, NSString;

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying> {
    NSString *_etag;
    struct { 
        unsigned int type : 1; 
    } _has;
    CKDPRecord *_record;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRecordType *_recordType;
    int _type;
}

@property(retain) NSString * etag;
@property(readonly) BOOL hasEtag;
@property(readonly) BOOL hasRecord;
@property(readonly) BOOL hasRecordIdentifier;
@property(readonly) BOOL hasRecordType;
@property BOOL hasType;
@property(retain) CKDPRecord * record;
@property(retain) CKDPRecordIdentifier * recordIdentifier;
@property(retain) CKDPRecordType * recordType;
@property int type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (BOOL)hasEtag;
- (BOOL)hasRecord;
- (BOOL)hasRecordIdentifier;
- (BOOL)hasRecordType;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)record;
- (id)recordIdentifier;
- (id)recordType;
- (void)setEtag:(id)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end

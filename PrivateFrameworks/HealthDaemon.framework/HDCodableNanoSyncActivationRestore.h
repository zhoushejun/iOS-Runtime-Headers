/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSData, NSMutableArray, NSString;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {
    NSString *_deviceSourceIdentifier;
    struct { 
        unsigned int sequenceNumber : 1; 
        unsigned int statusCode : 1; 
    } _has;
    NSData *_restoreIdentifier;
    NSMutableArray *_restores;
    long long _sequenceNumber;
    int _statusCode;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSString * deviceSourceIdentifier;
@property(readonly) BOOL hasDeviceSourceIdentifier;
@property(readonly) BOOL hasRestoreIdentifier;
@property BOOL hasSequenceNumber;
@property BOOL hasStatusCode;
@property(readonly) unsigned int hash;
@property(retain) NSData * restoreIdentifier;
@property(retain) NSMutableArray * restores;
@property long long sequenceNumber;
@property int statusCode;
@property(readonly) Class superclass;

+ (id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;

- (void).cxx_destruct;
- (void)addRestores:(id)arg1;
- (void)addToPersistentUserInfo:(id)arg1;
- (void)clearRestores;
- (id)copyForPersistentUserInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedRestoreUUID;
- (id)description;
- (id)deviceSourceIdentifier;
- (id)dictionaryRepresentation;
- (BOOL)hasDeviceSourceIdentifier;
- (BOOL)hasRequiredFields;
- (BOOL)hasRestoreIdentifier;
- (BOOL)hasSequenceNumber;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (BOOL)readFrom:(id)arg1;
- (id)restoreIdentifier;
- (id)restores;
- (id)restoresAtIndex:(unsigned int)arg1;
- (unsigned int)restoresCount;
- (long long)sequenceNumber;
- (void)setDeviceSourceIdentifier:(id)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setRestoreIdentifier:(id)arg1;
- (void)setRestores:(id)arg1;
- (void)setSequenceNumber:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end

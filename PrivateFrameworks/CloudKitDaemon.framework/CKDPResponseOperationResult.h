/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying> {
    int _code;
    CKDPResponseOperationResultError *_error;
    struct { 
        unsigned int code : 1; 
    } _has;
}

@property int code;
@property(retain) CKDPResponseOperationResultError * error;
@property BOOL hasCode;
@property(readonly) BOOL hasError;

- (void).cxx_destruct;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (BOOL)hasCode;
- (BOOL)hasError;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setError:(id)arg1;
- (void)setHasCode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying> {
    BOOL _assert;
    struct { 
        unsigned int assert : 1; 
    } _has;
}

@property BOOL assert;
@property BOOL hasAssert;

- (BOOL)assert;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAssert;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAssert:(BOOL)arg1;
- (void)setHasAssert:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end

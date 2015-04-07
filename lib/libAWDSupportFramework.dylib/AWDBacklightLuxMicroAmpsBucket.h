/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {
    unsigned int _bucketDuration;
    struct { 
        unsigned int bucketDuration : 1; 
    } _has;
}

@property unsigned int bucketDuration;
@property BOOL hasBucketDuration;

- (unsigned int)bucketDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBucketDuration;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBucketDuration:(unsigned int)arg1;
- (void)setHasBucketDuration:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end

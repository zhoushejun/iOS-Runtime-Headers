/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDEventKitSyncSyncedAttendeeResponseFromWatch : PBCodable <NSCopying> {
    unsigned long long _deltaTransitTime;
    struct { 
        unsigned int deltaTransitTime : 1; 
        unsigned int timestamp : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property unsigned long long deltaTransitTime;
@property BOOL hasDeltaTransitTime;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deltaTransitTime;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDeltaTransitTime;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeltaTransitTime:(unsigned long long)arg1;
- (void)setHasDeltaTransitTime:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

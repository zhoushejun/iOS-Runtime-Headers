/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerPowerStatsUpdateEvent : PBCodable <NSCopying> {
    unsigned int _associatedSleepDur;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int associatedSleepDur : 1; 
        unsigned int roamDur : 1; 
        unsigned int totalDur : 1; 
        unsigned int type : 1; 
        unsigned int unassociatedSleepDur : 1; 
    } _has;
    unsigned int _roamDur;
    unsigned long long _timestamp;
    unsigned int _totalDur;
    unsigned int _type;
    unsigned int _unassociatedSleepDur;
}

@property unsigned int associatedSleepDur;
@property BOOL hasAssociatedSleepDur;
@property BOOL hasRoamDur;
@property BOOL hasTimestamp;
@property BOOL hasTotalDur;
@property BOOL hasType;
@property BOOL hasUnassociatedSleepDur;
@property unsigned int roamDur;
@property unsigned long long timestamp;
@property unsigned int totalDur;
@property unsigned int type;
@property unsigned int unassociatedSleepDur;

- (unsigned int)associatedSleepDur;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAssociatedSleepDur;
- (BOOL)hasRoamDur;
- (BOOL)hasTimestamp;
- (BOOL)hasTotalDur;
- (BOOL)hasType;
- (BOOL)hasUnassociatedSleepDur;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)roamDur;
- (void)setAssociatedSleepDur:(unsigned int)arg1;
- (void)setHasAssociatedSleepDur:(BOOL)arg1;
- (void)setHasRoamDur:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTotalDur:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHasUnassociatedSleepDur:(BOOL)arg1;
- (void)setRoamDur:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalDur:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUnassociatedSleepDur:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)totalDur;
- (unsigned int)type;
- (unsigned int)unassociatedSleepDur;
- (void)writeTo:(id)arg1;

@end

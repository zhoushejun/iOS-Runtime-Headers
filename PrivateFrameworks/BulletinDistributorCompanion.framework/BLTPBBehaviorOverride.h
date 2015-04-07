/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class NSMutableArray;

@interface BLTPBBehaviorOverride : PBCodable <NSCopying> {
    unsigned long long _behaviorOverrideMode;
    unsigned long long _behaviorOverrideType;
    NSMutableArray *_effectiveIntervals;
    struct { 
        unsigned int behaviorOverrideMode : 1; 
        unsigned int behaviorOverrideType : 1; 
    } _has;
}

@property unsigned long long behaviorOverrideMode;
@property unsigned long long behaviorOverrideType;
@property(retain) NSMutableArray * effectiveIntervals;
@property BOOL hasBehaviorOverrideMode;
@property BOOL hasBehaviorOverrideType;

- (void).cxx_destruct;
- (void)addEffectiveIntervals:(id)arg1;
- (unsigned long long)behaviorOverrideMode;
- (unsigned long long)behaviorOverrideType;
- (void)clearEffectiveIntervals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)effectiveIntervals;
- (id)effectiveIntervalsAtIndex:(unsigned int)arg1;
- (unsigned int)effectiveIntervalsCount;
- (BOOL)hasBehaviorOverrideMode;
- (BOOL)hasBehaviorOverrideType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBehaviorOverrideMode:(unsigned long long)arg1;
- (void)setBehaviorOverrideType:(unsigned long long)arg1;
- (void)setEffectiveIntervals:(id)arg1;
- (void)setHasBehaviorOverrideMode:(BOOL)arg1;
- (void)setHasBehaviorOverrideType:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end

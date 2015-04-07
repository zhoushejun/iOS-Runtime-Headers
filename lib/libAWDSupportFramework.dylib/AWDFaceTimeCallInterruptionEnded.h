/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallInterruptionEnded : PBCodable <NSCopying> {
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int interruptionDuration : 1; 
        unsigned int isAudioResumed : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoResumed : 1; 
        unsigned int linkQuality : 1; 
        unsigned int onLockScreen : 1; 
    } _has;
    unsigned int _interruptionDuration;
    unsigned int _isAudioResumed;
    unsigned int _isVideo;
    unsigned int _isVideoResumed;
    int _linkQuality;
    unsigned int _onLockScreen;
    unsigned long long _timestamp;
}

@property(retain) NSString * guid;
@property(readonly) BOOL hasGuid;
@property BOOL hasInterruptionDuration;
@property BOOL hasIsAudioResumed;
@property BOOL hasIsVideo;
@property BOOL hasIsVideoResumed;
@property BOOL hasLinkQuality;
@property BOOL hasOnLockScreen;
@property BOOL hasTimestamp;
@property unsigned int interruptionDuration;
@property unsigned int isAudioResumed;
@property unsigned int isVideo;
@property unsigned int isVideoResumed;
@property int linkQuality;
@property unsigned int onLockScreen;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasGuid;
- (BOOL)hasInterruptionDuration;
- (BOOL)hasIsAudioResumed;
- (BOOL)hasIsVideo;
- (BOOL)hasIsVideoResumed;
- (BOOL)hasLinkQuality;
- (BOOL)hasOnLockScreen;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (unsigned int)interruptionDuration;
- (unsigned int)isAudioResumed;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (unsigned int)isVideoResumed;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (BOOL)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasInterruptionDuration:(BOOL)arg1;
- (void)setHasIsAudioResumed:(BOOL)arg1;
- (void)setHasIsVideo:(BOOL)arg1;
- (void)setHasIsVideoResumed:(BOOL)arg1;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasOnLockScreen:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInterruptionDuration:(unsigned int)arg1;
- (void)setIsAudioResumed:(unsigned int)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setIsVideoResumed:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

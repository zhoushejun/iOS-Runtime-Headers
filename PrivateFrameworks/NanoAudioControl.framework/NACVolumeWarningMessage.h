/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@class NSString;

@interface NACVolumeWarningMessage : PBCodable <NSCopying> {
    NSString *_category;
    struct { 
        unsigned int volumeWarningEnabled : 1; 
    } _has;
    BOOL _volumeWarningEnabled;
}

@property(retain) NSString * category;
@property(readonly) BOOL hasCategory;
@property BOOL hasVolumeWarningEnabled;
@property BOOL volumeWarningEnabled;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCategory;
- (BOOL)hasVolumeWarningEnabled;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasVolumeWarningEnabled:(BOOL)arg1;
- (void)setVolumeWarningEnabled:(BOOL)arg1;
- (BOOL)volumeWarningEnabled;
- (void)writeTo:(id)arg1;

@end

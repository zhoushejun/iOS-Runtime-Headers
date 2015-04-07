/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVOutputSettings, NSArray, NSDictionary, NSString, NSURL;

@interface AVAssetWriterInputConfigurationState : NSObject {
    short _alternateGroupID;
    BOOL _attachedToPixelBufferAdaptor;
    int _chunkAlignment;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _chunkDuration;
    int _chunkSize;
    BOOL _expectsMediaDataInRealTime;
    NSString *_extendedLanguageTag;
    NSString *_languageCode;
    int _layer;
    BOOL _marksOutputTrackAsEnabled;
    int _mediaTimeScale;
    NSString *_mediaType;
    NSArray *_metadataItems;
    struct CGSize { 
        float width; 
        float height; 
    } _naturalSize;
    AVOutputSettings *_outputSettings;
    BOOL _performsMultiPassEncodingIfSupported;
    float _preferredVolume;
    NSURL *_sampleReferenceBaseURL;
    struct opaqueCMFormatDescription { } *_sourceFormatHint;
    NSDictionary *_sourcePixelBufferAttributes;
    NSDictionary *_trackReferences;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _transform;
}

@property short alternateGroupID;
@property BOOL attachedToPixelBufferAdaptor;
@property BOOL expectsMediaDataInRealTime;
@property(copy) NSString * extendedLanguageTag;
@property(copy) NSString * languageCode;
@property int layer;
@property BOOL marksOutputTrackAsEnabled;
@property int mediaTimeScale;
@property(copy) NSString * mediaType;
@property(copy) NSArray * metadataItems;
@property struct CGSize { float x1; float x2; } naturalSize;
@property(copy) AVOutputSettings * outputSettings;
@property BOOL performsMultiPassEncodingIfSupported;
@property int preferredMediaChunkAlignment;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } preferredMediaChunkDuration;
@property int preferredMediaChunkSize;
@property float preferredVolume;
@property(copy) NSURL * sampleReferenceBaseURL;
@property(retain) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(copy) NSDictionary * sourcePixelBufferAttributes;
@property(copy) NSDictionary * trackReferences;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;

- (short)alternateGroupID;
- (BOOL)attachedToPixelBufferAdaptor;
- (void)dealloc;
- (BOOL)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (id)languageCode;
- (int)layer;
- (BOOL)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadataItems;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)outputSettings;
- (BOOL)performsMultiPassEncodingIfSupported;
- (int)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (int)preferredMediaChunkSize;
- (float)preferredVolume;
- (id)sampleReferenceBaseURL;
- (void)setAlternateGroupID:(short)arg1;
- (void)setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(int)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1;
- (void)setPreferredMediaChunkAlignment:(int)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(int)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setSourceFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTrackReferences:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)sourcePixelBufferAttributes;
- (id)trackReferences;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;

@end

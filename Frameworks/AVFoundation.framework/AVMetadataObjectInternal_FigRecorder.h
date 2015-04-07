/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInput_FigRecorder, AVMetadataObject_FigRecorder, NSString;

@interface AVMetadataObjectInternal_FigRecorder : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } bounds;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } duration;
    AVCaptureInput_FigRecorder *input;
    AVMetadataObject_FigRecorder *originalMetadataObject;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } time;
    NSString *type;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(retain) AVCaptureInput_FigRecorder * input;
@property(retain) AVMetadataObject_FigRecorder * originalMetadataObject;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property(retain) NSString * type;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)init;
- (id)input;
- (id)originalMetadataObject;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInput:(id)arg1;
- (void)setOriginalMetadataObject:(id)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setType:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)type;

@end

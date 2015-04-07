/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray;

@interface MFPGradientBrush : MFPBrush {
    NSArray *mBlend;
    NSArray *mColorBlend;
    struct CGShading { } *mShading;
    struct CGFunction { } *mShadingFunction;
    NSArray *mStops;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mTransform;
    int mWrapMode;
}

- (id).cxx_construct;
- (id)color;
- (id)colorAtPosition:(float)arg1;
- (void)createPhoneBrush;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (void)createStopsFromStartAndEndColors;
- (void)dealloc;
- (id)endColor;
- (void)fillPath:(id)arg1;
- (id)init;
- (void)setBlend:(id)arg1;
- (void)setColorBlend:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWrapMode:(int)arg1;
- (id)startColor;

@end

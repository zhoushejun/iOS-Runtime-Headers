/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIEnhancementHistogram;

@interface CIEnhancementCalculation : NSObject {
    CIEnhancementHistogram *borderHist;
    float curvePercent;
    float exposureValue;
    float exposureValueAtZeroShadow;
    BOOL faceInputSet;
    CIEnhancementHistogram *lumHist;
    float maxShadow;
    float minShadow;
    struct { 
        float i; 
        float q; 
    } originalFaceColor;
    float percentFaceChange;
    CIEnhancementHistogram *rgbSumHist;
    CIEnhancementHistogram *satHist;
}

@property(readonly) CIEnhancementHistogram * borderHist;
@property(readonly) CIEnhancementHistogram * lumHist;
@property(readonly) struct { float x1; float x2; } originalFaceColor;
@property(readonly) CIEnhancementHistogram * rgbSumHist;
@property(readonly) CIEnhancementHistogram * satHist;

+ (float)bestWarmthForI:(float)arg1 q:(float)arg2 percentChange:(float*)arg3;

- (id)borderHist;
- (unsigned long)curveCount;
- (struct CGPoint { float x1; float x2; })curvePointAtIndex:(unsigned long)arg1;
- (void)dealloc;
- (void)downSampleHistogram:(id)arg1 to:(unsigned int)arg2 storeIn:(float*)arg3;
- (id)faceBalanceStrength;
- (id)faceBalanceWarmth;
- (id)init;
- (id)lumHist;
- (struct { float x1; float x2; })originalFaceColor;
- (void)printAnalysis;
- (void)printHistogram:(id)arg1 downsampledTo:(unsigned int)arg2;
- (void)printHistogramsDownsampledTo:(unsigned int)arg1;
- (int)putShadowsAnalysisInto:(float*)arg1;
- (id)rawShadow;
- (id)rgbSumHist;
- (id)satHist;
- (void)setBorderHistogram:(id)arg1;
- (void)setCurvePercent:(float)arg1;
- (void)setExposureValue:(float)arg1;
- (void)setFaceColorFromChromaI:(float)arg1 andChromaQ:(float)arg2;
- (void)setLuminanceHistogram:(id)arg1;
- (void)setRGBSumHistogram:(id)arg1;
- (void)setSaturationHistogram:(id)arg1;
- (void)setShadowsMin:(float)arg1 max:(float)arg2 zeroExposure:(float)arg3;
- (void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (id)shadow;
- (id)vibrance;

@end

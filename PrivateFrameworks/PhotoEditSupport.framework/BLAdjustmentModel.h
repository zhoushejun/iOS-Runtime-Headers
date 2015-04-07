/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class CIFilter;

@interface BLAdjustmentModel : NSObject {
    float _autoBlackLevelAtShadowsMaxLevel;
    float _autoShadowsMaxLevel;
    float _blackLevel;
    float _brightness;
    CIFilter *_colorBalanceFilter;
    CIFilter *_colorFilter;
    float _contrast;
    CIFilter *_curvesFilter;
    CIFilter *_faceBalanceFilter;
    float _faceBalanceWarmth;
    BOOL _hasColor;
    BOOL _hasExposure;
    BOOL _hasFaceBalance;
    BOOL _hasPentaCurve;
    BOOL _hasSaturation;
    BOOL _hasSkyAndGrass;
    BOOL _hasUnderwaterBalance;
    BOOL _hasWhiteBalance;
    int _highlightShadowAdjustVersion;
    CIFilter *_highlightsAndShadowsFilter;
    float _histogramAverageLinearBlue;
    float _histogramAverageLinearGreen;
    float _histogramAverageLinearRed;
    float _histogramBlackPoint;
    float _histogramWhitePoint;
    BOOL _isChainBuilt;
    BOOL _reprocessFaceBalance;
    BOOL _reprocessPentaCurve;
    BOOL _reprocessSaturation;
    BOOL _reprocessSkyAndGrass;
    BOOL _reprocessUnderwaterBalance;
    BOOL _reprocessWhiteBalance;
    float _saturation;
    float _saturationGrass;
    float _saturationSky;
    CIFilter *_skyAndGrassFilter;
    CIFilter *_tempAndTintFilter;
    float _underwaterBalanceDepthStrength;
    CIFilter *_underwaterBalanceFilter;
    float _underwaterBalanceWaterBlend;
    BOOL _useVibrancy;
    CIFilter *_vibranceFilter;
    struct { 
        int type; 
        float x; 
        float y; 
        float ri; 
        float gq; 
        float b; 
    } _whiteBalance;
    float _whiteLevel;
}

@property(retain) CIFilter * colorBalanceFilter;
@property(retain) CIFilter * colorFilter;
@property(retain) CIFilter * curvesFilter;
@property(retain) CIFilter * faceBalanceFilter;
@property(retain) CIFilter * highlightsAndShadowsFilter;
@property(retain) CIFilter * skyAndGrassFilter;
@property(retain) CIFilter * tempAndTintFilter;
@property(retain) CIFilter * underwaterBalanceFilter;
@property(retain) CIFilter * vibranceFilter;

+ (id)exposureValuesForToneCurveData:(id)arg1 highlightsAndShadowsData:(id)arg2 andHistogramData:(id)arg3;
+ (struct CGPoint { float x1; float x2; })pointOnCurveFromPoint:(struct CGPoint { float x1; float x2; })arg1 withSlope:(float)arg2 andCurveData:(float*)arg3;
+ (id)rampImage;

- (id)adjustedImageFromImage:(id)arg1;
- (void)buildChain;
- (id)colorBalanceFilter;
- (id)colorFilter;
- (id)curvesFilter;
- (void)dealloc;
- (id)faceBalanceFilter;
- (BOOL)hasAdjustments;
- (BOOL)hasColor;
- (BOOL)hasExposure;
- (id)highlightsAndShadowsFilter;
- (id)init;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (void)releaseChain;
- (void)reset;
- (void)setColorBalanceFilter:(id)arg1;
- (void)setColorFilter:(id)arg1;
- (void)setCurvesFilter:(id)arg1;
- (void)setFaceBalanceFilter:(id)arg1;
- (void)setHighlightsAndShadowsFilter:(id)arg1;
- (void)setSkyAndGrassFilter:(id)arg1;
- (void)setTempAndTintFilter:(id)arg1;
- (void)setUnderwaterBalanceFilter:(id)arg1;
- (void)setVibranceFilter:(id)arg1;
- (id)skyAndGrassFilter;
- (id)tempAndTintFilter;
- (id)underwaterBalanceFilter;
- (void)updateAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (id)vibranceFilter;

@end

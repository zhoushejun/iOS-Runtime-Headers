/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSArray, NSString, UIColor;

@interface PTLegibleTextAssistantSettings : _UISettings {
    BOOL _drawingShadowDrawsText;
    UIColor *_foregroundColor;
    struct { 
        float meanRed; 
        float meanGreen; 
        float meanBlue; 
        float meanHue; 
        float meanSaturation; 
        float meanBrightness; 
        float meanAlpha; 
        float standardDeviationBrightness; 
        float standardDeviationSaturation; 
    } _imageStatistics;
    NSArray *_shadowAlphas;
    NSString *_shadowCompositingFilterName;
    NSArray *_shadowRadii;
}

@property BOOL drawingShadowDrawsText;
@property(retain) UIColor * foregroundColor;
@property struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } imageStatistics;
@property(copy) NSArray * shadowAlphas;
@property(copy) NSString * shadowCompositingFilterName;
@property(copy) NSArray * shadowRadii;

+ (id)settingsWithImageStatistics:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })arg1;

- (void).cxx_destruct;
- (id)calculateForegroundColorWithImageStatistics:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })arg1;
- (BOOL)drawingShadowDrawsText;
- (id)foregroundColor;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })imageStatistics;
- (void)setDefaultValues;
- (void)setDrawingShadowDrawsText:(BOOL)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setImageStatistics:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })arg1;
- (void)setShadowAlphas:(id)arg1;
- (void)setShadowCompositingFilterName:(id)arg1;
- (void)setShadowRadii:(id)arg1;
- (id)shadowAlphas;
- (id)shadowCompositingFilterName;
- (id)shadowRadii;

@end

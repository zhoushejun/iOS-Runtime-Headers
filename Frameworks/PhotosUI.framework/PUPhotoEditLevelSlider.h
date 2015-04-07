/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSLayoutConstraint, NSString, PUAdjustmentsMode, UIView;

@interface PUPhotoEditLevelSlider : UIView <PUPhotoEditLayoutStaticAdaptable> {
    UIView *__sliderContentView;
    PUAdjustmentsMode *_adjustmentsMode;
    float _baseValue;
    BOOL _baseValueIndicatorHidden;
    UIView *_baseValueIndicatorView;
    NSArray *_baseValueIndicatorViewConstraints;
    NSLayoutConstraint *_baseValueIndicatorViewPositionConstraint;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    NSArray *_contentViewConstraints;
    NSLayoutConstraint *_contentViewOffsetConstraint;
    float _currentValue;
    BOOL _directionReversed;
    float _identityOffset;
    float _identityValue;
    int _layoutOrientation;
    UIView *_levelIndicatorView;
    NSArray *_levelIndicatorViewConstraints;
    NSLayoutConstraint *_levelIndicatorViewOffsetConstraint;
    NSLayoutConstraint *_levelIndicatorViewSpanConstraint;
    float _maxValue;
    float _minValue;
    float _pointsPerUnitAboveIdentity;
    float _pointsPerUnitBelowIdentity;
    BOOL _scaleFactorsAreValid;
}

@property(retain) PUAdjustmentsMode * adjustmentsMode;
@property float baseValue;
@property(getter=isBaseValueIndicatorHidden) BOOL baseValueIndicatorHidden;
@property struct CGSize { float x1; float x2; } contentSize;
@property float currentValue;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isDirectionReversed) BOOL directionReversed;
@property(readonly) unsigned int hash;
@property(readonly) float identityOffset;
@property float identityValue;
@property(readonly) int layoutOrientation;
@property float maxValue;
@property float minValue;
@property(readonly) Class superclass;
@property(readonly) BOOL wantsLevelIndicator;

- (void).cxx_destruct;
- (float)_baseValueIndicatorOffset;
- (float)_contentOffsetForLevelValue:(float)arg1;
- (void)_invalidateContentViewConstraints;
- (float)_levelIndicatorOffset;
- (float)_levelIndicatorWidth;
- (id)_sliderContentView;
- (void)_updateBaseValueIndicatorVisibiliyAnimated:(BOOL)arg1;
- (void)_updateConversionFactorsIfNeeded;
- (void)_updateLevelDisplay;
- (id)adjustmentsMode;
- (float)baseValue;
- (struct CGSize { float x1; float x2; })contentSize;
- (float)currentValue;
- (float)identityOffset;
- (float)identityValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateConversionFactors;
- (BOOL)isBaseValueIndicatorHidden;
- (BOOL)isDirectionReversed;
- (int)layoutOrientation;
- (float)levelValueForOffset:(float)arg1;
- (float)maxValue;
- (float)minValue;
- (float)offsetForLevelValue:(float)arg1;
- (id)preferredSliderContentView;
- (void)setAdjustmentsMode:(id)arg1;
- (void)setBaseValue:(float)arg1;
- (void)setBaseValueIndicatorHidden:(BOOL)arg1;
- (void)setBaseValueIndicatorHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setCurrentValue:(float)arg1;
- (void)setDirectionReversed:(BOOL)arg1;
- (void)setIdentityValue:(float)arg1;
- (void)setMaxValue:(float)arg1;
- (void)setMinValue:(float)arg1;
- (void)setupWithLayoutOrientation:(int)arg1;
- (void)updateConstraints;
- (BOOL)wantsLevelIndicator;

@end

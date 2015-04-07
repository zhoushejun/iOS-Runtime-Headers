/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CAShapeLayer, NSArray, UIColor, UIImage, UIImageView, UIView;

@interface UISlider : UIControl <NSCoding> {
    float _alpha;
    BOOL _animatingWithDynamics;
    struct __CFDictionary { } *_contentLookup;
    float _hitOffset;
    UIImageView *_innerThumbView;
    BOOL _maxColorIsValid;
    UIColor *_maxTintColor;
    UIView *_maxTrackClipView;
    UIImageView *_maxTrackView;
    float _maxValue;
    UIImageView *_maxValueImageView;
    UIColor *_minTintColor;
    UIImageView *_minTrackView;
    float _minValue;
    UIImageView *_minValueImageView;
    struct { 
        unsigned int continuous : 1; 
        unsigned int animating : 1; 
        unsigned int preparingToAnimate : 1; 
        unsigned int showValue : 1; 
        unsigned int trackEnabled : 1; 
        unsigned int creatingSnapshot : 1; 
        unsigned int thumbDisabled : 1; 
        unsigned int minTrackHidden : 1; 
    } _sliderFlags;
    BOOL _thumbIsArtworkBased;
    UIColor *_thumbTintColor;
    UIImageView *_thumbView;
    UIView *_thumbViewNeue;
    CAShapeLayer *_thumbViewNeueShape;
    NSArray *_trackColors;
    BOOL _trackIsArtworkBased;
    BOOL _useLookNeue;
    float _value;
}

@property(getter=isContinuous) BOOL continuous;
@property(readonly) UIImage * currentMaximumTrackImage;
@property(readonly) UIImage * currentMinimumTrackImage;
@property(readonly) UIImage * currentThumbImage;
@property(retain) UIColor * maximumTrackTintColor;
@property float maximumValue;
@property(retain) UIImage * maximumValueImage;
@property(retain) UIColor * minimumTrackTintColor;
@property float minimumValue;
@property(retain) UIImage * minimumValueImage;
@property(retain) UIColor * thumbTintColor;
@property float value;

- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_buildTrackArtwork;
- (id)_contentForState:(unsigned int)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (float)_cornerRadiusForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_initImages;
- (void)_initSubviews;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isThumbEnabled;
- (void)_layoutSubviewsForBoundsChange:(BOOL)arg1;
- (id)_maxTrackView;
- (id)_maxValueView;
- (id)_maximumTrackImageForState:(unsigned int)arg1;
- (id)_minTrackView;
- (id)_minValueView;
- (id)_minimumTrackImageForState:(unsigned int)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_rebuildControlThumb:(BOOL)arg1 track:(BOOL)arg2;
- (id)_scriptingInfo;
- (void)_sendDelayedActions;
- (void)_setContent:(id)arg1 forState:(unsigned int)arg2;
- (void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setMinimumTrackVisible:(BOOL)arg1 withDuration:(double)arg2;
- (void)_setThumbEnabled:(BOOL)arg1;
- (void)_setThumbImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setThumbTintColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTrackEnabled:(BOOL)arg1;
- (void)_setUseLookNeue:(BOOL)arg1;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(BOOL)arg4;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_thumbHitEdgeInsets;
- (id)_thumbImageForState:(unsigned int)arg1;
- (BOOL)_trackEnabled;
- (void)_updateAppearanceForEnabled:(BOOL)arg1;
- (void)_updateMaxTrackColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)createThumbViewNeue;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (id)currentThumbImage;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isAnimatingValueChange;
- (BOOL)isContinuous;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (id)maximumTrackImageForState:(unsigned int)arg1;
- (id)maximumTrackTintColor;
- (float)maximumValue;
- (id)maximumValueImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)minimumTrackImageForState:(unsigned int)arg1;
- (id)minimumTrackTintColor;
- (float)minimumValue;
- (id)minimumValueImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)scriptingInfoWithChildren;
- (void)setAlpha:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContinuous:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setMaximumTrackTintColor:(id)arg1;
- (void)setMaximumValue:(float)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowValue:(BOOL)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setThumbImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setThumbTintColor:(id)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)thumbImageForState:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)thumbTintColor;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)value;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })valueTextRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end

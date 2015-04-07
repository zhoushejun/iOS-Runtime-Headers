/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSSet, NSString, UIBarButtonItem, UIColor, UIImage, UINavigationItem;

@interface UINavigationButton : UIButton {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } __additionalSelectionInsets;
    BOOL __barItemHidden;
    Class _appearanceGuideClass;
    id _appearanceStorage;
    int _barStyle;
    struct CGSize { 
        float width; 
        float height; 
    } _boundsAdjustment;
    int _buttonItemStyle;
    BOOL _createdByBarButtonItem;
    float _fontScaleAdjustment;
    BOOL _isFontScaleInvalid;
    float _maximumWidth;
    float _minimumWidth;
    UIColor *_navigationBarTintColor;
    UIBarButtonItem *_originatingButtonItem;
    UINavigationItem *_originatingNavigationItem;
    NSSet *_possibleSystemItems;
    NSSet *_possibleTitles;
    unsigned int _size : 2;
    int _style;
    NSDictionary *_stylesForSizingTitles;
    BOOL _wantsBlendModeForAccessibilityBackgrounds;
    unsigned int _wantsLetterpressContent : 1;
}

@property(setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _additionalSelectionInsets;
@property(setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property(setter=_setBarItemHidden:) BOOL _barItemHidden;
@property(setter=_setButtonItemStyle:) int _buttonItemStyle;
@property(setter=_setCreatedByBarButtonItem:) BOOL _createdByBarButtonItem;
@property(setter=_setFontScaleAdjustment:) float _fontScaleAdjustment;
@property(setter=_setFontScaleInvalid:) BOOL _isFontScaleInvalid;
@property(setter=_setStylesForSizingTitles:,copy) NSDictionary * _stylesForSizingTitles;
@property(setter=_setWantsBlendModeForAccessibilityBackgrounds:) BOOL _wantsBlendModeForAccessibilityBackgrounds;
@property int barStyle;
@property int controlSize;
@property(retain) UIImage * image;
@property float maximumWidth;
@property float minimumWidth;
@property UIBarButtonItem * originatingButtonItem;
@property UINavigationItem * originatingNavigationItem;
@property int style;
@property(retain) UIColor * tintColor;
@property(retain) NSString * title;

+ (void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(int)arg2 isEnabled:(BOOL)arg3 withAccessibilityBackground:(BOOL)arg4 wantsBlendModeForAccessibilityBackgrounds:(BOOL)arg5;
+ (id)defaultFont;

- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_additionalSelectionInsets;
- (void)_adjustBounds;
- (id)_adjustedDefaultTitleFont;
- (Class)_appearanceGuideClass;
- (id)_appearanceStorage;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (int)_barButtonItemStyle;
- (BOOL)_barItemHidden;
- (int)_buttonItemStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_buttonTitleEdgeInsets;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_createdByBarButtonItem;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(BOOL)arg3;
- (id)_defaultTitleColorForState:(unsigned int)arg1;
- (id)_defaultTitleShadowColorForState:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })_defaultTitleShadowOffsetForState:(unsigned int)arg1;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (float)_fontScaleAdjustment;
- (BOOL)_hasBaselineAlignedAbsoluteVerticalPosition:(out float*)arg1 withinNavBar:(id)arg2 forSize:(struct CGSize { float x1; float x2; })arg3;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isFontScaleInvalid;
- (BOOL)_isModernButton;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_pathImageEdgeInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_pathTitleEdgeInsets;
- (void)_prepareToAppearInNavigationItem:(id)arg1 onLeft:(BOOL)arg2;
- (id)_scriptingInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectedIndicatorBounds;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBarItemHidden:(BOOL)arg1;
- (void)_setBoundsAdjustment:(struct CGSize { float x1; float x2; })arg1;
- (void)_setButtonItemStyle:(int)arg1;
- (void)_setCreatedByBarButtonItem:(BOOL)arg1;
- (void)_setFontScaleAdjustment:(float)arg1;
- (void)_setFontScaleInvalid:(BOOL)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 deferLayout:(BOOL)arg2;
- (void)_setStylesForSizingTitles:(id)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitleFrozen:(BOOL)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1;
- (void)_setWantsLetterpressContent;
- (BOOL)_showsAccessibilityBackgroundWhenEnabled;
- (id)_stylesForSizingTitles;
- (id)_tintColor;
- (struct UIOffset { float x1; float x2; })_titlePositionAdjustmentForBarMetrics:(int)arg1;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (void)_updateContentInsets;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_updateStyle;
- (void)_updateTitleColorsForState:(unsigned int)arg1;
- (void)_updateTitleForLetterpress;
- (BOOL)_wantsAccessibilityButtonShapes;
- (BOOL)_wantsBlendModeForAccessibilityBackgrounds;
- (int)barStyle;
- (BOOL)contentsEqualTo:(id)arg1 withStyle:(int)arg2;
- (int)controlSize;
- (void)dealloc;
- (id)image;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 style:(int)arg2;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3 applyBezel:(BOOL)arg4 forBarStyle:(int)arg5 buttonItemStyle:(int)arg6;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;
- (id)initWithTitle:(id)arg1 style:(int)arg2;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(BOOL)arg8 forButtonItemStyle:(int)arg9;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (void)layoutSubviews;
- (float)maximumWidth;
- (float)minimumWidth;
- (id)originatingButtonItem;
- (id)originatingNavigationItem;
- (void)setBarStyle:(int)arg1;
- (void)setControlSize:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumWidth:(float)arg1;
- (void)setMinimumWidth:(float)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
- (void)setOriginatingButtonItem:(id)arg1;
- (void)setOriginatingNavigationItem:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (id)title;

@end

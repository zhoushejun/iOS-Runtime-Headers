/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, UIColor, UIView;

@interface UISegmentedControl : UIControl <NSCoding, _UIBasicAnimationFactory> {
    BOOL __hasTranslucentOptionsBackground;
    id _appearanceStorage;
    UIView *_backgroundBarView;
    int _barStyle;
    float _enabledAlpha;
    int _highlightedSegment;
    UIView *_removedSegment;
    struct { 
        unsigned int style : 3; 
        unsigned int size : 2; 
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks : 1; 
        unsigned int momentaryClick : 1; 
        unsigned int tracking : 1; 
        unsigned int autosizeToFitSegments : 1; 
        unsigned int isSizingToFit : 1; 
        unsigned int autosizeText : 1; 
        unsigned int transparentBackground : 1; 
        unsigned int useProportionalWidthSegments : 1; 
        unsigned int translucentBackground : 1; 
        unsigned int appearanceNeedsUpdate : 1; 
    } _segmentedControlFlags;
    NSMutableArray *_segments;
    int _selectedSegment;
}

@property(setter=_setTranslucentOptionsBackground:) BOOL _hasTranslucentOptionsBackground;
@property BOOL apportionsSegmentWidthsByContent;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=isMomentary) BOOL momentary;
@property(readonly) unsigned int numberOfSegments;
@property int segmentedControlStyle;
@property int selectedSegmentIndex;
@property(readonly) Class superclass;
@property(retain) UIColor * tintColor;

+ (id)_modernBackgroundSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
+ (id)_modernDividerImage;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (float)defaultHeight;
+ (float)defaultHeightForStyle:(int)arg1;
+ (float)defaultHeightForStyle:(int)arg1 size:(int)arg2;

- (void)_animateContentChangeWithAnimations:(id)arg1 completion:(id)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned int)arg1;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (id)_badgeValueForSegmentAtIndex:(unsigned int)arg1;
- (float)_barHeight;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_clearSelectedSegment;
- (void)_commonSegmentedControlInit;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_hasTranslucentOptionsBackground;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(BOOL)arg3;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isInMiniBar;
- (BOOL)_isInTranslucentToolbar;
- (void)_mk_setItems:(id)arg1;
- (id)_optionsBackgroundImage;
- (BOOL)_optionsShadowHidden;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeSegmentAnimationFinished:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_resetForAppearanceChange;
- (void)_setAppearanceIsTiled:(BOOL)arg1 leftCapWidth:(unsigned int)arg2 rightCapWidth:(unsigned int)arg3;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)_setAutosizeText:(BOOL)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)_setControlSize:(int)arg1 andInvalidate:(BOOL)arg2;
- (void)_setCurrentBackgroundImage:(id)arg1;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (void)_setEnabled:(BOOL)arg1 forcePropagateToSegments:(BOOL)arg2;
- (void)_setHighlightedSegmentHighlighted:(BOOL)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_setOptionsBackgroundImage:(id)arg1;
- (void)_setOptionsShadowHidden:(BOOL)arg1;
- (void)_setSegmentedControlAppearance:(struct { id x1; float x2; float x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_4_1_6; } x4; struct { id x_5_1_1; id x_5_1_2; id x_5_1_3; id x_5_1_4; id x_5_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_5_1_6; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_6_1_6; } x6; struct { id x_7_1_1; id x_7_1_2; id x_7_1_3; id x_7_1_4; id x_7_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_7_1_6; } x7; BOOL x8; }*)arg1;
- (void)_setSelected:(BOOL)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(BOOL)arg3;
- (void)_setSelectedSegmentIndex:(int)arg1 notify:(BOOL)arg2;
- (void)_setSelectedSegmentIndex:(int)arg1 notify:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setTranslucentOptionsBackground:(BOOL)arg1;
- (void)_setUsesNewAnimations:(BOOL)arg1;
- (BOOL)_shouldSelectSegmentAtIndex:(int)arg1;
- (void)_tapSegmentAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_tintColorArchivingKey;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned int)arg1;
- (void)_updateOptionsBackground;
- (BOOL)_usesNewAnimations;
- (void)addSegmentWithTitle:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (BOOL)apportionsSegmentWidthsByContent;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (int)barStyle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGSize { float x1; float x2; })contentOffsetForSegment:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })contentOffsetForSegmentAtIndex:(unsigned int)arg1;
- (struct UIOffset { float x1; float x2; })contentPositionAdjustmentForSegmentType:(int)arg1 barMetrics:(int)arg2;
- (int)controlSize;
- (void)dealloc;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)highlightSegment:(int)arg1;
- (id)imageForSegment:(unsigned int)arg1;
- (id)imageForSegmentAtIndex:(unsigned int)arg1;
- (id)infoViewForSegment:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(int)arg2 withItems:(id)arg3;
- (id)initWithItems:(id)arg1;
- (void)insertSegment:(unsigned int)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegment:(unsigned int)arg1 withTitle:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (BOOL)isEnabledForSegment:(unsigned int)arg1;
- (BOOL)isEnabledForSegmentAtIndex:(unsigned int)arg1;
- (BOOL)isMomentary;
- (void)layoutSubviews;
- (unsigned int)numberOfSegments;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)removeAllSegments;
- (void)removeSegment:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)removeSegmentAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)removedSegment;
- (id)scriptingInfoWithChildren;
- (int)segmentControlStyle;
- (int)segmentedControlStyle;
- (void)selectSegment:(int)arg1;
- (int)selectedSegment;
- (int)selectedSegmentIndex;
- (void)setAlpha:(float)arg1;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg1;
- (void)setApportionsSegmentWidthsByContent:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setBarStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGSize { float x1; float x2; })arg1 forSegment:(unsigned int)arg2;
- (void)setContentOffset:(struct CGSize { float x1; float x2; })arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)setContentPositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forSegmentType:(int)arg2 barMetrics:(int)arg3;
- (void)setControlSize:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned int)arg2;
- (void)setEnabled:(BOOL)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned int)arg2;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)setImagePadding:(struct CGSize { float x1; float x2; })arg1 forSegment:(unsigned int)arg2;
- (void)setMomentary:(BOOL)arg1;
- (void)setRemovedSegment:(id)arg1;
- (void)setSegmentControlStyle:(int)arg1;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)setSelectedSegment:(int)arg1;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setTransparentBackground:(BOOL)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned int)arg2;
- (void)setWidth:(float)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (BOOL)shouldTrack;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;
- (id)titleForSegment:(unsigned int)arg1;
- (id)titleForSegmentAtIndex:(unsigned int)arg1;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)transparentBackground;
- (void)updateForMiniBarState:(BOOL)arg1;
- (BOOL)useBlockyMagnificationInClassic;
- (id)viewForBaselineLayout;
- (float)widthForSegment:(unsigned int)arg1;
- (float)widthForSegmentAtIndex:(unsigned int)arg1;

@end

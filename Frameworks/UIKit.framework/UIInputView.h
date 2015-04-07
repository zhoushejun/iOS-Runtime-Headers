/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CALayer, NSArray, NSMutableDictionary, NSString, UIImage, UIKBRenderConfig, UIView, _UIInputViewContent;

@interface UIInputView : UIView <UISplittableInputView> {
    float _contentRatio;
    struct CGSize { 
        float width; 
        float height; 
    } _defaultSize;
    BOOL _disableSplitSupport;
    float _gapWidth;
    BOOL _isTransitioning;
    struct CGSize { 
        float width; 
        float height; 
    } _leftContentSize;
    _UIInputViewContent *_leftContentView;
    float _leftOffset;
    UIImage *_mergedImage;
    NSMutableDictionary *_mergedSliceMap;
    UIKBRenderConfig *_renderConfig;
    struct CGSize { 
        float width; 
        float height; 
    } _rightContentSize;
    _UIInputViewContent *_rightContentView;
    UIImage *_splitImage;
    NSMutableDictionary *_splitSliceMap;
    int _style;
    BOOL _suppressBackgroundStyling;
    float _transitionGap;
    CALayer *_transitionLayer;
    float _transitionLeftOffset;
    float _transitionRatio;
    NSArray *_visibleLayers;
}

@property(retain) UIImage * _mergedImage;
@property(retain) NSMutableDictionary * _mergedSliceMap;
@property(retain) UIImage * _splitImage;
@property(retain) NSMutableDictionary * _splitSliceMap;
@property float contentRatio;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) int inputViewStyle;
@property(readonly) UIView * leftContentView;
@property struct CGSize { float x1; float x2; } leftContentViewSize;
@property(readonly) UIView * rightContentView;
@property struct CGSize { float x1; float x2; } rightContentViewSize;
@property(readonly) Class superclass;

+ (void)_setupAppearanceIfNecessary;

- (float)_additionalClipHeight;
- (void)_beginSplitTransitionIfNeeded:(float)arg1 gapWidth:(float)arg2;
- (int)_clipCornersOfView:(id)arg1;
- (struct CGSize { float x1; float x2; })_defaultSize;
- (BOOL)_disableSplitSupport;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (BOOL)_isSplit;
- (BOOL)_isToolbars;
- (BOOL)_isTransitioning;
- (id)_mergedImage;
- (id)_mergedSliceMap;
- (void)_setDisableSplitSupport:(BOOL)arg1;
- (void)_setLeftOffset:(float)arg1 gapWidth:(float)arg2;
- (void)_setNeedsContentSizeUpdate;
- (void)_setProgress:(float)arg1 boundedBy:(float)arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSuppressBackgroundStyling:(BOOL)arg1;
- (id)_splitBorderedBackgroundWithCorners:(unsigned int)arg1;
- (id)_splitImage;
- (id)_splitSliceMap;
- (BOOL)_supportsSplit;
- (BOOL)_suppressBackgroundStyling;
- (id)_toolbarBorderedBackground;
- (void)_updateClipCorners;
- (void)_updateWithSize:(struct CGSize { float x1; float x2; })arg1;
- (float)contentRatio;
- (void)dealloc;
- (void)didEndSplitTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inputViewStyle:(int)arg2;
- (int)inputViewStyle;
- (void)layoutMergedSubviews;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { float x1; float x2; })arg1 rightContentSize:(struct CGSize { float x1; float x2; })arg2;
- (id)leftContentView;
- (struct CGSize { float x1; float x2; })leftContentViewSize;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)rightContentView;
- (struct CGSize { float x1; float x2; })rightContentViewSize;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentRatio:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputViewStyle:(int)arg1;
- (void)setLeftContentViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRightContentViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)set_mergedImage:(id)arg1;
- (void)set_mergedSliceMap:(id)arg1;
- (void)set_splitImage:(id)arg1;
- (void)set_splitSliceMap:(id)arg1;
- (id)tintColor;
- (void)updateMergedSubviewConstraints;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { float x1; float x2; })arg1 rightContentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)willBeginSplitTransition;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, _UIBackdropView;

@interface UICalloutBarBackground : _UIBackdropView {
    UIImageView *_blurMaskView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _highlightRect;
    _UIBackdropView *_separatorView;
    UIImageView *_tintMaskView;
    float m_dividerOffsets[24];
}

@property(retain) UIImageView * blurMaskView;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } highlightRect;
@property(retain) _UIBackdropView * separatorView;
@property(retain) UIImageView * tintMaskView;

- (id)blurMaskView;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })highlightRect;
- (id)init;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setBlurDisabled:(BOOL)arg1;
- (void)setBlurMaskView:(id)arg1;
- (void)setDividerOffsets:(float*)arg1;
- (void)setHighlightRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1 forFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setSeparatorView:(id)arg1;
- (void)setTintMaskView:(id)arg1;
- (id)tintMaskView;

@end

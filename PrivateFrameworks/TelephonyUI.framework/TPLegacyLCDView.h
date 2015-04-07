/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLegacyLCDSubImageView, TPLegacyLCDTextView, UIView;

@interface TPLegacyLCDView : TPLegacyLCDBar {
    UIView *_backgroundGradientView;
    UIView *_contentView;
    BOOL _hasBackgroundGradient;
    TPLegacyLCDSubImageView *_imageView;
    TPLegacyLCDTextView *_labelView;
    unsigned int _layoutAsLabelled : 1;
    TPLegacyLCDTextView *_secondLineTextView;
    TPLegacyLCDTextView *_textView;
}

@property(retain) UIView * backgroundGradientView;
@property BOOL hasBackgroundGradient;

+ (float)labelFontSize;
+ (float)textFontSize;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (float)_labelVInset;
- (void)_resetContentViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text1Frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text2Frame;
- (float)_textVInset;
- (id)backgroundGradientView;
- (void)blinkLabel;
- (void)dealloc;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullSizedContentViewFrame;
- (BOOL)hasBackgroundGradient;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (id)label;
- (void)layoutSubviews;
- (id)secondLineText;
- (void)setBackgroundGradientView:(id)arg1;
- (void)setContentsAlpha:(float)arg1;
- (void)setHasBackgroundGradient:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (void)setSecondLineText:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setSubImage:(id)arg1;
- (void)setText:(id)arg1;
- (BOOL)shouldCenterContentView;
- (BOOL)shouldCenterText;
- (id)subImage;
- (id)text;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;

@end

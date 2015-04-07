/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIImageView;

@interface TPLCDBar : UIView {
    UIImageView *_shadowView;
}

@property(readonly) UIImageView * shadowView;

+ (id)backgroundImage;
+ (float)defaultHeight;
+ (float)defaultHeightForOrientation:(int)arg1;

- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOrientation:(int)arg1;
- (void)setOrientation:(int)arg1 updateFrame:(BOOL)arg2;
- (id)shadowView;

@end

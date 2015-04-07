/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class CALayer, UIColor, _SLSheetMaskLayer;

@interface SLSheetMasklayer : CALayer {
    UIColor *_backgroundColor;
    CALayer *_bottomLayer;
    UIColor *_clipBackgroundColor;
    float _clipCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastMaskRect;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    _SLSheetMaskLayer *_sheetMaskLayer;
    CALayer *_solidSheetMaskLayer;
    CALayer *_topLayer;
}

@property(retain) UIColor * clipBackgroundColor;
@property float clipCornerRadius;

- (void).cxx_destruct;
- (void)animateSheetMaskFromOldSheetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toSheetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (id)clipBackgroundColor;
- (float)clipCornerRadius;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(float)arg2;
- (void)removeAllAnimations;
- (void)removeSheetCutout;
- (void)restoreSheetCutout;
- (void)setClipBackgroundColor:(id)arg1;
- (void)setClipCornerRadius:(float)arg1;
- (void)updateMaskWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maskRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end

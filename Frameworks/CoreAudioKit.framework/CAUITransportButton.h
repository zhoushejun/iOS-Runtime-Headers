/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAUITransportButton : UIButton {
    int drawingStyle;
    struct CGColor { } *fillColor;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } imageRect;
}

@property int drawingStyle;
@property struct CGColor { }* fillColor;

+ (Class)layerClass;

- (int)drawingStyle;
- (struct CGColor { }*)fillColor;
- (void)flash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPath { }*)newPathRefForStyle:(int)arg1;
- (void)setDrawingStyle:(int)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

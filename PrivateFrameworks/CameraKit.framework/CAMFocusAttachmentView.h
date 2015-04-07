/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UILabel;

@interface CAMFocusAttachmentView : UIView {
    UILabel *__label;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _textInsets;
}

@property(retain) UILabel * _label;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textInsets;

- (void).cxx_destruct;
- (id)_label;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)set_label:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textInsets;

@end

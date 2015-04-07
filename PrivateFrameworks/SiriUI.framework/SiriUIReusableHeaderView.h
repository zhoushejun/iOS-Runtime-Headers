/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class NSString, SiriUIKeyline, SiriUISnippetViewController, UIButton, UIImageView, UILabel;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {
    UIImageView *_chevronView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    UIButton *_headerAreaButton;
    UILabel *_headerLabel;
    SiriUIKeyline *_keyline;
    int _keylineType;
    SiriUISnippetViewController *_snippetViewController;
    NSString *_titleText;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) UIButton * headerAreaButton;
@property int keylineType;
@property SiriUISnippetViewController * snippetViewController;
@property(readonly) Class superclass;
@property(copy) NSString * titleText;

+ (float)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configureHeaderLabelForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)desiredHeightForWidth:(float)arg1;
- (id)headerAreaButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)keylineType;
- (void)layoutSubviews;
- (void)setKeylineType:(int)arg1;
- (void)setSnippetViewController:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)snippetViewController;
- (id)titleText;

@end

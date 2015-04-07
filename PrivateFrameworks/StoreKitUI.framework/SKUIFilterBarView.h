/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMapTable, NSMutableArray, NSString, SKUIDividerView, SKUIMenuPopoverController, UIControl;

@interface SKUIFilterBarView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIMenuPopoverDelegate, SKUIViewElementView> {
    SKUIDividerView *_bottomDividerView;
    NSMutableArray *_centerElementViews;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    NSMutableArray *_elementControllers;
    UIControl *_focusedMenuButton;
    NSMutableArray *_leftElementViews;
    SKUIMenuPopoverController *_popoverController;
    NSMutableArray *_rightElementViews;
    NSMapTable *_viewElementViews;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_destroyMenuPopover;
- (void)_imageTapAction:(id)arg1;
- (void)_menuButtonAction:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(int)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUItemOfferButton : UIButton {
    int _animationHorizontalAlignment;
    NSString *_buttonStyle;
    NSString *_confirmationTitle;
    BOOL _isShowingConfirmation;
    NSString *_offerTitle;
    BOOL _shouldShowConfirmation;
}

@property int animationHorizontalAlignment;
@property(copy) NSString * confirmationTitle;
@property(copy) NSString * itemOfferButtonStyle;
@property(copy) NSString * offerTitle;
@property BOOL shouldShowConfirmation;
@property(getter=isShowingConfirmation) BOOL showingConfirmation;

+ (double)defaultAnimationDuration;
+ (id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2;

- (void)_applyConfiguration:(struct { id x1; int x2; int x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; id x5; id x6; })arg1;
- (struct { id x1; int x2; int x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; id x5; id x6; })_configurationForStyle:(id)arg1;
- (void)_reloadButton;
- (int)animationHorizontalAlignment;
- (BOOL)configureForItem:(id)arg1 offer:(id)arg2;
- (id)confirmationTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingConfirmation;
- (id)itemOfferButtonStyle;
- (void)layoutSubviews;
- (id)offerTitle;
- (void)setAnimationHorizontalAlignment:(int)arg1;
- (void)setConfirmationTitle:(id)arg1;
- (void)setItemOfferButtonStyle:(id)arg1;
- (void)setOfferTitle:(id)arg1;
- (void)setShouldShowConfirmation:(BOOL)arg1;
- (void)setShowingConfirmation:(BOOL)arg1;
- (void)setShowingConfirmation:(BOOL)arg1 duration:(double)arg2;
- (BOOL)shouldShowConfirmation;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIActionSheetDelegate>, NSMutableArray, NSString, UIAlertController, _UIAlertControllerShimPresenter, _UIWeakRef;

@interface UIActionSheet : UIView <UIPopoverControllerDelegate> {
    int _actionSheetStyle;
    NSMutableArray *_actions;
    UIAlertController *_alertController;
    BOOL _alertControllerShouldDismiss;
    int _cancelIndex;
    id _context;
    int _destructiveButtonIndex;
    BOOL _dismissingAlertController;
    int _firstOtherButtonIndex;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    _UIAlertControllerShimPresenter *_presenter;
    _UIWeakRef *_weakDelegate;
}

@property int actionSheetStyle;
@property int cancelButtonIndex;
@property(copy,readonly) NSString * debugDescription;
@property <UIActionSheetDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property int destructiveButtonIndex;
@property(readonly) int firstOtherButtonIndex;
@property(readonly) unsigned int hash;
@property(readonly) int numberOfButtons;
@property(readonly) Class superclass;
@property(copy) NSString * title;
@property(getter=isVisible,readonly) BOOL visible;
@property(retain) _UIWeakRef * weakDelegate;

+ (BOOL)_isAlertControllerShimClass;
+ (Class)_popoverControllerClass;

- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)_alertController;
- (id)_attributedTitleString;
- (id)_buttonAtIndex:(int)arg1;
- (id)_contentView;
- (void)_didPresent;
- (void)_dismissForTappedIndex:(int)arg1;
- (id)_indexesOfSelectedButtons;
- (BOOL)_isSBAlert;
- (void)_performPresentationDismissalWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)_prepareAlertActions;
- (BOOL)_prepareToDismissForTappedIndex:(int)arg1;
- (id)_preparedAlertActionAtIndex:(unsigned int)arg1;
- (id)_relinquishPopoverController;
- (void)_setAttributedTitleString:(id)arg1;
- (void)_setContentView:(id)arg1;
- (void)_setFirstOtherButtonIndex:(int)arg1;
- (void)_setIndexesOfSelectedButtons:(id)arg1;
- (void)_setIsPresented:(BOOL)arg1;
- (void)_showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned int)arg3 animated:(BOOL)arg4;
- (id)_titleLabel;
- (void)_toggleButtonSelectionAtIndex:(unsigned int)arg1;
- (int)actionSheetStyle;
- (int)addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)bodyText;
- (id)buttonAtIndex:(int)arg1;
- (id)buttonTitleAtIndex:(int)arg1;
- (int)cancelButtonIndex;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (int)destructiveButtonIndex;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (int)firstOtherButtonIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (BOOL)isVisible;
- (id)message;
- (int)numberOfButtons;
- (int)numberOfLinesInTitle;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentFromBarButtonItem:(id)arg1 direction:(unsigned int)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(int)arg4 animated:(BOOL)arg5;
- (void)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned int)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(int)arg5 animated:(BOOL)arg6;
- (void)presentSheetInContentView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)setActionSheetStyle:(int)arg1;
- (void)setBodyText:(id)arg1;
- (void)setCancelButtonIndex:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructiveButtonIndex:(int)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setInPopover:(BOOL)arg1;
- (void)setIndexOfSelectedButton:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)setSelectedButtonGlyphHighlightedImage:(id)arg1;
- (void)setSelectedButtonGlyphImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)setUseThreeColumnsButtonsLayout:(BOOL)arg1;
- (void)setWeakDelegate:(id)arg1;
- (void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)showFromObject:(id)arg1 animated:(BOOL)arg2;
- (void)showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)showFromTabBar:(id)arg1;
- (void)showFromToolbar:(id)arg1;
- (void)showInView:(id)arg1;
- (id)subtitle;
- (id)title;
- (BOOL)useThreeColumnsButtonsLayout;
- (id)weakDelegate;

@end

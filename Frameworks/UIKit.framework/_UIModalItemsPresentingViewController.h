/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, UIView, UIWindow, _UIModalItem;

@interface _UIModalItemsPresentingViewController : UIViewController {
    UIView *_backgroundView;
    _UIModalItem *_currentItem;
    UIView *_currentItemView;
    UIView *_dimmingView;
    BOOL _isInTransition;
    _UIModalItem *_itemBeingDismissed;
    _UIModalItem *_itemBeingPresented;
    NSMutableArray *_items;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _itemsTransitionCompletion;

    NSMutableArray *_itemsViews;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardFrame;
    float _keyboardHeight;
    NSMutableArray *_occludedWindows;
    UIWindow *_rotationDelegate;
}

@property(retain) _UIModalItem * currentItem;
@property BOOL isInTransition;
@property(retain) _UIModalItem * itemBeingDismissed;
@property(retain) _UIModalItem * itemBeingPresented;
@property(copy) id itemsTransitionCompletion;
@property(retain) UIWindow * rotationDelegate;

- (void)_applyDismissingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2;
- (void)_applyDismissingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 forceCenter:(BOOL)arg3;
- (void)_applyPresentingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2;
- (void)_applyPresentingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 forceCenter:(BOOL)arg3;
- (void)_applyPresentingAnimationStartingStateForModalItem:(id)arg1 view:(id)arg2;
- (void)_applyPresentingViewMetricsStateForModalItem:(id)arg1;
- (id)_createViewForItem:(id)arg1;
- (void)_desaturateUI;
- (void)_dismissItem:(id)arg1 andPresentItem:(id)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (void)_dismissItem:(id)arg1 andPresentItem:(id)arg2 animated:(BOOL)arg3 completion:(id)arg4 keepDimmingView:(BOOL)arg5;
- (void)_dismissMe:(id)arg1 animated:(BOOL)arg2;
- (void)_enqueueAdditionalTransitionCompletion:(id)arg1;
- (void)_hide;
- (void)_hideAnimated:(BOOL)arg1 dimmSpotlight:(BOOL)arg2;
- (void)_hideDimmingViewAnimated:(BOOL)arg1;
- (void)_hideItem:(id)arg1 animated:(BOOL)arg2;
- (void)_resaturateUI;
- (void)_showDimmingView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showDimmingViewAnimated:(BOOL)arg1;
- (void)_showItem:(id)arg1 animated:(BOOL)arg2 undimmSpotlight:(BOOL)arg3;
- (void)_updateItem:(id)arg1 animated:(BOOL)arg2;
- (id)currentItem;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)displayModalItem:(id)arg1 animated:(BOOL)arg2;
- (void)hideModalItem:(id)arg1 animated:(BOOL)arg2;
- (id)initWithModalItemType:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isInTransition;
- (id)itemBeingDismissed;
- (id)itemBeingPresented;
- (id)itemsTransitionCompletion;
- (void)keyboardChanged:(id)arg1;
- (void)keyfirstResponderChanged:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (id)rotationDelegate;
- (void)setCurrentItem:(id)arg1;
- (void)setIsInTransition:(BOOL)arg1;
- (void)setItemBeingDismissed:(id)arg1;
- (void)setItemBeingPresented:(id)arg1;
- (void)setItemsTransitionCompletion:(id)arg1;
- (void)setRotationDelegate:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)wantsFullScreenLayout;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end

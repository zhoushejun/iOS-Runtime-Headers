/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDimmingView, UIDropShadowView;

@interface _UIFormSheetPresentationController : UIPresentationController {
    UIDimmingView *_dimmingView;
    UIDropShadowView *_dropShadowView;
    struct CGSize { 
        float width; 
        float height; 
    } _formSheetSize;
    BOOL _layoutStateShouldAvoidKeyboard;
}

- (void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1;
- (float)_dropShadowCornerRadius;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1 inWindow:(id)arg2 transitionView:(id)arg3 fromViewController:(id)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_presentationControllerForSizeClassPair:(struct { int x1; int x2; })arg1;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (id)_presentationView;
- (BOOL)_shouldHideBottomCorner;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (unsigned int)dropShadowAutoresizingMask;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (BOOL)shouldSubscribeToKeyboardNotifications;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

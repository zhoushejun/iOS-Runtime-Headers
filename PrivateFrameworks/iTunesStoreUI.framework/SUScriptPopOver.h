/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptViewController, UIPopoverController, UIViewController;

@interface SUScriptPopOver : SUScriptObject {
    UIViewController *_contentViewController;
    BOOL _ignoreDismiss;
}

@property(readonly) UIViewController * activeViewController;
@property int backgroundStyle;
@property(readonly) int backgroundStyleBlack;
@property(readonly) int backgroundStyleClear;
@property(readonly) int backgroundStyleCream;
@property(readonly) int backgroundStyleDefault;
@property(readonly) int backgroundStyleShare;
@property float contentHeight;
@property float contentWidth;
@property(retain) UIPopoverController * nativePopoverController;
@property(readonly) UIPopoverController * presentablePopoverController;
@property(readonly) SUScriptViewController * presentingViewController;
@property(retain) SUScriptViewController * viewController;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_dismissAnimated:(BOOL)arg1;
- (BOOL)_isViewControllerVisible;
- (id)_nativeViewController;
- (void)_overlayWillShowNotification:(id)arg1;
- (id)_popOverController;
- (id)_presentablePopoverController;
- (void)_setIgnoresDismiss:(BOOL)arg1;
- (void)_setNativeViewController:(id)arg1;
- (BOOL)_shouldDisplayAsPopover;
- (void)_showAsModalViewController;
- (void)_viewControllerDidDismiss:(id)arg1;
- (id)activeViewController;
- (id)attributeKeys;
- (int)backgroundStyle;
- (int)backgroundStyleBlack;
- (int)backgroundStyleClear;
- (int)backgroundStyleCream;
- (int)backgroundStyleDefault;
- (int)backgroundStyleShare;
- (float)contentHeight;
- (float)contentWidth;
- (void)dealloc;
- (void)dismissAnimated:(id)arg1;
- (id)init;
- (BOOL)isVisible;
- (id)nativePopoverController;
- (id)presentablePopoverController;
- (id)presentingViewController;
- (id)scriptAttributeKeys;
- (void)setBackgroundStyle:(int)arg1;
- (void)setContentHeight:(float)arg1;
- (void)setContentWidth:(float)arg1;
- (void)setContentWidth:(float)arg1 height:(float)arg2 animated:(BOOL)arg3;
- (void)setNativePopoverController:(id)arg1;
- (void)setViewController:(id)arg1;
- (BOOL)showFromElement:(id)arg1;
- (BOOL)showFromNavigationItem:(id)arg1;
- (void)tearDownUserInterface;
- (id)viewController;

@end

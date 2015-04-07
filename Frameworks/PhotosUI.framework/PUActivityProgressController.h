/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, PUActivityProgressViewController, UIAlertController, UIView;

@interface PUActivityProgressController : NSObject {
    UIAlertController *_alertController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancellationHandler;

    UIView *_containerView;
    BOOL _didHide;
    BOOL _didShow;
    UIView *_dimmingView;
    UIView *_progressContainerView;
    PUActivityProgressViewController *_progressViewController;
    NSString *_title;
    double _whenDidShow;
}

@property(copy) id cancellationHandler;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (id)_newProgressContainerView;
- (id)cancellationHandler;
- (void)hideAnimated:(BOOL)arg1 allowDelay:(BOOL)arg2;
- (id)init;
- (void)setCancellationHandler:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)showAnimated:(BOOL)arg1 allowDelay:(BOOL)arg2;
- (id)title;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
    unsigned int _autoHidingForItemChange : 1;
    unsigned int _requestExitAfterHidingControls : 1;
    unsigned int _rotateAfterHidingControls : 1;
    unsigned int _scheduledAutoHide : 1;
    unsigned int _showControlsAfterRotate : 1;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_autohideControlsOverlay;
- (void)_hideOverlayWithAnimation:(BOOL)arg1;
- (void)_hideOverlayWithAnimation:(BOOL)arg1 shouldUpdateAutohideFlag:(BOOL)arg2;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (int)_validInterfaceOrientation;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (BOOL)canShowControlsOverlay;
- (void)cancelControlsOverlayAutohide;
- (BOOL)controlsOverlayVisible;
- (void)dealloc;
- (void)displayVideoViewOnScreen;
- (BOOL)forceScaleToFitInPortrait;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (BOOL)inhibitOverlay;
- (id)init;
- (void)loadView;
- (id)newAlternateTracksTransition;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setInhibitOverlay:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setPlayer:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)showOverlayIfNecessary;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2 atLocation:(struct CGPoint { float x1; float x2; })arg3;
- (void)swipableViewHadActivity:(id)arg1;
- (void)transformVideoForInterfaceOrientation:(int)arg1 animate:(BOOL)arg2;
- (BOOL)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;
- (BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

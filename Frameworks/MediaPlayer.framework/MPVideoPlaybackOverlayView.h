/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPVideoControllerProtocol>, <MPVideoOverlayDelegate>, MPAVController, MPAVItem, MPAudioAndSubtitlesController, MPDetailSlider, MPKnockoutButton, MPVolumeSlider, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UINavigationBar, UIPopoverController, UIStatusBar, UIView, _UIBackdropView;

@interface MPVideoPlaybackOverlayView : UIView <MPAudioAndSubtitlesControllerDelegate, MPDetailSliderDelegate, MPVideoOverlay, UIPopoverControllerDelegate> {
    BOOL _allowsExitFromFullscreen;
    UIButton *_audioAndSubtitlesButton;
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;
    UIPopoverController *_audioAndSubtitlesPopover;
    BOOL _automaticallyHandleTransportControls;
    _UIBackdropView *_bottomBarBackdropView;
    UIView *_bottomBarBottomLayoutGuide;
    NSLayoutConstraint *_bottomBarHeightConstraint;
    UIView *_bottomBarItemsGuide;
    UIView *_bottomBarTopLayoutGuide;
    NSArray *_bottomItems;
    NSArray *_bottomItemsConstraints;
    NSLayoutConstraint *_bottomItemsRightConstraint;
    <MPVideoOverlayDelegate> *_delegate;
    UIButton *_doneButton;
    MPKnockoutButton *_fullscreenButton;
    BOOL _ignoreTouchUp;
    MPAVItem *_item;
    MPKnockoutButton *_leftButton;
    UIActivityIndicatorView *_loadingIndicator;
    UILabel *_loadingLabel;
    MPKnockoutButton *_playPauseButton;
    MPAVController *_player;
    MPKnockoutButton *_rightButton;
    UIButton *_scaleButton;
    UILabel *_scrubInstructions1;
    UILabel *_scrubInstructions2;
    MPDetailSlider *_scrubber;
    int _seekDirection;
    BOOL _shouldResumePlayback;
    UIStatusBar *_statusBar;
    int _style;
    BOOL _ticking;
    _UIBackdropView *_topBarBackdropView;
    NSLayoutConstraint *_topBarBottomConstraint;
    UIView *_topBarItemsGuide;
    UIView *_topBarLayoutGuide;
    NSArray *_topItems;
    NSArray *_topItemsConstraints;
    NSLayoutConstraint *_topItemsTrailingConstraint;
    MPVolumeSlider *_volumeSlider;
    NSLayoutConstraint *_volumeSliderRightConstraint;
    NSLayoutConstraint *_volumeSliderWidthConstraint;
    BOOL allowsWirelessPlayback;
    unsigned long long desiredParts;
    unsigned long long disabledParts;
    BOOL navigationBarHidden;
    <MPVideoControllerProtocol> *videoViewController;
    unsigned long long visibleParts;
}

@property BOOL allowsDetailScrubbing;
@property BOOL allowsExitFromFullscreen;
@property BOOL allowsWirelessPlayback;
@property BOOL automaticallyHandleTransportControls;
@property(readonly) float bottomBarHeight;
@property(copy,readonly) NSString * debugDescription;
@property <MPVideoOverlayDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property unsigned long long desiredParts;
@property unsigned long long disabledParts;
@property(readonly) unsigned int hash;
@property(retain) MPAVItem * item;
@property(retain,readonly) UINavigationBar * navigationBar;
@property BOOL navigationBarHidden;
@property(retain) MPAVController * player;
@property int style;
@property(readonly) Class superclass;
@property <MPVideoControllerProtocol> * videoViewController;
@property unsigned long long visibleParts;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_alternateTracksAvailable:(id)arg1;
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;
- (void)_buttonInteractionBegan:(id)arg1;
- (void)_buttonInteractionCanceled:(id)arg1;
- (void)_buttonInteractionEnded:(id)arg1;
- (void)_configureAuxiliaryButtons:(BOOL)arg1;
- (void)_configureTransportControls;
- (void)_doneButtonTapped:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_fullscreenButtonTapped:(id)arg1;
- (void)_hideScrubInstructions;
- (id)_imageNamed:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (id)_newFrostedGlassBackdropView;
- (void)_notifyDelegateOfUserEvent:(int)arg1;
- (void)_notifyDelegateOfUserEventBegin:(int)arg1;
- (void)_notifyDelegateOfUserEventCancel:(int)arg1;
- (void)_notifyDelegateOfUserEventEnd:(int)arg1;
- (void)_observeControl:(id)arg1;
- (void)_playPauseButtonTapped:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_registerForItemNotifications:(id)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_scaleButtonTapped:(id)arg1;
- (void)_seekabilityChanged:(id)arg1;
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(BOOL)arg3;
- (void)_showScrubInstructions;
- (void)_skipButtonTouchCancel:(id)arg1;
- (void)_skipButtonTouchDown:(id)arg1;
- (void)_skipButtonTouchUpInside:(id)arg1;
- (void)_skipButtonTouchUpOutside:(id)arg1;
- (void)_startSeeking;
- (void)_tick:(id)arg1;
- (void)_unregisterForItemNotifications:(id)arg1;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_updateLoadingIndicator;
- (void)_updateScaleButton;
- (void)_updateVolumeSlider;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (BOOL)allowsDetailScrubbing;
- (BOOL)allowsExitFromFullscreen;
- (BOOL)allowsWirelessPlayback;
- (void)audioAndSubtitleControllerRequestsDismissal:(id)arg1;
- (BOOL)automaticallyHandleTransportControls;
- (float)bottomBarHeight;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredParts;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToWindow;
- (unsigned long long)disabledParts;
- (void)hideAlternateTracks;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)item;
- (void)layoutSubviews;
- (id)navigationBar;
- (BOOL)navigationBarHidden;
- (id)player;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)removeFromSuperview;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAllowsExitFromFullscreen:(BOOL)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAutomaticallyHandleTransportControls:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 animateAlongside:(id)arg3 completionBlock:(id)arg4;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)setItem:(id)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (int)style;
- (void)updateConstraints;
- (BOOL)updateTimeBasedValues;
- (id)videoViewController;
- (unsigned long long)visibleParts;

@end

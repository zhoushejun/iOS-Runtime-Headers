/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, MPAVItem, MPAudioVideoRoutingPopoverController, MPInlineAudioOverlay, MPInlineVideoFullscreenViewController, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoContainerView, MPVideoPlaybackOverlayView, MPVideoView, MPVolumeController, MPWeakTimer, NSSet, NSString, UIActivityIndicatorView, UIAlertView, UIColor, UIImage, UINavigationController, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView, UIView<MPVideoOverlay>, UIWindow, _UIHostedWindow;

@interface MPInlineVideoController : NSObject <MPSwipableViewDelegate, MPTransportControlsTarget, MPVideoControllerProtocol, MPVideoOverlayDelegate, MPVolumeControllerDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate> {
    BOOL _TVOutEnabled;
    BOOL _TVOutEnabledMaster;
    int _activeOverlayUserEvents;
    UIView *_advertisementView;
    UIAlertView *_alertSheet;
    BOOL _allowsDetailScrubbing;
    BOOL _allowsWirelessPlayback;
    UIWindow *_alternateTracksWindow;
    BOOL _alwaysAllowHidingControlsOverlay;
    int _artworkImageStyle;
    BOOL _attemptAutoPlayWhenControlsHidden;
    int _audioOverlayStyle;
    MPInlineAudioOverlay *_audioOverlayView;
    BOOL _automaticallyHandleTransportControls;
    unsigned int _backgroundTaskId;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    BOOL _batteryMonitoringWasEnabled;
    BOOL _canAnimateControlsOverlay;
    BOOL _canShowControlsOverlay;
    UINavigationController *_chaptersContainerController;
    MPVideoContainerView *_containerView;
    BOOL _controlsOverlayVisible;
    id _delegate;
    unsigned long long _desiredParts;
    BOOL _disableAutoRotation;
    BOOL _disableControlsAutohide;
    unsigned long long _disabledParts;
    BOOL _displayPlaybackErrorAlerts;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPInlineVideoFullscreenViewController *_fullscreenViewController;
    BOOL _fullscreenViewSizeIsExternallyManaged;
    UIWindow *_fullscreenWindow;
    BOOL _hasShownFirstVideoFrame;
    MPWeakTimer *_idleTimer;
    BOOL _inCloneMirrorMode;
    BOOL _inlinePlaybackUsesTVOut;
    BOOL _isAnimatingOverlay;
    BOOL _isTransitioningFromFullscreen;
    BOOL _isTransitioningToFullscreen;
    MPAVItem *_item;
    unsigned int _itemTypeOverride;
    UIActivityIndicatorView *_loadingIndicator;
    BOOL _navigationBarHidden;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSString *_playbackErrorDescription;
    MPAVController *_player;
    UIImage *_posterImage;
    MPAudioVideoRoutingPopoverController *_routePopoverController;
    unsigned int _scaleMode;
    unsigned int _scaleModeOverride;
    BOOL _scheduledLoadingIndicator;
    BOOL _shouldDestroyVideoSnapshot;
    UIView *_subtitlesView;
    BOOL _swallowNextTapGesture;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPTVOutWindow *_tvOutWindow;
    BOOL _useHostedWindowWhenFullscreen;
    UIView *_videoBackgroundView;
    int _videoOverlayStyle;
    MPVideoPlaybackOverlayView *_videoOverlayView;
    MPSwipableView *_view;
    NSSet *_viewsToFade;
    unsigned long long _visibleParts;
    MPVolumeController *_volumeController;
    BOOL _wantsOverlayVisibleWhenItemIsAvailable;
    BOOL _wasPlaying;
    UIWindow *_windowForDisablingAutorotation;
    UIWindow *_windowForFullscreenTransition;
}

@property BOOL TVOutEnabled;
@property(readonly) UIView * advertisementView;
@property BOOL allowsDetailScrubbing;
@property BOOL allowsWirelessPlayback;
@property BOOL alwaysAllowHidingControlsOverlay;
@property int artworkImageStyle;
@property BOOL attemptAutoPlayWhenControlsHidden;
@property int audioOverlayStyle;
@property BOOL autoPlayWhenLikelyToKeepUp;
@property BOOL automaticallyHandleTransportControls;
@property(readonly) UIView * backgroundView;
@property(retain) UIColor * backstopColor;
@property BOOL canAnimateControlsOverlay;
@property(readonly) BOOL canChangeScaleMode;
@property BOOL canShowControlsOverlay;
@property BOOL controlsOverlayVisible;
@property(copy,readonly) NSString * debugDescription;
@property id delegate;
@property(copy,readonly) NSString * description;
@property unsigned long long desiredParts;
@property BOOL disableAutoRotation;
@property BOOL disableControlsAutohide;
@property unsigned long long disabledParts;
@property BOOL displayPlaybackErrorAlerts;
@property(getter=isFullscreen) BOOL fullscreen;
@property(readonly) UIView * fullscreenView;
@property(readonly) unsigned int hash;
@property(readonly) _UIHostedWindow * hostedWindow;
@property(readonly) unsigned int hostedWindowContextID;
@property BOOL inlinePlaybackUsesTVOut;
@property(retain) MPAVItem * item;
@property unsigned int itemTypeOverride;
@property BOOL navigationBarHidden;
@property int orientation;
@property(copy) NSString * playbackErrorDescription;
@property(retain) MPAVController * player;
@property(retain) UIImage * posterImage;
@property unsigned int scaleMode;
@property(readonly) UIView * subtitlesView;
@property(readonly) Class superclass;
@property int videoOverlayStyle;
@property(retain,readonly) UIView<MPVideoOverlay> * videoOverlayView;
@property(retain,readonly) MPVideoView * videoView;
@property(retain,readonly) UIView * view;
@property(readonly) BOOL viewControllerWillRequestExit;
@property unsigned long long visibleParts;

- (void).cxx_destruct;
- (BOOL)TVOutEnabled;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidFinishSuspensionSnapshot:(id)arg1;
- (void)_applicationResumedEventsOnly:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_availableRoutesChanged:(id)arg1;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_bufferingStateChanged:(id)arg1;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (void)_cancelOverlayIdleTimer;
- (void)_delayedShowLoadingIndicator;
- (void)_delayedUpdateBackgroundView;
- (void)_destroyAudioOverlayView;
- (void)_destroyVideoOverlayView;
- (void)_destroyVideoSnapshotView;
- (void)_doneWithChapters:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (unsigned int)_effectiveItemType;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_enableAirPlayVideoRoutesIfNecessary;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_hideLoadingIndicator;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_hideOverlayDidEnd;
- (BOOL)_isAnimatingFullscreenTransition;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_itemTypeAvailable:(id)arg1;
- (unsigned int)_itemTypeWithActualTypePreference;
- (void)_overlayIdleTimerFired:(id)arg1;
- (BOOL)_overlayViewIsVisible;
- (void)_playbackError:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_postScaleModeDidChange;
- (void)_postViewControllerRequestsExitWithReason:(int)arg1;
- (void)_registerForPlayerNotifications;
- (void)_resetOverlayIdleTimer;
- (void)_resetOverlayIdleTimer:(double)arg1;
- (void)_scaleModeDidChange:(id)arg1;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_setupSubviews;
- (void)_setupTVOutWindow;
- (BOOL)_shouldShowDestinationPlaceholder;
- (void)_showOverlayAnimated:(BOOL)arg1;
- (void)_showOverlayAnimated:(BOOL)arg1 quickHide:(BOOL)arg2;
- (void)_showOverlayDidEnd:(BOOL)arg1;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_showVideoSnapshotView;
- (void)_sizeDidChange:(id)arg1;
- (void)_tearDownTVOutWindow;
- (void)_timedImageMetadataAvailable:(id)arg1;
- (void)_transitionFromFullscreenAnimated:(BOOL)arg1;
- (void)_transitionFromFullscreenAnimated:(BOOL)arg1 fromDoneButton:(BOOL)arg2;
- (void)_transitionFromFullscreenDidEnd;
- (void)_transitionToFullscreenAnimated:(BOOL)arg1;
- (void)_transitionToFullscreenDidEnd;
- (void)_unregisterForPlayerNotifications;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_updateBackgroundViewConfiguration:(BOOL)arg1;
- (void)_updateBackgroundViewInformation;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateDoubleTapGestureRecognizer;
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned int)arg1;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_updateTVOutEnabled;
- (BOOL)_useInlineControls;
- (void)_validityChanged:(id)arg1;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (id)advertisementView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)allowsDetailScrubbing;
- (BOOL)allowsWirelessPlayback;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (int)artworkImageStyle;
- (BOOL)attemptAutoPlayWhenControlsHidden;
- (int)audioOverlayStyle;
- (BOOL)autoPlayWhenLikelyToKeepUp;
- (BOOL)automaticallyHandleTransportControls;
- (id)backgroundView;
- (id)backstopColor;
- (BOOL)canAnimateControlsOverlay;
- (BOOL)canChangeScaleMode;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (BOOL)canShowControlsOverlay;
- (BOOL)canShowQTAudioOnlyUI;
- (void)clearWeakReferencesToObject:(id)arg1;
- (BOOL)controlsOverlayVisible;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredParts;
- (BOOL)disableAutoRotation;
- (BOOL)disableControlsAutohide;
- (unsigned long long)disabledParts;
- (BOOL)displayPlaybackErrorAlerts;
- (void)displayVideoView;
- (void)exitFullscreen;
- (void)fullscreenOverlayDidHide;
- (void)fullscreenOverlayDidShow;
- (void)fullscreenOverlayWillHideAnimated:(BOOL)arg1;
- (void)fullscreenOverlayWillShowAnimated:(BOOL)arg1;
- (id)fullscreenView;
- (id)hostedWindow;
- (unsigned int)hostedWindowContextID;
- (id)init;
- (BOOL)inlinePlaybackUsesTVOut;
- (BOOL)isFullscreen;
- (id)item;
- (unsigned int)itemTypeOverride;
- (BOOL)navigationBarHidden;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (int)orientation;
- (void)overlay:(id)arg1 didBeginUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(int)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (id)playbackErrorDescription;
- (id)player;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)posterImage;
- (void)prepareToDisplayVideo;
- (unsigned int)scaleMode;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (void)setArtworkImageStyle:(int)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)setAudioOverlayStyle:(int)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (void)setAutomaticallyHandleTransportControls:(BOOL)arg1;
- (void)setBackstopColor:(id)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setClosedCaptions:(id)arg1;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDisableAutoRotation:(BOOL)arg1;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setItemTypeOverride:(unsigned int)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setVideoOverlayStyle:(int)arg1;
- (void)setVideoSnapshotEnabled:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)showAlternateTracksController:(id)arg1;
- (id)subtitlesView;
- (void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)swipableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (int)videoOverlayStyle;
- (id)videoOverlayView;
- (id)videoView;
- (id)view;
- (BOOL)viewControllerWillRequestExit;
- (unsigned long long)visibleParts;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;

@end

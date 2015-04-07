/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPAVController, MPAVItem, MPNowPlayingObserver, MPQueueFeeder, MPUApplicationDefaults, MPULyricsView, MPUNowPlayingPlaybackControlsView, MPUNowPlayingTitlesView, MPURatingControl, NSString, NSTimer, UINavigationBar, UINavigationItem, UITapGestureRecognizer, UIView, UIViewController;

@interface MPUNowPlayingViewController : UIViewController <MPTransportControlsTarget, MPUNowPlayingPlaybackControlsViewDelegate, MPURatingControlDelegate, UIGestureRecognizerDelegate, UINavigationBarDelegate> {
    MPUApplicationDefaults *_applicationDefaults;
    BOOL _canMarqueeText;
    UIView *_contentView;
    UIViewController *_contentViewController;
    UINavigationItem *_effectiveNavigationItem;
    MPQueueFeeder *_feeder;
    BOOL _hasProperApplicationStateForWantingVideoLayer;
    BOOL _hasVisibilityForWantingVideoLayer;
    BOOL _isDetailScrubbing;
    BOOL _isShowingRatings;
    BOOL _isWide;
    MPAVItem *_item;
    UIViewController *_lastPresentedViewController;
    MPULyricsView *_lyricsView;
    MPNowPlayingObserver *_nowPlayingObserver;
    UINavigationBar *_padFakeNavigationBar;
    MPUNowPlayingPlaybackControlsView *_playbackControlsView;
    MPAVController *_player;
    UINavigationItem *_previousNavigationItem;
    MPURatingControl *_ratingControl;
    NSTimer *_skipInformationRevealTimer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPUNowPlayingTitlesView *_titlesView;
    BOOL _wantsVideoLayer;
}

@property(readonly) UIView * _contentView;
@property(readonly) UIViewController * _contentViewController;
@property(getter=_isDetailScrubbing,readonly) BOOL _detailScrubbing;
@property(readonly) UINavigationItem * _effectiveNavigationItem;
@property(readonly) MPAVItem * _item;
@property(readonly) MPUNowPlayingPlaybackControlsView * _playbackControlsView;
@property(retain) MPUApplicationDefaults * applicationDefaults;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) MPNowPlayingObserver * nowPlayingObserver;
@property(retain) MPAVController * player;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)MPU_supportsMiniPlayer;
- (SEL)_actionForHandlingDoubleTapOnArtworkImageView;
- (id)_albumTextForItem:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_artistTextForItem:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_cleanupForDeallocationContentView:(id)arg1 contentViewController:(id)arg2;
- (id)_contentView;
- (id)_contentViewController;
- (struct CGSize { float x1; float x2; })_contentViewSizeForItem:(id)arg1 withContentView:(id)arg2 orientation:(int)arg3;
- (id)_createContentViewForItem:(id)arg1 contentViewController:(id*)arg2;
- (void)_didSkipTrackNotification:(id)arg1;
- (void)_didUpdateArtworkImage;
- (id)_effectiveNavigationItem;
- (void)_invalidateSkipInformationRevealTimer;
- (BOOL)_isActionForHandlingDoubleTapOnArtworkImageViewEnabled;
- (BOOL)_isDetailScrubbing;
- (id)_item;
- (void)_itemArtworkDidChangeNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemIsExplicitDidChangeNotification:(id)arg1;
- (void)_itemRatingDidChangeNotification:(id)arg1;
- (BOOL)_itemSupportsRatings:(id)arg1;
- (void)_itemTitlesDidChange;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_layoutForOrientation:(int)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (id)_playbackControlsView;
- (Class)_playbackControlsViewClass;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_popIfNecessary;
- (void)_registerForPlayerNotifications;
- (void)_revealSkipInformationMomentarily;
- (void)_scheduleSkipInformationRevealTimer;
- (void)_setShowingRatings:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setWantsVideoLayer:(BOOL)arg1 forItem:(id)arg2;
- (BOOL)_shouldAbortUpdatingContentView:(id)arg1 forItem:(id)arg2;
- (BOOL)_shouldHaveArtworkPlaceholderTextForItem:(id)arg1;
- (BOOL)_shouldPopForCurrentPlaybackState;
- (BOOL)_shouldUpdateContentView:(id)arg1 forBufferingState:(unsigned int)arg2;
- (void)_showLyrics;
- (void)_skipLimitDidChangeNotification:(id)arg1;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_tapAction:(id)arg1;
- (id)_titleTextForItem:(id)arg1;
- (float)_titleWidth;
- (int)_transitionDirectionForChangeFromItem:(id)arg1 toItem:(id)arg2;
- (void)_unregisterForPlayerNotifications;
- (void)_updateContentView:(id)arg1 forItem:(id)arg2;
- (void)_updateControlVisibilityForOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateForCurrentItemAnimated:(BOOL)arg1;
- (BOOL)_updateItemRelatedStateForChangeToItem:(id)arg1 animated:(BOOL)arg2;
- (void)_updateMarqueeStatusAllowingCurrentMarqueeToFinish:(BOOL)arg1;
- (BOOL)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_updateSizeClass;
- (void)_updateTitles;
- (void)_updateTitlesInView:(id)arg1 forItem:(id)arg2;
- (void)_updateWantsVideoLayer;
- (void)_willPresentViewController:(id)arg1;
- (id)applicationDefaults;
- (void)controlsOverlay:(id)arg1 detailSliderTrackingDidChangeScrubSpeed:(int)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)nowPlayingObserver;
- (void)playbackControls:(id)arg1 didSelectCreateAction:(int)arg2;
- (id)player;
- (void)ratingDidChangeForRatingControl:(id)arg1;
- (void)setApplicationDefaults:(id)arg1;
- (void)setNowPlayingObserver:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (BOOL)videoController:(id)arg1 shouldDisplayAlertForError:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end

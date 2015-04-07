/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVPlayer, AVPlayerItem, AVQueuePlayer, MPAVRoute, MPAVRoutingController, NSArray, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MPQueuePlayer : NSObject <MPAVRoutingControllerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    AVPlayerItem *_currentItem;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _currentTime;
    int _defaultItemEQPresetType;
    BOOL _isExternalPlaybackActive;
    MPAVRoute *_lastPickedRoute;
    BOOL _outputObscuredDueToInsufficientExternalProtection;
    BOOL _pausedForPlaybackQueueTransaction;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _playbackQueueCommitHandler;

    int _playbackQueueTransactionCount;
    AVQueuePlayer *_player;
    NSMutableArray *_queuedOperations;
    float _rate;
    float _rateBeforePlaybackQueueTransaction;
    BOOL _routeDidChangeDuringPlaybackQueueTransaction;
    MPAVRoutingController *_routingController;
    int _status;
}

@property(readonly) int _externalProtectionStatus;
@property(readonly) AVPlayer * _player;
@property int actionAtItemEnd;
@property BOOL allowsExternalPlayback;
@property(getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;
@property(readonly) AVPlayerItem * currentItem;
@property(copy,readonly) NSString * debugDescription;
@property int defaultItemEQPresetType;
@property(copy,readonly) NSString * description;
@property BOOL disallowsAMRAudio;
@property(readonly) NSError * error;
@property(getter=isExternalPlaybackActive,readonly) BOOL externalPlaybackActive;
@property(readonly) int externalPlaybackType;
@property(copy) NSString * externalPlaybackVideoGravity;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isPlaybackQueueTransactionActive;
@property(readonly) NSArray * items;
@property(readonly) BOOL outputObscuredDueToInsufficientExternalProtection;
@property(copy) id playbackQueueCommitHandler;
@property(readonly) id playerAVAudioSession;
@property float rate;
@property(readonly) int status;
@property(readonly) Class superclass;
@property BOOL usesAudioOnlyModeForExternalPlayback;
@property BOOL usesExternalPlaybackWhileExternalScreenIsActive;

- (void).cxx_destruct;
- (BOOL)_CALayerDestinationIsTVOut;
- (int)_externalProtectionStatus;
- (id)_player;
- (BOOL)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setExpectedAssetTypes:(id)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (float)_userVolume;
- (int)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)advanceToNextItem;
- (BOOL)allowsExternalPlayback;
- (void)beginPlaybackQueueTransactionAndPause:(BOOL)arg1;
- (void)commitPlaybackQueueTransaction;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (int)defaultItemEQPresetType;
- (BOOL)disallowsAMRAudio;
- (id)error;
- (int)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (id)init;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)isClosedCaptionDisplayEnabled;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isPlaybackQueueTransactionActive;
- (id)items;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)pause;
- (void)play;
- (id)playbackQueueCommitHandler;
- (id)playerAVAudioSession;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (float)rate;
- (void)removeItem:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setActionAtItemEnd:(int)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDefaultItemEQPresetType:(int)arg1;
- (void)setDisallowsAMRAudio:(BOOL)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)setPlaybackQueueCommitHandler:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (int)status;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;

@end

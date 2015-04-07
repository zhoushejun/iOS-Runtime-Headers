/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <FBSceneClientProvider>, <FBSynchronizedTransactionDelegate>, FBProcess, FBSDisplay, FBSSceneClientSettings, FBSSceneSettings, FBSSceneTransitionContext, FBScene, FBSceneManager, FBWaitForSceneDestructionTransaction, NSString;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneManagerObserver, FBSynchronizedTransaction> {
    <FBSceneClientProvider> *_clientProvider;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _clientProviderProvider;

    FBSSceneClientSettings *_clientSettings;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _clientSettingsProvider;

    id _context;
    BOOL _destroyed;
    FBWaitForSceneDestructionTransaction *_destuctionTransaction;
    BOOL _didCommit;
    FBSDisplay *_display;
    FBSSceneSettings *_newSceneSettings;
    FBProcess *_process;
    BOOL _readyToCommit;
    NSString *_sceneID;
    FBSceneManager *_sceneManager;
    <FBSynchronizedTransactionDelegate> *_synchronizationDelegate;
    unsigned int _transactionID;
    FBSSceneTransitionContext *_transitionContext;
    BOOL _waitsForSceneCommit;
    BOOL _willCommitUpdateFinished;
}

@property(retain) id context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL destroyed;
@property(retain,readonly) FBSDisplay * display;
@property(readonly) unsigned int hash;
@property(retain,readonly) FBSSceneSettings * newSettings;
@property(retain,readonly) FBScene * scene;
@property(retain,readonly) NSString * sceneIdentifier;
@property(readonly) Class superclass;
@property <FBSynchronizedTransactionDelegate> * synchronizationDelegate;
@property(retain,readonly) FBSSceneTransitionContext * transitionContext;
@property BOOL waitsForSceneCommit;

- (void)_begin;
- (BOOL)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_commitSceneOrWait;
- (void)_commitSceneUpdate:(id)arg1;
- (void)_createScene;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_enumerateUpdateSceneObserversWithBlock:(id)arg1;
- (id)_initWithSceneIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 clientProvider:(id)arg5 initialClientSettings:(id)arg6;
- (void)_performCommit;
- (void)_updateScene;
- (void)addObserver:(id)arg1;
- (id)context;
- (void)dealloc;
- (BOOL)destroyed;
- (id)display;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 display:(id)arg3 newSettings:(id)arg4 transitionContext:(id)arg5 clientProviderProvider:(id)arg6 initialClientSettingsProvider:(id)arg7;
- (id)initWithSceneToCreate:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 clientProvider:(id)arg5 initialClientSettings:(id)arg6;
- (id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3;
- (BOOL)isReadyForSynchronizedCommit;
- (id)newSettings;
- (void)performSynchronizedCommit;
- (void)removeObserver:(id)arg1;
- (id)scene;
- (id)sceneIdentifier;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setContext:(id)arg1;
- (void)setSynchronizationDelegate:(id)arg1;
- (void)setWaitsForSceneCommit:(BOOL)arg1;
- (id)synchronizationDelegate;
- (id)transitionContext;
- (BOOL)waitsForSceneCommit;

@end

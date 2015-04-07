/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CNFRegWizardControllerDelegate>, CNFRegController, NSString, _UIBackdropView;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertHandler;

    _UIBackdropView *_backdropView;
    <CNFRegWizardControllerDelegate> *_firstRunDelegate;
    CNFRegController *_regController;
    id _resignListener;
    id _resumeListener;
    int _serviceType;
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int canShowDisabledScreen : 1; 
        unsigned int hideLearnMoreButton : 1; 
        unsigned int showSplashOnSignin : 1; 
        unsigned int skipReloadOnNextViewWillAppear : 1; 
        unsigned int allowCancel : 1; 
        unsigned int allowSMS : 1; 
        unsigned int shouldTerminateInBackground : 1; 
    } _wizardFlags;
}

@property(copy) id alertHandler;
@property BOOL allowCancel;
@property BOOL allowSMS;
@property(retain) _UIBackdropView * backdropView;
@property BOOL canShowDisabledScreen;
@property BOOL canShowSplashScreen;
@property BOOL canStartNested;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property <CNFRegWizardControllerDelegate> * firstRunDelegate;
@property(readonly) unsigned int hash;
@property BOOL hideLearnMoreButton;
@property(retain) CNFRegController * regController;
@property BOOL shouldListenForSuspension;
@property BOOL shouldTerminateInBackground;
@property BOOL showSplashOnSignin;
@property(readonly) Class superclass;

+ (void)setGlobalAppearanceStyle:(int)arg1;
+ (void)setSupportsAutoRotation:(BOOL)arg1;

- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishLaunching;
- (void)_checkRestrictions;
- (void)_doCancel;
- (int)_firstRunState:(id)arg1;
- (void)_restrictionsChanged;
- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_updateNavigationBarTitle;
- (id)alertHandler;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)allowCancel;
- (BOOL)allowSMS;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)backdropView;
- (BOOL)canShowDisabledScreen;
- (BOOL)canShowSplashScreen;
- (BOOL)canStartNested;
- (id)controllerClassesToShow:(BOOL)arg1;
- (id)controllersToShow;
- (id)controllersToShow:(BOOL)arg1;
- (void)dealloc;
- (void)dismissFinished:(BOOL)arg1;
- (void)dismissWithState:(unsigned int)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (id)firstRunDelegate;
- (BOOL)hideLearnMoreButton;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)initWithServiceTypes:(int)arg1;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithTransition:(int)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (id)regController;
- (void)setAlertHandler:(id)arg1;
- (void)setAllowCancel:(BOOL)arg1;
- (void)setAllowSMS:(BOOL)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setCanShowDisabledScreen:(BOOL)arg1;
- (void)setCanShowSplashScreen:(BOOL)arg1;
- (void)setCanStartNested:(BOOL)arg1;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setHideLearnMoreButton:(BOOL)arg1;
- (void)setRegController:(id)arg1;
- (void)setShouldListenForSuspension:(BOOL)arg1;
- (void)setShouldTerminateInBackground:(BOOL)arg1;
- (void)setShowSplashOnSignin:(BOOL)arg1;
- (void)setSkipReloadOnNextViewWillAppear:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setupController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldListenForSuspension;
- (BOOL)shouldShowFirstRunController;
- (BOOL)shouldTerminateInBackground;
- (BOOL)showSplashOnSignin;
- (BOOL)skipReloadOnNextViewWillAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

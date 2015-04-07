/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPreviewContentDataSource>, <QLPreviewContentDelegate>, NSMapTable, NSString, QLPreviewController, QLPrintPageRenderer, _UIRemoteView;

@interface QLRemotePreviewContentController : _UIRemoteViewController <QLPreviewContentControllerProtocol, QLPrintPageRendererDataSource> {
    int _currentPreviewItemIndex;
    <QLPreviewContentDataSource> *_dataSource;
    <QLPreviewContentDelegate> *_delegate;
    _UIRemoteView *_fullScreenView;
    BOOL _isHostingFullScreenWindow;
    int _numberOfPreviewItems;
    QLPreviewController *_previewController;
    NSMapTable *_previewItemsForProxys;
    QLPrintPageRenderer *_printPageRenderer;
    NSMapTable *_proxysForPreviewItems;
    BOOL _statusBarWasHidden;
}

@property <QLPreviewContentDataSource> * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property <QLPreviewContentDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property QLPreviewController * previewController;
@property int previewMode;
@property(readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_contentWasTappedInPreviewContentController;
- (void)_didExitFullScreen;
- (void)_overlayWasTappedInPreviewContentController;
- (void)_previewContentControllerDidLoadItem:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)_previewContentControllerDidMoveToItemAtIndex:(int)arg1;
- (void)_previewContentControllerGetPreviewItemAtIndex:(int)arg1 sourceUUID:(int)arg2 handler:(id)arg3;
- (void)_previewContentControllerReceivedTapOnURL:(id)arg1;
- (void)_previewContentControllerWillHideOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerWillMoveToItemAtIndex:(int)arg1;
- (void)_previewContentControllerWillShowOverlayWithDuration:(double)arg1;
- (id)_previewItemFromProxy:(id)arg1;
- (id)_proxyForPreviewItem:(id)arg1;
- (void)_setAVState:(id)arg1 forPreviewItem:(id)arg2;
- (void)_showContentsWasTappedInPreviewContentController;
- (void)_updateNavigationBarVerticalOffset;
- (void)_willEnterFullScreenWithContext:(id)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)becomeForeground;
- (void)beginScrubbing;
- (void)checkCurrentPreviewItem;
- (void)configureWithParameters:(id)arg1;
- (int)currentPreviewItemIndex;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)endScrubbing;
- (void)enterBackground;
- (void)forceResignFirstResponder;
- (int)numberOfPagesInPrintPageRenderer:(id)arg1;
- (int)numberOfPreviewItems;
- (id)previewController;
- (int)previewMode;
- (id)printPageHelper;
- (id)printPageRenderer;
- (id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(int)arg2 printingDone:(BOOL*)arg3;
- (void)printPageRenderer:(id)arg1 prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)refreshCurrentPreviewItem;
- (void)scrubToValue:(double)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setNumberOfPreviewItems:(int)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewController:(id)arg1;
- (void)setPreviewMode:(int)arg1;
- (void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)stopLoadingCurrentPreviewItem;
- (void)togglePlayState;
- (void)viewDidLayoutSubviews;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willChangeContentFrame;

@end

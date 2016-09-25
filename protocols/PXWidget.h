/* Generated by RuntimeBrowser.
 */

@protocol PXWidget <NSObject>

@optional

- (BOOL)allowUserInteractionWithSubtitle;
- (int)contentLayoutStyle;
- (PXTilingController *)contentTilingController;
- (struct NSObject { Class x1; }*)contentView;
- (int)contentViewAnchoringType;
- (void)contentViewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id <PXWidgetContentViewTransitionCoordinator>)arg2;
- (PXPhotosDetailsContext *)context;
- (BOOL)hasContentForCurrentInput;
- (BOOL)hasLoadedContentData;
- (BOOL)isFaceModeEnabled;
- (BOOL)isSelecting;
- (BOOL)isUserInteractionEnabled;
- (void)loadContentData;
- (NSString *)localizedCaption;
- (NSString *)localizedDisclosureTitle;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (float)preferredContentHeightForWidth:(float)arg1;
- (PXSectionedSelectionManager *)selectionManager;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContext:(PXPhotosDetailsContext *)arg1;
- (void)setFaceModeEnabled:(BOOL)arg1;
- (void)setSelecting:(BOOL)arg1;
- (void)setSpec:(PXWidgetSpec *)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setWidgetDelegate:(id <PXWidgetDelegate>)arg1;
- (PXWidgetSpec *)spec;
- (BOOL)supportsFaceMode;
- (BOOL)supportsSelection;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
- (<PXWidgetDelegate> *)widgetDelegate;

@end
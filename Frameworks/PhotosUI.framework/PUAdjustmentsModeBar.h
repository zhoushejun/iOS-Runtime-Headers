/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUAdjustmentsModeBarDataSource>, <PUAdjustmentsModeBarDelegate>, NSArray, NSLayoutConstraint, NSNumberFormatter, NSString, PUAdjustmentsMode, UITableView, UIView, _PUSliderPlayheadBaseView, _UIDynamicValueAnimation;

@interface PUAdjustmentsModeBar : UIView <PUPhotoEditLayoutStaticAdaptable, UITableViewDataSource, UITableViewDelegate> {
    UIView *_adjustmentViewsContainer;
    NSArray *_adjustmentViewsContainerConstraints;
    NSArray *_allAdjustmentModes;
    BOOL _dataIsValid;
    <PUAdjustmentsModeBarDataSource> *_dataSource;
    <PUAdjustmentsModeBarDelegate> *_delegate;
    BOOL _didSetInitialModeSlidersOffset;
    float _expandedShortSideSize;
    _UIDynamicValueAnimation *_finishTransitionAnimation;
    float _interactiveTransitionProgress;
    int _interactiveTransitionState;
    int _layoutOrientation;
    BOOL _listViewExpanded;
    BOOL _listViewExpandedExplicitly;
    UITableView *_modePickerTableView;
    UIView *_modePickerTableViewBackground;
    NSArray *_modePickerTableViewConstraints;
    NSArray *_modePickerTableViewHiddenConstraints;
    NSLayoutConstraint *_modePickerTableViewShortSideConstraint;
    NSNumberFormatter *_nonZeroLevelValueFormatter;
    _PUSliderPlayheadBaseView *_playheadBaseView;
    float _playheadSize;
    UIView *_playheadView;
    BOOL _playheadViewVisible;
    NSArray *_playheadViewsConstraints;
    PUAdjustmentsMode *_selectedMode;
    NSLayoutConstraint *_selfSizeConstraint;
    float _shortSideSize;
    float _slidersLongContentLength;
    float _slidersShortSideLength;
    NSNumberFormatter *_zeroLevelValueFormatter;
}

@property <PUAdjustmentsModeBarDataSource> * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property <PUAdjustmentsModeBarDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) float interactiveTransitionProgress;
@property(readonly) int interactiveTransitionState;
@property(readonly) BOOL isSlidersListReversed;
@property(readonly) int layoutOrientation;
@property(getter=isListViewExpanded,readonly) BOOL listViewExpanded;
@property(getter=isListViewExpandedExplicitly,readonly) BOOL listViewExpandedExplicitly;
@property float playheadSize;
@property(retain) PUAdjustmentsMode * selectedMode;
@property float shortSideSize;
@property(readonly) BOOL shouldShowModePickerOnFirstDisplay;
@property float slidersLongContentLength;
@property float slidersShortSideLength;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_formattedLevelValue:(float)arg1;
- (void)_handleModePickerExpansionButton:(id)arg1;
- (float)_modePickerRowHeight;
- (void)_transitionToInteractiveTransitionState:(int)arg1;
- (void)_updateExpandedShortSideSize;
- (void)_updateInteractiveTransitionProgress:(float)arg1;
- (void)_updateModePickerTableView;
- (void)_updateModeSlidersCollectionViewLayout:(id)arg1;
- (void)_updatePlayheadViewsAnimated:(BOOL)arg1;
- (void)_updateViewsForModePickerExpandedStateAnimated:(BOOL)arg1;
- (id)_visibleModeHigherThanMode:(id)arg1;
- (id)_visibleModeLowerThanMode:(id)arg1;
- (id)adjustmentViewsContainer;
- (id)allAdjustmentModes;
- (void)beginInteractiveTransition;
- (void)configurePickerCell:(id)arg1 forMode:(id)arg2;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (void)copyStateFromAdjustmentsModeBar:(id)arg1;
- (id)currentSlidersCollectionView;
- (id)dataSource;
- (id)delegate;
- (void)finishInteractiveTransitionWithVelocity:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)interactiveTransitionProgress;
- (int)interactiveTransitionState;
- (BOOL)isInInteractiveTransition;
- (BOOL)isListViewExpanded;
- (BOOL)isListViewExpandedExplicitly;
- (BOOL)isModeEnabledInDataSource:(id)arg1;
- (BOOL)isPlayheadViewVisible;
- (BOOL)isSlidersListReversed;
- (int)layoutOrientation;
- (void)layoutSubviews;
- (void)loadDataIfNeeded;
- (id)modeForSliderIndex:(int)arg1;
- (float)modePickerHeightForAllRows;
- (float)modePickerWidthVertical;
- (id)newConstraintsForModePickerList:(id)arg1;
- (id)newModePickerExpansionButton;
- (id)newModePickerListBackgroundView;
- (id)newSlidersCollectionView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)playheadSize;
- (void)reloadData;
- (id)selectedMode;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListViewExpanded:(BOOL)arg1 explicitly:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setPlayheadSize:(float)arg1;
- (void)setPlayheadViewVisible:(BOOL)arg1;
- (void)setPlayheadViewVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectedMode:(id)arg1;
- (void)setSelectedMode:(id)arg1 animated:(BOOL)arg2;
- (void)setShortSideSize:(float)arg1;
- (void)setSlidersLongContentLength:(float)arg1;
- (void)setSlidersShortSideLength:(float)arg1;
- (void)setupWithLayoutOrientation:(int)arg1;
- (float)shortSideSize;
- (BOOL)shouldShowModePickerOnFirstDisplay;
- (int)sliderIndexForMode:(id)arg1;
- (float)slidersLongContentLength;
- (float)slidersShortSideLength;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateConstraints;
- (void)updateEnabledForCurrentMode;
- (void)updateInteractiveTransitionProgress:(float)arg1;
- (void)updateSlidersListScrollOffsetAnimated:(BOOL)arg1;
- (void)visibleModesDidChangeWithInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2;
- (void)visibleModesWillChange;
- (id)visibleSliderAdjustmentModes;
- (BOOL)wantsToHandleEventAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end

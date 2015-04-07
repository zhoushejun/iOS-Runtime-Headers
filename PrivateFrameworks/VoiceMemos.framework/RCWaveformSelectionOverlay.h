/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCWaveformSelectionOverlayDelegate>, CALayer, NSMutableDictionary, RCOverlayBarLayer, RCTextLayer, RCUIConfiguration;

@interface RCWaveformSelectionOverlay : UIView {
    RCUIConfiguration *_UIConfiguration;
    double _assetCurrentTime;
    double _assetDuration;
    RCTextLayer *_beginTimeLayer;
    BOOL _beginTimeLayerOffsetForThumb;
    RCOverlayBarLayer *_beginTimeSelection;
    RCOverlayBarLayer *_currentTimeBar;
    <RCWaveformSelectionOverlayDelegate> *_delegate;
    BOOL _displayingSelectionTimes;
    BOOL _editingEnabled;
    RCTextLayer *_endTimeLayer;
    BOOL _endTimeLayerOffsetForThumb;
    RCOverlayBarLayer *_endTimeSelection;
    CALayer *_middleSelectionOverlay;
    double _requestedAnimatedLayoutDuration;
    BOOL _requestedNonAnimatedLayout;
    struct { 
        double beginTime; 
        double endTime; 
    } _selectedTimeRange;
    double _selectedTimeRangeMaximumDuration;
    double _selectedTimeRangeMinimumDuration;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _selectionAreaInsets;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _selectionRect;
    BOOL _sublayersCreated;
    double _trackedAssetCurrentTime;
    NSMutableDictionary *_trackedTouches;
}

@property(copy) RCUIConfiguration * UIConfiguration;
@property double assetCurrentTime;
@property double assetDuration;
@property(readonly) int beginTimeIndicatorSelectionAffinity;
@property(readonly) float currentTimeIndicatorCoordinate;
@property <RCWaveformSelectionOverlayDelegate> * delegate;
@property(getter=isDisplayingSelectionTimes) BOOL displayingSelectionTimes;
@property(getter=isEditingEnabled) BOOL editingEnabled;
@property(readonly) int endTimeIndicatorSelectionAffinity;
@property(readonly) struct { double x1; double x2; } selectedTimeRange;
@property double selectedTimeRangeMaximumDuration;
@property double selectedTimeRangeMinimumDuration;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionRect;
@property double trackedAssetCurrentTime;

- (void).cxx_destruct;
- (id)UIConfiguration;
- (BOOL)__shouldDisplayBeginTimeText;
- (BOOL)__shouldDisplayEndTimeText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_alternateBeginTimeRectWithSizedTextLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_alternateEndTimeRectWithSizedTextLayer:(id)arg1;
- (void)_autoUpdateIsDisplayingSelectionTimes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_beginTimeRectWithSizedTextLayer:(id)arg1 isOffsetForThumb:(BOOL*)arg2;
- (BOOL)_beginTrackingSelectionBar:(id)arg1 selectionBarType:(int)arg2 withTouch:(id)arg3;
- (void)_clearStaleTouches;
- (void)_clearSublayers;
- (void)_createSublayersIfNeeded;
- (BOOL)_drawsSelectionForWidth:(float)arg1;
- (float)_effectiveSelectionWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_endTimeRectWithSizedTextLayer:(id)arg1 isOffsetForThumb:(BOOL*)arg2;
- (id)_hitSelectionForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_middleTimeRectWithFont:(id)arg1;
- (float)_minimumOverlaySelectionWidth;
- (float)_minimumOverlayWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionBoundsIncludingKnobs;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionHighlightBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionRectForSelectedTimeRange:(struct { double x1; double x2; })arg1;
- (void)_setWantsAnimatedLayoutDuration:(double)arg1;
- (BOOL)_shouldDisplayBeginTimeText;
- (BOOL)_shouldDisplayEndTimeText;
- (BOOL)_shouldOffsetSelectionBarTypeForThumb:(int)arg1;
- (id)_touchTrackingInfoForSelectionBarTye:(int)arg1;
- (void)_updateSelectedTimeRangeForTrackedTouchesAnimated:(BOOL)arg1;
- (double)assetCurrentTime;
- (double)assetDuration;
- (int)beginTimeIndicatorSelectionAffinity;
- (float)currentTimeIndicatorCoordinate;
- (id)delegate;
- (int)endTimeIndicatorSelectionAffinity;
- (id)initWithDelegate:(id)arg1 height:(float)arg2 selectionAreaInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisplayingSelectionTimes;
- (BOOL)isEditingEnabled;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)reloadSelectionOffsets;
- (struct { double x1; double x2; })selectedTimeRange;
- (double)selectedTimeRangeMaximumDuration;
- (double)selectedTimeRangeMinimumDuration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionRect;
- (void)setAssetCurrentTime:(double)arg1;
- (void)setAssetDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayingSelectionTimes:(BOOL)arg1;
- (void)setEditingEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1 withAnimationDuration:(double)arg2;
- (void)setSelectedTimeRangeMaximumDuration:(double)arg1;
- (void)setSelectedTimeRangeMinimumDuration:(double)arg1;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTrackedAssetCurrentTime:(double)arg1;
- (void)setUIConfiguration:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)trackedAssetCurrentTime;

@end

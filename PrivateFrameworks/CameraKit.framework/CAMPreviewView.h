/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMCaptureController, CAMExposureBiasSlider, CAMFocusAttachmentView, CAMFocusLockAttachmentView, CAMFocusLockView, CAMFocusPointView, CAMFocusSplitAttachmentView, CAMFocusView, CAMVideoPreviewView, NSMutableDictionary, UIView;

@interface CAMPreviewView : UIView {
    int __exposureBiasSide;
    CAMCaptureController *__sharedCameraController;
    BOOL __showExposureBiasSlider;
    unsigned int _canShowFocus : 1;
    CAMFocusView *_continuousAutoFocusView;
    unsigned int _controlsAreVisible : 1;
    float _dimmingStrength;
    UIView *_dimmingView;
    CAMFocusAttachmentView *_dismissFocusAttachment;
    float _exposureBiasMax;
    float _exposureBiasMin;
    CAMExposureBiasSlider *_exposureBiasSlider;
    float _exposureBiasValue;
    CAMFocusPointView *_exposureView;
    NSMutableDictionary *_faceIDsToViews;
    UIView *_facesContainerView;
    UIView *_focusContainerView;
    CAMFocusPointView *_focusView;
    BOOL _hideExposureBiasSlider;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastExposureFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastFocusFrame;
    CAMFocusLockAttachmentView *_lockFocusAttachment;
    CAMFocusLockView *_lockFocusView;
    UIView *_maskingContainerView;
    UIView *_previewContainer;
    BOOL _showExposureBiasSliderOnChange;
    BOOL _showLockFocusAttachment;
    BOOL _showSplitFocusAndExposureAttachment;
    BOOL _splitFocusAndExposure;
    CAMFocusSplitAttachmentView *_splitFocusAndExposureAttachment;
    BOOL _square;
    CAMVideoPreviewView *_videoPreviewView;
}

@property(readonly) int _exposureBiasSide;
@property CAMCaptureController * _sharedCameraController;
@property(setter=_setShowExposureBiasSlider:) BOOL _showExposureBiasSlider;
@property float dimmingStrength;
@property float exposureBiasMax;
@property float exposureBiasMin;
@property float exposureBiasValue;
@property BOOL hideExposureBiasSlider;
@property(readonly) double lastExposureFadeOutTime;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } lastExposureFrame;
@property(readonly) double lastFocusFadeOutTime;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } lastFocusFrame;
@property BOOL showExposureBiasSliderOnChange;
@property BOOL showLockFocusAttachment;
@property BOOL showSplitFocusAndExposureAttachment;
@property BOOL splitFocusAndExposure;
@property(getter=isSquare) BOOL square;
@property(retain,readonly) CAMVideoPreviewView * videoPreviewView;

- (void).cxx_destruct;
- (BOOL)_allowDismissFocusAttachment;
- (BOOL)_allowFocusLockAttachments;
- (BOOL)_allowSplitFocusAndExposure;
- (void)_attachAttachment:(id)arg1 toFocusView:(id)arg2 position:(int)arg3;
- (void)_createExposureBiasSlider;
- (void)_createFocusViewIfNeeded;
- (BOOL)_enableExposureBias;
- (int)_exposureBiasSide;
- (void)_layoutExposureBiasSlider;
- (void)_setExposureBiasSliderAlpha:(float)arg1 animationDuration:(double)arg2;
- (void)_setShowExposureBiasSlider:(BOOL)arg1;
- (id)_sharedCameraController;
- (BOOL)_shouldDismissFocusViewsOnFocusDidEnd;
- (BOOL)_shouldVendAttachment:(id)arg1;
- (BOOL)_showExposureBiasSlider;
- (void)_showFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1 startAnimating:(BOOL)arg2;
- (void)_updateExposureFrameForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateFocusFrameForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateLockFocusAttachment;
- (void)_updateSplitFocusAndExposureAttachment;
- (void)animateFocusLock;
- (void)animateFocusLockScaleDown;
- (struct CGPoint { float x1; float x2; })currentExposurePoint;
- (struct CGPoint { float x1; float x2; })currentFocusPoint;
- (float)dimmingStrength;
- (id)dismissFocusAttachment;
- (void)dismissFocusViews;
- (float)exposureBiasMax;
- (float)exposureBiasMin;
- (id)exposureBiasSlider;
- (float)exposureBiasValue;
- (id)exposurePointView;
- (void)fadeOutFaceTrackingViews;
- (void)focusDidEnd;
- (id)focusPointView;
- (BOOL)hideExposureBiasSlider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSquare;
- (double)lastExposureFadeOutTime;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lastExposureFrame;
- (double)lastFocusFadeOutTime;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lastFocusFrame;
- (id)lockFocusAttachment;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)removeAllFocusViewsLeavingActivePointViews:(BOOL)arg1;
- (void)removeContinuousAutoFocusView;
- (void)resetFocusViewFadeOutSuspensions;
- (void)resumeFocusViewFadeOutResetPending:(BOOL)arg1;
- (void)setControlsAreVisible:(BOOL)arg1;
- (void)setDimmingStrength:(float)arg1;
- (void)setDimmingStrength:(float)arg1 duration:(double)arg2;
- (void)setExposureBiasMax:(float)arg1;
- (void)setExposureBiasMin:(float)arg1;
- (void)setExposureBiasSide:(int)arg1 animated:(BOOL)arg2;
- (void)setExposureBiasValue:(float)arg1;
- (void)setFocusViewsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHideExposureBiasSlider:(BOOL)arg1;
- (void)setShouldShowFocus:(BOOL)arg1;
- (void)setShowExposureBiasSliderOnChange:(BOOL)arg1;
- (void)setShowLockFocusAttachment:(BOOL)arg1;
- (void)setShowSplitFocusAndExposureAttachment:(BOOL)arg1;
- (void)setSplitFocusAndExposure:(BOOL)arg1;
- (void)setSquare:(BOOL)arg1;
- (void)setSquare:(BOOL)arg1 animated:(BOOL)arg2;
- (void)set_sharedCameraController:(id)arg1;
- (void)showContinuousAutoFocusView;
- (BOOL)showExposureBiasSliderOnChange;
- (void)showFaceTrackingViewsForFaces:(id)arg1;
- (void)showFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)showLockFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)showLockFocusAttachment;
- (BOOL)showSplitFocusAndExposureAttachment;
- (BOOL)splitFocusAndExposure;
- (id)splitFocusAndExposureAttachment;
- (void)suspendFocusViewFadeOut;
- (void)updateExposurePoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateFocusViewsLastInteractionTime;
- (id)videoPreviewView;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <PLCameraPanoramaViewDelegate>, CADisplayLink, CALayer, CAMPanoramaArrowView, CAMPanoramaLabel, CAMPanoramaLevelView, CMMotionManager, NSOperationQueue, NSString, UIImageView, UIView;

@interface CAMPanoramaView : UIView <UIAccelerometerDelegate> {
    NSOperationQueue *_accelerometerQueue;
    CAMPanoramaArrowView *_arrowView;
    struct CGPoint { 
        float x; 
        float y; 
    } _arrowViewBeginCenter;
    float _currentAcceleration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentArrowFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentMaskFrame;
    float _currentSpeed;
    int _deferredDeviceOrientation;
    <PLCameraPanoramaViewDelegate> *_delegate;
    int _deviceOrientation;
    int _direction;
    CADisplayLink *_displayLink;
    int _frameCounter;
    BOOL _ignorePreviewUpdates;
    float _initialAcceleration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _initialArrowFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _initialMaskFrame;
    CAMPanoramaLabel *_instructionalText;
    UIView *_instructionalTextBackground;
    BOOL _isAnimatingDirection;
    BOOL _isAnimatingTextIn;
    BOOL _isAnimatingTextOut;
    BOOL _isCapturing;
    BOOL _isProcessing;
    CAMPanoramaLevelView *_levelView;
    CMMotionManager *_motionManager;
    UIImageView *_previewBackgroundImageView;
    UIView *_previewContainer;
    UIImageView *_previewGhostImageView;
    CALayer *_previewLayer;
    UIView *_previewMaskingContainer;
    float _previewScale;
    BOOL _showingFastText;
    BOOL _showingMoveText;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visiblePreviewRect;
}

@property(copy,readonly) NSString * debugDescription;
@property <PLCameraPanoramaViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) CALayer * panoramaPreviewLayer;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_arrowWasTapped:(id)arg1;
- (void)_cancelDelayedShowMoveText;
- (void)_createMotionManagerAndDisplayLink;
- (float)_ghostWidth;
- (void)_hideText;
- (void)_showMoveDownText;
- (void)_showMoveUpText;
- (void)_updateInstructionalText:(id)arg1;
- (void)_updateInstructionalTextBackground;
- (void)dealloc;
- (id)delegate;
- (void)hideArrowTextAfterDelay;
- (void)hideFastMovementTextAfterDelay;
- (void)hideInstructionalText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 centerYOffset:(float)arg2 panoramaPreviewScale:(float)arg3;
- (id)panoramaPreviewLayer;
- (void)panoramaWillStart;
- (void)setCaptureDirection:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(int)arg1;
- (void)setMaskingContainerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 direction:(int)arg2;
- (void)showFastMovementText;
- (void)showMoveDownText;
- (void)showMoveDownTextAfterDelay;
- (void)showMoveUpText;
- (void)showMoveUpTextAfterDelay;
- (void)showSavingHUD:(BOOL)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)updateUI;
- (void)updateWithParameters:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visiblePreviewRect;

@end

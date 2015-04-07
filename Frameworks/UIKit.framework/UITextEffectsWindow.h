/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSString, UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject> {
    unsigned int _activeEffectsCount;
    unsigned int _activeRemoteViewCount;
    float _defaultWindowLevel;
    unsigned int _hostedUseCount;
    struct CGPoint { 
        float x; 
        float y; 
    } _hostedWindowOffset;
    BOOL _inDealloc;
    NSDictionary *_perScreenOptions;
    unsigned int _windowLevelCount;
    float _windowLevelStack[5];
}

@property(readonly) UIScreen * _intendedScreen;
@property(readonly) NSDictionary * _options;
@property(readonly) unsigned int contextID;
@property(copy,readonly) NSString * debugDescription;
@property float defaultWindowLevel;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } hostedFrame;
@property struct CGPoint { float x1; float x2; } hostedWindowOffset;
@property(readonly) Class superclass;
@property BOOL useHostedInstance;

+ (BOOL)_isSystemWindow;
+ (id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(BOOL)arg2 allowHosted:(BOOL)arg3 matchesStatusBarOrientationOnAccess:(BOOL)arg4;
+ (id)activeTextEffectsWindowForScreen:(id)arg1;
+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)releaseSharedInstances;
+ (id)sharedTextEffectsWindow;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)sharedTextEffectsWindowForScreen:(id)arg1;

- (struct CGPoint { float x1; float x2; })_adjustPointForHostedDisplay:(struct CGPoint { float x1; float x2; })arg1 hasTarget:(BOOL)arg2 inset:(BOOL)arg3;
- (id)_basicInitWithScreen:(id)arg1 options:(id)arg2;
- (BOOL)_canActAsKeyWindowForScreen:(id)arg1;
- (BOOL)_canAffectStatusBarAppearance;
- (void)_configureContextOptions:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (BOOL)_disableViewScaling;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_intendedScreen;
- (BOOL)_isTextEffectsWindow;
- (void)_matchDeviceOrientation;
- (BOOL)_matchingOptions:(id)arg1;
- (id)_options;
- (void)_restoreWindowLevel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sceneBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sceneReferenceBounds;
- (void)_setWindowLevel:(float)arg1;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)_shouldParticipateInVirtualResizing;
- (BOOL)_shouldResizeWithScene;
- (BOOL)_shouldTintStatusBar;
- (void)_updateTransformLayerForClassicPresentation;
- (id)aboveStatusBarWindow;
- (void)applicationWindowRotated:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (struct CGPoint { float x1; float x2; })classicWindowPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)contextID;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (void)dealloc;
- (float)defaultWindowLevel;
- (void)delayHideWindow;
- (void)didAddSubview:(id)arg1;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hostedFrame;
- (struct CGPoint { float x1; float x2; })hostedWindowOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (BOOL)isInternalWindow;
- (struct CGPoint { float x1; float x2; })magnifierScreenPointForPoint:(struct CGPoint { float x1; float x2; })arg1 targetWindow:(id)arg2;
- (id)nonHostedWindow;
- (void)resetTransform;
- (void)sendSubviewToBack:(id)arg1;
- (void)setDefaultWindowLevel:(float)arg1;
- (void)setHostedWindowOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setUseHostedInstance:(BOOL)arg1;
- (void)sortSubviews;
- (void)updateForOrientation:(int)arg1;
- (void)updateForOrientation:(int)arg1 forceResetTransform:(BOOL)arg2;
- (void)updateSubviewOrdering;
- (BOOL)useHostedInstance;

@end

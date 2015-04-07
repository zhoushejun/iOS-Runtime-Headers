/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIControl : UIView {
    struct { 
        unsigned int disabled : 1; 
        unsigned int tracking : 1; 
        unsigned int touchInside : 1; 
        unsigned int touchDragged : 1; 
        unsigned int requiresDisplayOnTracking : 1; 
        unsigned int highlighted : 1; 
        unsigned int dontHighlightOnTouchDown : 1; 
        unsigned int delayActions : 1; 
        unsigned int allowActionsToQueue : 1; 
        unsigned int pendingUnhighlight : 1; 
        unsigned int selected : 1; 
        unsigned int verticalAlignment : 2; 
        unsigned int horizontalAlignment : 2; 
        unsigned int wasLastHighlightSuccessful : 1; 
        unsigned int touchHasHighlighted : 1; 
    } _controlFlags;
    double _downTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousPoint;
    NSMutableArray *_targetActions;
}

@property int contentHorizontalAlignment;
@property int contentVerticalAlignment;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isSelected) BOOL selected;
@property(readonly) unsigned int state;
@property(getter=isTouchInside,readonly) BOOL touchInside;
@property(getter=isTracking,readonly) BOOL tracking;

- (void)_cancelDelayedActions;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_clippedHighlightBounds;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)_delayActions;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_hasActionForEventMask:(int)arg1;
- (float)_highlightCornerRadius;
- (void)_sendActionsForEvents:(int)arg1 withEvent:(id)arg2;
- (void)_sendDelayedActions;
- (void)_sendDelayedActions:(BOOL)arg1;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (void)_setLastHighlightSuccessful:(BOOL)arg1;
- (void)_setTouchHasHighlighted:(BOOL)arg1;
- (BOOL)_touchHasHighlighted;
- (void)_unhighlight;
- (BOOL)_wasLastHighlightSuccessful;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned int)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (unsigned int)allControlEvents;
- (id)allTargets;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (int)contentHorizontalAlignment;
- (int)contentVerticalAlignment;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)hasOneOrMoreTargets;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (BOOL)isTouchInside;
- (BOOL)isTracking;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (BOOL)requiresDisplayOnTracking;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(unsigned int)arg1;
- (void)setContentHorizontalAlignment:(int)arg1;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRequiresDisplayOnTracking:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTracking:(BOOL)arg1;
- (BOOL)shouldTrack;
- (unsigned int)state;
- (BOOL)touchDragged;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

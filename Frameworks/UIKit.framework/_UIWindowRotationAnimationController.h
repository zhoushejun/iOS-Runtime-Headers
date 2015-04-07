/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface _UIWindowRotationAnimationController : _UIWindowAnimationController {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animations;

    double _duration;
    BOOL _earlyLayoutIsNeeded;
    BOOL _skipCallbacks;
    BOOL _updateStatusBarIfNecessary;
}

@property(copy) id animations;
@property double duration;
@property BOOL earlyLayoutIsNeeded;
@property BOOL skipCallbacks;
@property BOOL updateStatusBarIfNecessary;

- (void)animateTransition:(id)arg1;
- (id)animations;
- (void)dealloc;
- (double)duration;
- (BOOL)earlyLayoutIsNeeded;
- (void)setAnimations:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEarlyLayoutIsNeeded:(BOOL)arg1;
- (void)setSkipCallbacks:(BOOL)arg1;
- (void)setUpdateStatusBarIfNecessary:(BOOL)arg1;
- (BOOL)skipCallbacks;
- (double)transitionDuration:(id)arg1;
- (BOOL)updateStatusBarIfNecessary;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface _FIUIAnimatableProperty : NSObject {
    NSMutableArray *_animations;
    id _currentValue;
    id _endValue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _getter;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _setter;

    id _startValue;
}

@property(retain) id currentValue;
@property(retain) id endValue;
@property(retain) id startValue;

- (void).cxx_destruct;
- (void)addPropertyAnimation:(id)arg1;
- (id)currentValue;
- (id)endValue;
- (id)initWithGetter:(id)arg1 setter:(id)arg2;
- (BOOL)isFinishedAnimating;
- (void)removeAllPropertyAnimations;
- (void)setCurrentValue:(id)arg1;
- (void)setEndValue:(id)arg1;
- (void)setStartValue:(id)arg1;
- (id)startValue;
- (void)update:(double)arg1;

@end

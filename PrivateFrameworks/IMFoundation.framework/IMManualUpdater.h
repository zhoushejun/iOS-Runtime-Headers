/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMManualUpdater : NSObject {
    SEL _action;
    unsigned int _needsUpdate : 1;
    id _target;
}

@property SEL action;
@property BOOL needsUpdate;
@property id target;

- (SEL)action;
- (id)description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)needsUpdate;
- (void)setAction:(SEL)arg1;
- (void)setNeedsUpdate;
- (void)setNeedsUpdate:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)updateIfNeeded;

@end

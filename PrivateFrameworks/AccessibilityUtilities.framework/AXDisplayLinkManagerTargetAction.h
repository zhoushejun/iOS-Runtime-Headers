/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDisplayLinkManagerTargetAction : NSObject {
    SEL _actionSelector;
    unsigned int _displayDidRefreshCount;
    unsigned int _frameInterval;
    id _target;
}

@property SEL actionSelector;
@property unsigned int displayDidRefreshCount;
@property unsigned int frameInterval;
@property(retain) id target;

- (SEL)actionSelector;
- (void)dealloc;
- (void)displayDidRefresh:(id)arg1;
- (unsigned int)displayDidRefreshCount;
- (unsigned int)frameInterval;
- (unsigned int)hash;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 frameInterval:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)setActionSelector:(SEL)arg1;
- (void)setDisplayDidRefreshCount:(unsigned int)arg1;
- (void)setFrameInterval:(unsigned int)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end

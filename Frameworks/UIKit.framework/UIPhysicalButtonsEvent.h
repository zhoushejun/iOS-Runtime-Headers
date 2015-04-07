/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet, _UIPhysicalButton;

@interface UIPhysicalButtonsEvent : UIInternalEvent {
    NSMutableSet *_allPhysicalButtons;
    _UIPhysicalButton *_triggeringPhysicalButton;
}

@property(retain) _UIPhysicalButton * _triggeringPhysicalButton;

- (void)_addPhysicalButton:(id)arg1;
- (id)_allPhysicalButtons;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(int)arg2;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(int)arg2;
- (id)_physicalButtonsForWindow:(id)arg1;
- (void)_removePhysicalButton:(id)arg1;
- (id)_respondersForWindow:(id)arg1;
- (id)_triggeringPhysicalButton;
- (id)_windows;
- (void)dealloc;
- (void)set_triggeringPhysicalButton:(id)arg1;
- (int)type;

@end

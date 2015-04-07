/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray;

@interface ABDelayedNotificationSender : NSObject {
    struct __CFDictionary { } *_delayedNotificationInfos;
    NSMutableArray *_delayedNotifications;
    struct __CFArray { } *_delegatesForDelayedNotification;
}

- (void)addDelayedNotification:(id)arg1;
- (void)addDelayedNotification:(id)arg1 withInfo:(struct __CFDictionary { }*)arg2 allowDuplicateNotification:(BOOL)arg3;
- (void)addDelegate:(id)arg1;
- (BOOL)containsDelegate:(id)arg1;
- (void)dealloc;
- (void)removeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2;

@end

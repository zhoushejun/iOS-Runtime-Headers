/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    MSAlertManager *_owner;
    NSString *_personID;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct __CFUserNotification { } *_userNotification;
}

@property(copy) id completionBlock;
@property MSAlertManager * owner;
@property(retain) NSString * personID;
@property struct __CFRunLoopSource { }* runLoopSource;
@property struct __CFUserNotification { }* userNotification;

+ (id)info;

- (void).cxx_destruct;
- (id)completionBlock;
- (void)dealloc;
- (id)owner;
- (id)personID;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (void)setCompletionBlock:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setUserNotification:(struct __CFUserNotification { }*)arg1;
- (struct __CFUserNotification { }*)userNotification;

@end

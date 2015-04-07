/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface SYDClient : NSObject {
    BOOL _additionalSource;
    NSString *_bundleIdentifier;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_storeIdentifier;
}

- (void)_createConnectionIfNecessary;
- (id)_newMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_resetConnection;
- (void)_sendMessage:(id)arg1 replyHandler:(id)arg2;
- (void)_sendMessageNoReply:(id)arg1;
- (id)_sendMessageWithReplySync:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString { }*)arg2 storeIdentifier:(struct __CFString { }*)arg3;
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString { }*)arg2 storeIdentifier:(struct __CFString { }*)arg3 additionalSource:(BOOL)arg4;
- (void)sendMessageWithName:(id)arg1;
- (void)sendMessageWithName:(id)arg1 replyHandler:(id)arg2;
- (id)sendMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(id)arg3;
- (void)shutdown;

@end

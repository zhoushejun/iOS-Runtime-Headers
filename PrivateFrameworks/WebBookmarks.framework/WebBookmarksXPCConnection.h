/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class <WebBookmarksXPCConnectionDelegate>, NSMutableDictionary, NSObject<OS_xpc_object>;

@interface WebBookmarksXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    <WebBookmarksXPCConnectionDelegate> *_delegate;
    NSMutableDictionary *_entitlementLookupCache;
    NSMutableDictionary *_messageHandlers;
}

@property(readonly) NSObject<OS_xpc_object> * connection;

- (void)_handleMessage:(id)arg1;
- (id)connection;
- (void)dealloc;
- (BOOL)hasBoolEntitlement:(id)arg1;
- (id)initClientForMachService:(const char *)arg1 delegate:(id)arg2;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)messageReplyingTo:(id)arg1;
- (id)messageWithName:(const char *)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReplyHandler:(id)arg2;
- (id)sendMessageWithSynchronousReply:(id)arg1;
- (void)setHandler:(id)arg1 forMessageNamed:(const char *)arg2;
- (void)setMessageHandlers:(id)arg1;

@end

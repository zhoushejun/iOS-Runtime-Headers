/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface SKXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _disconnectBlock;

    NSObject<OS_dispatch_queue> *_dispatchQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageBlock;

}

@property(copy) id disconnectBlock;
@property(copy) id messageBlock;

- (id)_initSKXPCConnection;
- (void)_reloadEventHandler;
- (id)createXPCEndpoint;
- (void)dealloc;
- (id)disconnectBlock;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (id)messageBlock;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)sendSynchronousMessage:(id)arg1 withReply:(id)arg2;
- (void)setDisconnectBlock:(id)arg1;
- (void)setMessageBlock:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_xpc_object>;

@interface XPCRequest : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSObject<OS_xpc_object> *_message;
    NSObject<OS_xpc_object> *_reply;
    unsigned long _sequence;
}

@property(readonly) NSObject<OS_xpc_object> * message;
@property(readonly) NSObject<OS_xpc_object> * reply;
@property(readonly) unsigned long sequence;

- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 sequence:(unsigned long)arg2 connection:(id)arg3;
- (id)message;
- (id)reply;
- (void)sendReply;
- (unsigned long)sequence;

@end

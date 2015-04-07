/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface PKDaemonClient : NSObject {
    NSObject<OS_xpc_object> *_pkd;
    long long _protocolVersion;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property(retain) NSObject<OS_xpc_object> * pkd;
@property long long protocolVersion;
@property(retain) NSObject<OS_dispatch_queue> * replyQueue;

- (void).cxx_destruct;
- (void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(id)arg3;
- (void)addPlugIns:(id)arg1 reply:(id)arg2;
- (void)bulkPlugins:(unsigned long long)arg1 reply:(id)arg2;
- (void)copyReceipt:(id)arg1;
- (id)errorInReply:(id)arg1;
- (void)holdPlugins:(id)arg1 flags:(unsigned long long)arg2 reply:(id)arg3;
- (id)initWithServiceName:(const char *)arg1;
- (void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(id)arg3;
- (id)pkd;
- (long long)protocolVersion;
- (void)readyPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(id)arg3;
- (void)releaseHold:(id)arg1 reply:(id)arg2;
- (void)removePlugIns:(id)arg1 reply:(id)arg2;
- (id)replyQueue;
- (id)request:(const char *)arg1;
- (id)request:(const char *)arg1 paths:(id)arg2;
- (void)send:(id)arg1 reply:(id)arg2;
- (void)set:(id)arg1 uuids:(id)arg2;
- (void)setPkd:(id)arg1;
- (void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(id)arg3;
- (void)setProtocolVersion:(long long)arg1;
- (void)setReplyQueue:(id)arg1;

@end

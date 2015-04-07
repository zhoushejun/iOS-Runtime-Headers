/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSObject>, NSObject<OS_dispatch_queue>, NSString, NSXPCInterface, NSXPCListenerEndpoint;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
    id _dCache;
    id _eCache;
    NSXPCListenerEndpoint *_endpoint;
    id _exportInfo;
    id _importInfo;
    id _incomingReplyInfo;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _interruptionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidationHandler;

    id _lock;
    <NSObject> *_otherInfo;
    NSXPCInterface *_remoteObjectInterface;
    id _replyTable;
    id _reserved1;
    NSString *_serviceName;
    unsigned int _state;
    unsigned int _state2;
    NSObject<OS_dispatch_queue> *_userQueue;
    void *_xconnection;
}

@property(readonly) int auditSessionIdentifier;
@property(readonly) unsigned int effectiveGroupIdentifier;
@property(readonly) unsigned int effectiveUserIdentifier;
@property(retain,readonly) NSXPCListenerEndpoint * endpoint;
@property(retain) NSXPCInterface * exportedInterface;
@property(retain) id exportedObject;
@property(copy) id interruptionHandler;
@property(copy) id invalidationHandler;
@property(readonly) int processIdentifier;
@property(retain) NSXPCInterface * remoteObjectInterface;
@property(retain,readonly) id remoteObjectProxy;
@property(copy,readonly) NSString * serviceName;

+ (id)_currentBoost;
+ (void)beginTransaction;
+ (id)callServicesAccountsControllerDelegateXPCInterface;
+ (id)callServicesDaemonDelegateXPCInterface;
+ (id)callServicesDaemonObserverXPCInterface;
+ (id)currentConnection;
+ (void)dispatchMainIfCurrentXPCConnection:(id)arg1;
+ (void)endTransaction;

- (void)_addClassToDecodeCache:(Class)arg1;
- (void)_addClassToEncodeCache:(Class)arg1;
- (void)_addImportedProxy:(unsigned long long)arg1;
- (void)_cancelProgress:(unsigned long long)arg1;
- (id)_clientBundleID;
- (void)_decodeAndInvokeMessageWithData:(id)arg1;
- (void)_decodeAndInvokeReplyBlockWithData:(id)arg1 replyInfo:(id)arg2;
- (BOOL)_decodeCacheContainsClass:(Class)arg1;
- (void)_decodeProgressMessageWithData:(id)arg1;
- (BOOL)_encodeCacheContainsClass:(Class)arg1;
- (id)_errorDescription;
- (id)_exportTable;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned int)arg3;
- (void)_killConnection:(int)arg1;
- (void)_pauseProgress:(unsigned long long)arg1;
- (id)_queue;
- (void)_removeImportedProxy:(unsigned long long)arg1;
- (void)_sendDesistForProxyNumber:(unsigned long long)arg1;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(double)arg5;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(double)arg5 userInfo:(id)arg6;
- (void)_setQueue:(id)arg1;
- (void)_setTargetUserIdentifier:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (void)_updateProgress:(unsigned long long)arg1 completed:(long long)arg2 total:(long long)arg3;
- (id)_xpcConnection;
- (void)addBarrierBlock:(id)arg1;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)endpoint;
- (id)exportedInterface;
- (id)exportedObject;
- (void)finalize;
- (id)init;
- (id)initCellularPlanDatabaseClient;
- (id)initVinylTestClient;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned int)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 options:(unsigned int)arg2;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (int)processIdentifier;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id)arg2;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (void)resume;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)sl_clientHasEntitlement:(id)arg1;
- (id)sl_localizedClientName;
- (void)start;
- (void)stop;
- (void)suspend;
- (id)userInfo;
- (id)valueForEntitlement:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_listenerIDToServicesMap;
    NSMutableDictionary *_listeners;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_rerouteService;
    NSString *_serviceToken;
    NSMutableDictionary *_transactionIDToBlockMap;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)initialize;

- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
- (void)___oldDealloc;
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(id)arg3 failBlock:(id)arg4 waitForReply:(BOOL)arg5;
- (id)_cacheForService:(id)arg1;
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)_callDelegatesWithBlock:(id)arg1 delegateMap:(id)arg2;
- (void)_connect;
- (int)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;
- (void)_disconnectFromQueryService;
- (BOOL)_flushQueryCacheForService:(id)arg1;
- (BOOL)_hasCacheForService:(id)arg1;
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(BOOL)arg4 completionBlock:(id)arg5;
- (BOOL)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;
- (void)_purgeIDStatusCache;
- (void)_purgeIDStatusCacheAfter:(double)arg1;
- (BOOL)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(BOOL)arg4 queue:(id)arg5 completionBlock:(id)arg6;
- (void)_requestCacheForService:(id)arg1 completionBlock:(id)arg2;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id)arg4;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id)arg4;
- (id)_reroutedPrototypeService:(id)arg1;
- (void)_setCurrentIDStatus:(int)arg1 forDestination:(id)arg2 service:(id)arg3;
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;
- (BOOL)_warmupQueryCacheForService:(id)arg1;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)init;
- (id)initWithDelegateContext:(id)arg1 queue:(id)arg2;
- (BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;

@end

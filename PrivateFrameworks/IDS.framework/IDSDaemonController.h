/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class IDSDaemonListener, IMLocalObject, IMRemoteObject<IDSDaemonProtocol>, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSSet, NSString;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol> {
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    unsigned int _cachedCapabilities;
    NSSet *_cachedCommands;
    NSSet *_cachedServices;
    NSSet *_commands;
    unsigned int _connectionID;
    int _curXPCMessagePriority;
    NSObject<OS_dispatch_group> *_daemonConnectedGroup;
    IDSDaemonListener *_daemonListener;
    id _delegate;
    BOOL _hasBeenSuspended;
    BOOL _hasCheckedForDaemon;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    unsigned int _lastUpdateCaps;
    NSMutableDictionary *_listenerCapabilities;
    NSMutableDictionary *_listenerCommands;
    NSString *_listenerID;
    NSMutableDictionary *_listenerServices;
    IMLocalObject *_localObject;
    NSMutableSet *_notificationServices;
    BOOL _preventReconnect;
    NSProtocolChecker *_protocol;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    IMRemoteObject<IDSDaemonProtocol> *_remoteObject;
    NSSet *_services;
}

@property(setter=_setAutoReconnect:) BOOL _autoReconnect;
@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;
@property int curXPCMessagePriority;
@property(copy,readonly) NSString * debugDescription;
@property id delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isConnecting;
@property(readonly) IDSDaemonListener * listener;
@property(readonly) NSString * listenerID;
@property(readonly) Class superclass;

+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (void)_setApplicationWillTerminate;
+ (id)sharedInstance;

- (void)_agentDidLaunchNotification:(id)arg1;
- (BOOL)_autoReconnect;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)_disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)_handleDaemonException:(id)arg1;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(id)arg2;
- (void)_noteDisconnected;
- (void)_noteSetupComplete;
- (void)_performBlock:(id)arg1;
- (void)_performBlock:(id)arg1 wait:(BOOL)arg2;
- (id)_remoteMessageQueue;
- (void)_remoteObjectCleanup;
- (void)_setAutoReconnect:(BOOL)arg1;
- (BOOL)_setCapabilities:(unsigned int)arg1;
- (BOOL)_setCommands:(id)arg1;
- (BOOL)_setServices:(id)arg1;
- (void)_setServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3;
- (void)addedDelegateForService:(id)arg1;
- (void)blockUntilConnected;
- (unsigned int)capabilities;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (id)commands;
- (id)commandsForListenerID:(id)arg1;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (int)curXPCMessagePriority;
- (void)dealloc;
- (id)delegate;
- (void)disconnectFromDaemon;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (id)listener;
- (id)listenerID;
- (id)localObject;
- (void)localObjectDiedNotification:(id)arg1;
- (BOOL)localObjectExists;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)remoteObjectExists;
- (BOOL)removeListenerID:(id)arg1;
- (void)sendXPCObject:(id)arg1 objectContext:(id)arg2;
- (id)services;
- (id)servicesForListenerID:(id)arg1;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (BOOL)setCommands:(id)arg1 forListenerID:(id)arg2;
- (void)setCurXPCMessagePriority:(int)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)setServices:(id)arg1 forListenerID:(id)arg2;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PKCorePlugInProtocol>, <PKPlugIn>, NSArray, NSBundle, NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection, Protocol;

@interface PKHostPlugIn : PKPlugInCore <NSXPCConnectionDelegate, PKPlugInPrivate> {
    NSObject<OS_dispatch_queue> *__replyQueue;
    NSObject<OS_dispatch_queue> *__startQueue;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSDate *_beganUsingAt;
    NSUserDefaults *_defaults;
    NSDictionary *_discoveryExtensions;
    NSBundle *_embeddedBundle;
    id _embeddedPrincipal;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _notificationBlock;

    id _plugInPrincipal;
    NSXPCConnection *_pluginConnection;
    id _queuedHostPrincipal;
    Protocol *_queuedHostProtocol;
    NSArray *_sandboxExtensions;
    <PKCorePlugInProtocol> *_service;
    unsigned int _state;
    <PKPlugIn> *_supersededBy;
    NSUUID *_supersedingUUID;
    unsigned int _useCount;
}

@property(retain) NSObject<OS_dispatch_queue> * _replyQueue;
@property(retain) NSObject<OS_dispatch_queue> * _startQueue;
@property(retain) NSObject<OS_dispatch_queue> * _syncQueue;
@property(readonly) bool active;
@property(readonly) NSDictionary * attributes;
@property(retain) NSDate * beganUsingAt;
@property(readonly) NSDictionary * bundleInfoDictionary;
@property(readonly) NSURL * containingUrl;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSUserDefaults * defaults;
@property(copy,readonly) NSString * description;
@property(retain) NSDictionary * discoveryExtensions;
@property(retain) NSBundle * embeddedBundle;
@property(retain) id embeddedPrincipal;
@property(retain) NSDictionary * extensionState;
@property(readonly) unsigned int hash;
@property(readonly) NSString * identifier;
@property(readonly) NSString * localizedContainingName;
@property(readonly) NSString * localizedName;
@property(readonly) NSString * localizedShortName;
@property(copy) id notificationBlock;
@property(readonly) BOOL onSystemVolume;
@property(readonly) NSDictionary * plugInDictionary;
@property(retain) id plugInPrincipal;
@property(retain) NSXPCConnection * pluginConnection;
@property(retain) id queuedHostPrincipal;
@property(retain) Protocol * queuedHostProtocol;
@property(retain) NSArray * sandboxExtensions;
@property(retain) <PKCorePlugInProtocol> * service;
@property unsigned int state;
@property(readonly) Class superclass;
@property(retain) <PKPlugIn> * supersededBy;
@property(retain) NSUUID * supersedingUUID;
@property(readonly) NSDate * timestamp;
@property(readonly) NSURL * url;
@property unsigned int useCount;
@property int userElection;
@property(readonly) NSUUID * uuid;
@property(readonly) NSString * version;

- (void).cxx_destruct;
- (id)_replyQueue;
- (id)_startQueue;
- (id)_syncQueue;
- (bool)active;
- (id)beganUsingAt;
- (void)beginUsing:(id)arg1;
- (void)changeState:(unsigned int)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (id)defaults;
- (id)description;
- (id)discoveryExtensions;
- (id)embeddedBundle;
- (id)embeddedPrincipal;
- (void)endUsing:(id)arg1;
- (id)extensionState;
- (id)initWithForm:(id)arg1;
- (bool)loadExtensions:(id)arg1 error:(id*)arg2;
- (void)messageTraceUsage;
- (id)notificationBlock;
- (id)plugInPrincipal;
- (id)pluginConnection;
- (void)preparePlugin:(id)arg1;
- (id)queuedHostPrincipal;
- (id)queuedHostProtocol;
- (void)resume;
- (id)sandboxExtensions;
- (id)service;
- (void)setBeganUsingAt:(id)arg1;
- (void)setBootstrap;
- (void)setDiscoveryExtensions:(id)arg1;
- (void)setEmbeddedBundle:(id)arg1;
- (void)setEmbeddedPrincipal:(id)arg1;
- (void)setExtensionState:(id)arg1;
- (void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2;
- (void)setNotificationBlock:(id)arg1;
- (void)setPlugInPrincipal:(id)arg1;
- (void)setPluginConnection:(id)arg1;
- (void)setQueuedHostPrincipal:(id)arg1;
- (void)setQueuedHostProtocol:(id)arg1;
- (void)setReplyQueue:(id)arg1;
- (void)setSandboxExtensions:(id)arg1;
- (void)setService:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setSupersededBy:(id)arg1;
- (void)setSupersedingUUID:(id)arg1;
- (void)setUseCount:(unsigned int)arg1;
- (void)setUserElection:(int)arg1;
- (void)set_replyQueue:(id)arg1;
- (void)set_startQueue:(id)arg1;
- (void)set_syncQueue:(id)arg1;
- (void)startPlugIn:(id)arg1;
- (unsigned int)state;
- (id)supersededBy;
- (id)supersedingUUID;
- (void)suspend;
- (void)unwind:(unsigned int)arg1 force:(BOOL)arg2;
- (BOOL)useBundle:(id)arg1 error:(id*)arg2;
- (unsigned int)useCount;
- (int)userElection;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;

@interface NSProgress : NSObject <NSProgressPublisher> {
    NSMutableDictionary *_acknowledgementHandlersByBundleID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancellationHandler;

    NSMutableSet *_childrenGroups;
    NSXPCConnection *_connection;
    int _disconnectingBlockageCount;
    unsigned long long _flags;
    id _group;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSLock *_lock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pausingHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _prioritizationHandler;

    NSString *_publisherID;
    int _remoteObserverCount;
    long long _reserved4;
    id _reserved5;
    int _unpublishingBlockageCount;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    id _userInfoProxy;
    id _values;
}

@property(getter=isCancellable) BOOL cancellable;
@property(copy) id cancellationHandler;
@property(getter=isCancelled,readonly) BOOL cancelled;
@property long long completedUnitCount;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) double fractionCompleted;
@property(readonly) unsigned int hash;
@property(getter=isIndeterminate,readonly) BOOL indeterminate;
@property unsigned int installPhase;
@property unsigned int installState;
@property(copy) NSString * kind;
@property(copy) NSString * localizedAdditionalDescription;
@property(copy) NSString * localizedDescription;
@property(getter=isOld,readonly) BOOL old;
@property(getter=isPausable) BOOL pausable;
@property(getter=isPaused,readonly) BOOL paused;
@property(copy) id pausingHandler;
@property(readonly) NSString * sf_bundleID;
@property(readonly) NSString * sf_error;
@property(readonly) NSString * sf_personRealName;
@property(readonly) NSString * sf_publishingKey;
@property(readonly) NSString * sf_sessionID;
@property int sf_transferState;
@property(readonly) Class superclass;
@property long long totalUnitCount;
@property(copy,readonly) NSDictionary * userInfo;

+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (id)_publisherInterface;
+ (id)_registrarInterface;
+ (void)_removeSubscriber:(id)arg1;
+ (id)_subscriberInterface;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned int)arg2;
+ (id)currentProgress;
+ (id)downloadProgressWithBRCLocalItem:(id)arg1;
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)progressWithBRCLocalItem:(id)arg1 totalSize:(long long)arg2;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned int)arg2;
+ (void)removeSubscriber:(id)arg1;
+ (id)sf_publishingKeyForApp:(id)arg1 sessionID:(id)arg2;
+ (id)sf_transferStateAsString:(int)arg1;
+ (id)uploadProgressWithBRCLocalItem:(id)arg1;

- (id)_LSDescription;
- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (id)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_addChild:(id)arg1 toGroup:(id)arg2 isPaused:(BOOL*)arg3 isCancelled:(BOOL*)arg4;
- (id)_indentedDescription:(unsigned int)arg1;
- (id)_initWithValues:(id)arg1;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)_publish;
- (id)_publishingAppBundleIdentifier;
- (void)_removeGroup:(id)arg1 fraction:(id)arg2 portion:(long long)arg3;
- (void)_setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_setGroup:(id)arg1;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueForKeys:(id)arg1 settingBlock:(id)arg2;
- (void)_unblockDisconnecting;
- (void)_unblockUnpublishing;
- (void)_unpublish;
- (void)_updateFractionCompletedFromOldFraction:(id)arg1 toNewFraction:(id)arg2;
- (void)_updateGroup:(id)arg1 oldFraction:(id)arg2 newFraction:(id)arg3 portion:(long long)arg4;
- (void)acknowledge;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (id)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)brc_publish;
- (void)brc_unpublish;
- (void)cancel;
- (id)cancellationHandler;
- (long long)completedUnitCount;
- (void)dealloc;
- (id)description;
- (double)fractionCompleted;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id)arg2;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id)arg2;
- (id)init;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned int)arg3;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (unsigned int)installPhase;
- (unsigned int)installState;
- (BOOL)isCancellable;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isIndeterminate;
- (BOOL)isOld;
- (BOOL)isPausable;
- (BOOL)isPaused;
- (BOOL)isPrioritizable;
- (id)kind;
- (id)localizedAdditionalDescription;
- (id)localizedDescription;
- (unsigned int)ownedDictionaryCount;
- (id)ownedDictionaryKeyEnumerator;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (void)pause;
- (id)pausingHandler;
- (id)prioritizationHandler;
- (oneway void)prioritize;
- (void)publish;
- (void)resignCurrent;
- (void)resume;
- (void)setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)setCancellable:(BOOL)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setInstallPhase:(unsigned int)arg1;
- (void)setInstallState:(unsigned int)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)setPausingHandler:(id)arg1;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setPrioritizationHandler:(id)arg1;
- (void)setSf_transferState:(int)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)sf_bundleID;
- (id)sf_error;
- (void)sf_failedWithError:(id)arg1;
- (id)sf_initWithAppBundle:(id)arg1 sessionID:(id)arg2 andPersonRealName:(id)arg3;
- (id)sf_initWithFileURL:(id)arg1;
- (id)sf_personRealName;
- (id)sf_publishingKey;
- (id)sf_sessionID;
- (int)sf_transferState;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)arg1;
- (oneway void)stopProvidingValues;
- (long long)totalUnitCount;
- (void)unpublish;
- (id)userInfo;

@end

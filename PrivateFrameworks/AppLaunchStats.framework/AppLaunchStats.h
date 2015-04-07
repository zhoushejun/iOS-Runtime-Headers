/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <AppLaunchStatsDelegate>, AppLaunchStatsAppWorkSpace, AppLaunchStatsDelayLaunch, AppLaunchStatsDiag, AppLaunchStatsLaunchQueue, AppLaunchStatsNetwork, AppLaunchStatsREventHandler, AppLaunchStatsSBMonitor, AppLaunchStatsSBSettings, AppLaunchStatsSaveAndRestore, AppLaunchStatsScheduler, AppLaunchStatsState, AppLaunchStatsStateHandlerQueue, BudgetPool, CDAttribute, CDBudget, CDSession, NSDate, NSDistributedNotificationCenter, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>, NSRunLoop, NSString;

@interface AppLaunchStats : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {
    int allowedMaxCount;
    AppLaunchStatsAppWorkSpace *aplsAppWorkSpace;
    AppLaunchStatsDelayLaunch *aplsDelayLaunch;
    AppLaunchStatsDiag *aplsDiag;
    AppLaunchStatsLaunchQueue *aplsLaunchQueue;
    AppLaunchStatsNetwork *aplsNetworkMeter;
    int aplsNotifyToken;
    AppLaunchStatsREventHandler *aplsREventHandler;
    NSRunLoop *aplsRunLoop;
    AppLaunchStatsSBMonitor *aplsSBMonitor;
    AppLaunchStatsSBSettings *aplsSBSettings;
    AppLaunchStatsSaveAndRestore *aplsSaveAndRestore;
    AppLaunchStatsScheduler *aplsScheduler;
    AppLaunchStatsState *aplsState;
    AppLaunchStatsStateHandlerQueue *aplsStateHandlerQueue;
    NSObject<OS_dispatch_queue> *appLaunchStatDQueue;
    NSObject<OS_dispatch_queue> *appLaunchStatPushQueue;
    NSNumber *batteryCapacity;
    NSObject<OS_dispatch_queue> *budgetQueue;
    CDSession *budget_session;
    bool budgetsInitialized;
    CDAttribute *bundleIdAttribute;
    int classCLockedToken;
    int configToken;
    NSObject<OS_xpc_object> *conn;
    CDBudget *dataBudget;
    <AppLaunchStatsDelegate> *delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    bool disableAllDueToSleep;
    bool disableFetch;
    bool disableHighPriorityPush;
    bool disableLowPriorityPush;
    bool disableTrending;
    int displayStateToken;
    NSDistributedNotificationCenter *distNotCenter;
    bool enableCoreDuet;
    CDBudget *energyBudget;
    int externalTrigToken;
    int externaltriggerType;
    NSString *fakeBundleID;
    bool isAppForecastUpdating;
    bool isClassCLocked;
    bool isDataBudgetUpdating;
    bool isInternalInstall;
    bool isNoprewarmUpdating;
    bool isPowerBudgetsUpdating;
    NSDate *lastDateOfAliveList;
    NSDate *lastExternalTrigTime;
    bool lastFetchWasTooLongAgo;
    int lockStateToken;
    long long lowPriorityStartTime;
    int messageStatusAPSD;
    NSMutableDictionary *meterTokenTracker;
    NSDate *oneHourBudgetReset;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id pendingHandler;

    NSDate *periodicTimeTracker;
    int pluggedInToken;
    unsigned char prefUIKitFakeSwitch;
    int pushListToken;
    int pushToken;
    int pushTokenLST;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id recommendHandler;

    int resourceStatus;
    int semaphoreSigToken;
    CDSession *session;
    NSObject<OS_dispatch_source> *theTimer;
    NSDate *timeOfLastFetch;
    NSMutableDictionary *topicAbleList;
    BudgetPool *topicLimiter;
    CDSession *topicSession;
    int trendToken;
    int trendTokenLST;
    int whiteListAppToken;
}

@property(readonly) AppLaunchStatsState * aplsState;
@property(readonly) NSObject<OS_dispatch_queue> * appLaunchStatDQueue;
@property(readonly) NSObject<OS_xpc_object> * conn;
@property(readonly) id pendingHandler;

- (void).cxx_destruct;
- (void)ableAdmissionForTopic:(id)arg1 attribute:(id)arg2 value:(id)arg3 withHandler:(id)arg4;
- (void)aplsSBMonitorEvent:(int)arg1 withBundleID:(id)arg2;
- (id)aplsState;
- (void)appActivityForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 appFilter:(id)arg4 completionHandler:(id)arg5;
- (id)appLaunchStatDQueue;
- (int)bundlePredictionZone:(id)arg1 launchzone:(int)arg2 top:(int)arg3 filter:(bool)arg4;
- (void)carryDailyBudget:(id)arg1 completionHandler:(id)arg2;
- (void)checkWifiChargerConnected;
- (id)conn;
- (id)convertTopicIDtoBundleID:(id)arg1;
- (void)dataForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 completionHandler:(id)arg4;
- (void)dealloc;
- (id)defaultsDomainReadString:(id)arg1;
- (void)deleteAllEntriesInDB;
- (id)doConvertTopicString:(id)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withSubStringIndex:(unsigned int)arg3;
- (void)energyForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 completionHandler:(id)arg4;
- (bool)hasOpportunisticFetchFeature:(id)arg1;
- (bool)hasOpportunisticFetchFeatureWithType:(id)arg1 withFetch:(int)arg2;
- (id)init;
- (void)initAfterClassCUnlocked;
- (void)initAfterClassCUnlockedForClient;
- (void)initBudgets;
- (void)initChargeStatusMonitoring;
- (void)initRegisterNotifications;
- (void)initSharedNotification;
- (bool)isSpringBoardInstance;
- (void)launchExternalTriggers:(unsigned long long)arg1;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)modifyPoolValue:(id)arg1 number:(long long)arg2;
- (void)okToLaunchMessageFor:(id)arg1 forReasons:(id)arg2 withHandler:(id)arg3;
- (void)okToPassPushMessageForTopic:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
- (void)onTick;
- (id)pendingHandler;
- (void)preWarmHasEnded:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)preWarmHasStarted:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)readPool:(id)arg1;
- (void)receiveConnectedStateNotification:(unsigned long long)arg1;
- (void)receiveIncomingLowPriorityPushList:(unsigned long long)arg1;
- (void)receiveIncomingLowPriorityPushRequestForReservationStation:(id)arg1;
- (void)registerAppForTrending:(id)arg1;
- (void)reloadConfiguration;
- (void)removeAppFromLST:(id)arg1;
- (void)replaceTimeSlot:(id)arg1;
- (void)resetBudgetPool;
- (void)resetBudgetPoolClient;
- (void)restore:(id)arg1;
- (void)retrieveAppScoresWithHandler:(id)arg1;
- (void)retrieveAppScoresWithQueryHandler:(id)arg1;
- (void)runPCtimerHeartBeat:(bool)arg1;
- (void)save:(id)arg1;
- (void)sendLSTxtqueriesWithMask:(unsigned long long)arg1;
- (void)setAppLaunchRecommendationHandler:(id)arg1;
- (void)setAppLaunchStatsDelegate:(id)arg1 queue:(id)arg2;
- (void)setAppLaunchStatsPendingDelegate:(id)arg1 queue:(id)arg2;
- (void)setAppLaunchStatsPendingHandler:(id)arg1 queue:(id)arg2;
- (void)setDelayLaunchFor:(id)arg1 with:(double)arg2;
- (void)setPendingWorkQueue:(id)arg1;
- (void)setup_lstconnection;
- (void)testAndReleaseBlueList;
- (void)testDatabaseAge:(id)arg1;
- (void)testOneHourBudgetExpirytime;
- (void)trendQueryLaunchApp:(id)arg1;
- (void)triggerLaunchQueue:(id)arg1;
- (void)updateAliveList;
- (void)updateDailyAppForecast;
- (void)updateDailyDataBudget;
- (void)updateDailyOutOfBandForecast;
- (void)updateDailyPowerBudgets;
- (void)updatePowerBudgetPool;
- (void)updateResourceAvailability;
- (void)updateStateFromExternalNotification:(unsigned long long)arg1;
- (void)updateTrendingBehavior:(unsigned long long)arg1 withBundleID:(id)arg2;
- (void)whatToLaunch:(id)arg1;

@end

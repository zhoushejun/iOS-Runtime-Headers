/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CDAttribute, CDBudget, CDDHistoryWindow, CDSession, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, PCPersistentTimer;

@interface NCLaunchStats : NSObject {
    NSArray *activitySlots;
    CDDHistoryWindow *allTimeWindow;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id asyncRecommendHandler;

    bool backgroundAppRefreshSwitchedOn;
    CDAttribute *bundleAttr;
    int classCLockedToken;
    CDBudget *dataBudget;
    CDBudget *energyBudget;
    NSMutableArray *fireDates;
    NSDate *fireWakeupDate;
    NSArray *forecastList;
    NSDate *forecastStartDate;
    bool isClassCLocked;
    bool kEnableSyslog;
    unsigned int kTimeGuardBand;
    NSDate *lastTriggerTime;
    NSObject<OS_dispatch_queue> *ncLaunchStatsQueue;
    PCPersistentTimer *pcpTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id recommendHandler;

    NSMutableDictionary *seqTracker;
    CDSession *sessionDuet;
    NSDate *startDate;
    int timeZoneSecondsFromGMT;
    CDAttribute *userEventAttr;
}

- (void).cxx_destruct;
- (void)checkTimeZone;
- (void)complete:(id)arg1;
- (void)computeFireDateQueue;
- (void)dealloc;
- (void)endEvent:(id)arg1;
- (id)init;
- (void)initAfterClassCUnlocked;
- (BOOL)isForecasted:(id)arg1;
- (void)ncTriggerObserver:(id)arg1;
- (void)preWarmHasEnded:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)preWarmHasStarted:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)programTimer;
- (void)setNCLaunchRecommendationHandler:(id)arg1;
- (void)setNCLaunchRecommendationHandlerWithCompletion:(id)arg1;
- (void)startEvent:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)updateBARSwitch;

@end

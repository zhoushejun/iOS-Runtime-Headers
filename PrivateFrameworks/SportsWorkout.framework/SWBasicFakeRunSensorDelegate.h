/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSString, NSTimer;

@interface SWBasicFakeRunSensorDelegate : NSObject <SWFakeRunSensorDelegate> {
    BOOL _firstPacketDelivered;
    NSTimer *_packetTimer;
    unsigned char _payload[28];
    struct SDARunState { 
        unsigned int sdaContactTime256X; 
        unsigned int sdaContactTimeDelta256X; 
        unsigned int sdaRunStepCnt; 
        unsigned int sdaRunStepCntDelta; 
        unsigned int sdaRunTstcCnt; 
        unsigned int sdaRunTstcCntDelta; 
        unsigned int sdaRunContactTimeMin256X; 
        unsigned int sdaRunContactTimeMax256X; 
    } _runState;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_fakeNextPacketForTimer:(id)arg1;
- (void)_schedulePacketTimerForFakeSensor:(id)arg1;
- (void)_updatePayload;
- (void)beginLinkingForFakeSensor:(id)arg1;
- (void)beginSearchingForFakeSensor:(id)arg1;
- (void)cancelLinkingForFakeSensor:(id)arg1;
- (void)cancelSearchingForFakeSensor:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)remainingBatteryLifetimeInHoursForFakeSensor:(id)arg1;

@end

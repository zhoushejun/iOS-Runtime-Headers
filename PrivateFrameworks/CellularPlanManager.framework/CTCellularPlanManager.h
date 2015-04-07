/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@class NSData, NSMutableArray, NSString, NSXPCConnection;

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate> {
    NSXPCConnection *_connection;
    NSData *_cookieData;
    NSString *_lastSessionId;
    struct dispatch_queue_s { } *_queue;
    NSMutableArray *_subscriptionCompletions;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedManager;

- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_plansForRenewal:(BOOL)arg1 progress:(id)arg2 completion:(id)arg3 latitude:(id)arg4 longitude:(id)arg5;
- (void)_reconnect;
- (void)_subscriptionDetailsWithCompletion:(id)arg1 updateIfNeeded:(BOOL)arg2;
- (void)connectionSettings:(id)arg1;
- (void)dealloc;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2;
- (void)getCurrentPlanType:(id)arg1;
- (void)getDeviceInfo:(id)arg1;
- (void)getIMEIPrefix:(id)arg1;
- (void)getSelectedEnv:(id)arg1;
- (void)getSelectedProxy:(id)arg1;
- (id)init;
- (void)isNewDataPlanCapable:(id)arg1;
- (void)openInternalUrlId:(int)arg1;
- (void)plansForRenewalWithCompletion:(id)arg1;
- (void)plansForRenewalWithProgress:(id)arg1 andCompletion:(id)arg2;
- (void)plansWithCompletion:(id)arg1;
- (void)plansWithCompletion:(id)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (void)plansWithProgress:(id)arg1 andCompletion:(id)arg2;
- (void)setActivePlan:(id)arg1 completion:(id)arg2;
- (void)setIMEIPrefix:(id)arg1;
- (void)setSelectedEnv:(int)arg1;
- (void)setSelectedProxy:(int)arg1;
- (void)setUserInPurchaseFlow:(BOOL)arg1;
- (void)subscriptionDetailsDidUpdate:(id)arg1;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (void)subscriptionDetailsRequestDidFail:(id)arg1;
- (void)subscriptionDetailsWithCompletion:(id)arg1;

@end

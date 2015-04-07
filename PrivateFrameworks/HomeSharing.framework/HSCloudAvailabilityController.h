/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSObject<OS_dispatch_queue>, NSString, RadiosPreferences;

@interface HSCloudAvailabilityController : NSObject <HSCloudAvailability, RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _canShowCloudDownloadButtons;
    BOOL _canShowCloudMusic;
    BOOL _canShowCloudVideo;
    BOOL _isAirplaneModeActive;
    BOOL _isAutoDownloadOnCellularAllowed;
    BOOL _isCellularDataActive;
    BOOL _isNetworkReachable;
    BOOL _isShowingAllMusic;
    BOOL _isShowingAllVideo;
    BOOL _isUpdateInProgress;
    BOOL _isWiFiEnabled;
    int _networkType;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    RadiosPreferences *_radiosPreferences;
    struct __SCNetworkReachability { } *reachabilityRef;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (void)_handleTelephonyNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (BOOL)_hasCellularCapability;
- (BOOL)_hasWiFiCapability;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)arg1;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)arg1;
- (void)_setNewIsNetworkReachable:(BOOL)arg1;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (BOOL)_uncachedIsShowingAllMusic;
- (BOOL)_uncachedIsShowingAllVideo;
- (void)_wifiEnabledDidChangeNotification:(id)arg1;
- (void)airplaneModeChanged;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudVideo;
- (void)dealloc;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (id)init;
- (BOOL)isCellularDataRestricted;
- (BOOL)isNetworkReachable;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;

@end

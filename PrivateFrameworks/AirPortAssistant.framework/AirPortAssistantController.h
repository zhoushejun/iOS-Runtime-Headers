/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <AirPortAssistantControllerDelegate>, NSDictionary, NSString;

@interface AirPortAssistantController : NSObject {
    NSString *_configuredSSID;
    id _context;
    id _delegate;
    NSDictionary *_unconfiguredWACDevices;
    id _viewController;
}

@property(retain) NSString * configuredSSID;
@property(retain) id context;
@property <AirPortAssistantControllerDelegate> * delegate;
@property(retain) NSDictionary * unconfiguredWACDevices;
@property(retain) id viewController;

+ (id)assistantUIViewControllerWithParameters:(id)arg1;
+ (void)cancelAirPortAssistantController;
+ (void)downloadAssetsCancel;
+ (void)downloadAssetsIfNeeded;
+ (BOOL)isAirPlayDevice:(id)arg1;
+ (BOOL)isGenericMFiAccessory:(id)arg1;
+ (BOOL)isSTAOnlyDevice:(id)arg1;
+ (BOOL)isUnconfiguredDevice:(id)arg1;
+ (BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3;
+ (BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3 viewController:(id)arg4;
+ (id)sharedInstance;
+ (id)unconfiguredDeviceName:(id)arg1;
+ (id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2;

- (id)WACDeviceFromScanInfo:(id)arg1;
- (void)assistantCompleteWithResult:(long)arg1;
- (long)configureUIViewControllerWithParameters:(id)arg1;
- (id)configuredSSID;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)setConfiguredSSID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUnconfiguredWACDevices:(id)arg1;
- (void)setViewController:(id)arg1;
- (long)start2_4WiFiScan;
- (void)stop2_4WiFiScan;
- (id)unconfiguredWACDevices;
- (void)updateWACListeners;
- (id)viewController;
- (void)wirelessScanDone:(id)arg1;

@end

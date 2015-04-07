/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary;

@interface UIStatusBarServerThread : NSThread {
    NSMutableArray *_clientPorts;
    struct { 
        BOOL itemIsEnabled[25]; 
        BOOL timeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
    } _composedStatusBarData;
    BOOL _composedStatusBarDataValid;
    struct __CFDictionary { } *_doubleHeightStatusStrings;
    NSMutableDictionary *_glowAnimationEndTimes;
    struct __CFDictionary { } *_glowAnimationStates;
    struct { 
        BOOL overrideItemIsEnabled[25]; 
        unsigned int overrideTimeString : 1; 
        unsigned int overrideGsmSignalStrengthRaw : 1; 
        unsigned int overrideGsmSignalStrengthBars : 1; 
        unsigned int overrideServiceString : 1; 
        unsigned int overrideServiceImages : 2; 
        unsigned int overrideOperatorDirectory : 1; 
        unsigned int overrideServiceContentType : 1; 
        unsigned int overrideWifiSignalStrengthRaw : 1; 
        unsigned int overrideWifiSignalStrengthBars : 1; 
        unsigned int overrideDataNetworkType : 1; 
        unsigned int disallowsCellularDataNetworkTypes : 1; 
        unsigned int overrideBatteryCapacity : 1; 
        unsigned int overrideBatteryState : 1; 
        unsigned int overrideBatteryDetailString : 1; 
        unsigned int overrideBluetoothBatteryCapacity : 1; 
        unsigned int overrideThermalColor : 1; 
        unsigned int overrideSlowActivity : 1; 
        unsigned int overrideActivityDisplayId : 1; 
        unsigned int overrideBluetoothConnected : 1; 
        unsigned int overrideDisplayRawGSMSignal : 1; 
        unsigned int overrideDisplayRawWifiSignal : 1; 
        struct { 
            BOOL itemIsEnabled[25]; 
            BOOL timeString[64]; 
            int gsmSignalStrengthRaw; 
            int gsmSignalStrengthBars; 
            BOOL serviceString[100]; 
            BOOL serviceCrossfadeString[100]; 
            BOOL serviceImages[2][100]; 
            BOOL operatorDirectory[1024]; 
            unsigned int serviceContentType; 
            int wifiSignalStrengthRaw; 
            int wifiSignalStrengthBars; 
            unsigned int dataNetworkType; 
            int batteryCapacity; 
            unsigned int batteryState; 
            BOOL batteryDetailString[150]; 
            int bluetoothBatteryCapacity; 
            int thermalColor; 
            unsigned int thermalSunlightMode : 1; 
            unsigned int slowActivity : 1; 
            unsigned int syncActivity : 1; 
            BOOL activityDisplayId[256]; 
            unsigned int bluetoothConnected : 1; 
            unsigned int displayRawGSMSignal : 1; 
            unsigned int displayRawWifiSignal : 1; 
            unsigned int locationIconType : 1; 
            unsigned int quietModeInactive : 1; 
            unsigned int tetheringConnectionCount; 
        } values; 
    } _overrides;
    NSMutableArray *_publishers;
    struct { 
        BOOL itemIsEnabled[25]; 
        BOOL timeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
    } _statusBarData;
}

- (void)_addClient:(unsigned int)arg1;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_broadcastStatusBarDataWithActions:(int)arg1;
- (void)_broadcastStyleOverrides;
- (id)_doubleHeightStatusStringForStyle:(int)arg1;
- (double)_glowAnimationEndTimeForStyle:(int)arg1;
- (BOOL)_glowAnimationStateForStyle:(int)arg1;
- (BOOL)_permanentizeStatusBarOverrideData;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(int)arg2;
- (void)_postGlowAnimationState:(BOOL)arg1 forStyle:(int)arg2;
- (void)_postStatusBarData:(struct { BOOL x1[25]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)arg1 actions:(int)arg2;
- (void)_postStatusBarOverrideData:(struct { BOOL x1[25]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { BOOL x_23_1_1[25]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; unsigned int x_23_1_26 : 1; unsigned int x_23_1_27; } x23; }*)arg1;
- (id)_publisherForPort:(unsigned int)arg1;
- (void)_removeAnimationEndTimesForOverrides:(int)arg1;
- (void)_removeClient:(struct __CFMachPort { }*)arg1;
- (void)_removePublisher:(struct __CFMachPort { }*)arg1;
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_setAnimationEndTimesForOverrides:(int)arg1;
- (struct { BOOL x1[25]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)_statusBarData;
- (struct { BOOL x1[25]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { BOOL x_23_1_1[25]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; unsigned int x_23_1_26 : 1; unsigned int x_23_1_27; } x23; }*)_statusBarOverrideData;
- (int)_styleOverrides;
- (void)main;

@end

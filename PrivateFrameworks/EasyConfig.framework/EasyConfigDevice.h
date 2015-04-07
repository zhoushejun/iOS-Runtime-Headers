/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface EasyConfigDevice : NSObject <NSCopying> {
    NSDictionary *_airplayBonjourInfo;
    struct BonjourBrowser { } *_airplayBrowser;
    double _applyConfigFinishTime;
    double _applyConfigStartTime;
    NSDictionary *_configResponse;
    unsigned int _configSeed;
    double _configStartTime;
    NSDictionary *_configuration;
    unsigned long long _deviceIdentifier;
    unsigned long long _features;
    double _findPostConfigFoundTime;
    double _findPostConfigStartTime;
    double _findPreConfigFoundTime;
    double _findPreConfigStartTime;
    long _firstErr;
    NSDictionary *_hapBonjourInfo;
    struct BonjourBrowser { } *_hapBrowser;
    struct HTTPClientPrivate { } *_httpClient;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_mfiConfigBonjourInfo;
    struct BonjourBrowser { } *_mfiConfigBrowser;
    struct MFiSAP { } *_mfiSAP;
    NSString *_model;
    NSString *_name;
    struct PairingSessionPrivate { } *_pairingSession;
    BOOL _pausesAfterApply;
    double _postConfigCheckFinishTime;
    double _postConfigCheckStartTime;
    struct { 
        double secondsToGetLinkUpOnDestination; 
        int wifiJoinDestinationAPError; 
        unsigned char destinationNetworkPSKInKeychain; 
        unsigned char hitJoiningDestinationAPTimeout; 
        int rssiOfDestinationAP; 
        unsigned int snrOfDestinationAP; 
        unsigned int channelOfDestinationAP; 
    } _postConfigMetrics;
    BOOL _postConfigMetricsSet;
    struct { 
        double startTime; 
        unsigned char userChangedFriendlyName; 
        unsigned char playPasswordSet; 
        unsigned char adminPasswordSet; 
        unsigned char destinationNetworkRecommendationUsed; 
        double secondsToGetLinkUpOnSWAP; 
        int wifiJoinSWAPError; 
        unsigned char hitJoiningTargetSWAPTimeout; 
        int rssiOfSWAP; 
        unsigned int snrOfSWAP; 
        unsigned int channelOfSWAP; 
    } _preConfigMetrics;
    BOOL _preConfigMetricsSet;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _promptForSetupCodeBlock;

    NSDictionary *_raopBonjourInfo;
    struct BonjourBrowser { } *_raopBrowser;
    NSDictionary *_scanRecord;
    double _securityFinishTime;
    double _securityStartTime;
    BOOL _started;
    int _state;
    BOOL _supportsHAP;
    BOOL _supportsMFi;
    BOOL _supportsTLV;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_userQueue;
}

@property(copy) NSDictionary * configuration;
@property unsigned long long deviceIdentifier;
@property(retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property unsigned long long features;
@property(copy) NSString * model;
@property(copy) NSString * name;
@property BOOL pausesAfterApply;

+ (id)deviceWithScanRecord:(id)arg1;
+ (BOOL)supportedScanRecord:(id)arg1;

- (void)_applyConfigCompletion:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned int x_3_1_2; char *x_3_1_3; unsigned int x_3_1_4; char *x_3_1_5; unsigned int x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned int x_3_1_9; struct { char *x_10_2_1; unsigned int x_10_2_2; char *x_10_2_3; unsigned int x_10_2_4; char *x_10_2_5; unsigned int x_10_2_6; char *x_10_2_7; unsigned int x_10_2_8; char *x_10_2_9; unsigned int x_10_2_10; char *x_10_2_11; unsigned int x_10_2_12; char *x_10_2_13; unsigned int x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned int x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned int x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; char *x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned char x11[32000]; char *x12; struct iovec { void *x_13_1_1; unsigned int x_13_1_2; } x13[2]; struct iovec {} *x14; int x15; unsigned long long x16; int x17; int x18; int x19; void *x20; void *x21; void *x22; void *x23; void *x24; void *x25; int (*x26)(); id x27; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x28; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{HTTPMessagePrivate={__CFRuntimeBase=I[4C]}^{HTTPMessagePrivate}{?=[8192c]I*I*Ii*I{?=*I*I*I*I*I*I*I**}*Ii*ICQCi}CiC*III[32000C]*[2{iovec=^vI}]^{iovec}iQiii^v^v^v^v^v^v^?@?}8 */

- (long)_applyConfigStart;
- (long)_configureStart:(id)arg1;
- (void)_findDevicePostConfigEvent:(unsigned int)arg1 info:(id)arg2;
- (long)_findDevicePostConfigStart;
- (void)_findDevicePreConfigEvent:(unsigned int)arg1 info:(id)arg2;
- (long)_findDevicePreConfigStart;
- (void)_handleError:(long)arg1;
- (void)_logEnded;
- (long)_mfiSAPNext:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned int x_3_1_2; char *x_3_1_3; unsigned int x_3_1_4; char *x_3_1_5; unsigned int x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned int x_3_1_9; struct { char *x_10_2_1; unsigned int x_10_2_2; char *x_10_2_3; unsigned int x_10_2_4; char *x_10_2_5; unsigned int x_10_2_6; char *x_10_2_7; unsigned int x_10_2_8; char *x_10_2_9; unsigned int x_10_2_10; char *x_10_2_11; unsigned int x_10_2_12; char *x_10_2_13; unsigned int x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned int x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned int x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; char *x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned char x11[32000]; char *x12; struct iovec { void *x_13_1_1; unsigned int x_13_1_2; } x13[2]; struct iovec {} *x14; int x15; unsigned long long x16; int x17; int x18; int x19; void *x20; void *x21; void *x22; void *x23; void *x24; void *x25; int (*x26)(); id x27; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x28; }*)arg1;
     /* Encoded args for previous method: l12@0:4^{HTTPMessagePrivate={__CFRuntimeBase=I[4C]}^{HTTPMessagePrivate}{?=[8192c]I*I*Ii*I{?=*I*I*I*I*I*I*I**}*Ii*ICQCi}CiC*III[32000C]*[2{iovec=^vI}]^{iovec}iQiii^v^v^v^v^v^v^?@?}8 */

- (long)_mfiSAPStart;
- (long)_pairSetupNext:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned int x_3_1_2; char *x_3_1_3; unsigned int x_3_1_4; char *x_3_1_5; unsigned int x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned int x_3_1_9; struct { char *x_10_2_1; unsigned int x_10_2_2; char *x_10_2_3; unsigned int x_10_2_4; char *x_10_2_5; unsigned int x_10_2_6; char *x_10_2_7; unsigned int x_10_2_8; char *x_10_2_9; unsigned int x_10_2_10; char *x_10_2_11; unsigned int x_10_2_12; char *x_10_2_13; unsigned int x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned int x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned int x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; char *x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned char x11[32000]; char *x12; struct iovec { void *x_13_1_1; unsigned int x_13_1_2; } x13[2]; struct iovec {} *x14; int x15; unsigned long long x16; int x17; int x18; int x19; void *x20; void *x21; void *x22; void *x23; void *x24; void *x25; int (*x26)(); id x27; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x28; }*)arg1;
     /* Encoded args for previous method: l12@0:4^{HTTPMessagePrivate={__CFRuntimeBase=I[4C]}^{HTTPMessagePrivate}{?=[8192c]I*I*Ii*I{?=*I*I*I*I*I*I*I**}*Ii*ICQCi}CiC*III[32000C]*[2{iovec=^vI}]^{iovec}iQiii^v^v^v^v^v^v^?@?}8 */

- (long)_pairSetupStart;
- (long)_pairVerifyNext:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned int x_3_1_2; char *x_3_1_3; unsigned int x_3_1_4; char *x_3_1_5; unsigned int x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned int x_3_1_9; struct { char *x_10_2_1; unsigned int x_10_2_2; char *x_10_2_3; unsigned int x_10_2_4; char *x_10_2_5; unsigned int x_10_2_6; char *x_10_2_7; unsigned int x_10_2_8; char *x_10_2_9; unsigned int x_10_2_10; char *x_10_2_11; unsigned int x_10_2_12; char *x_10_2_13; unsigned int x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned int x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned int x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; char *x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned char x11[32000]; char *x12; struct iovec { void *x_13_1_1; unsigned int x_13_1_2; } x13[2]; struct iovec {} *x14; int x15; unsigned long long x16; int x17; int x18; int x19; void *x20; void *x21; void *x22; void *x23; void *x24; void *x25; int (*x26)(); id x27; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x28; }*)arg1;
     /* Encoded args for previous method: l12@0:4^{HTTPMessagePrivate={__CFRuntimeBase=I[4C]}^{HTTPMessagePrivate}{?=[8192c]I*I*Ii*I{?=*I*I*I*I*I*I*I**}*Ii*ICQCi}CiC*III[32000C]*[2{iovec=^vI}]^{iovec}iQiii^v^v^v^v^v^v^?@?}8 */

- (long)_pairVerifyStart;
- (void)_postConfigCheckCompletion:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned int x_3_1_2; char *x_3_1_3; unsigned int x_3_1_4; char *x_3_1_5; unsigned int x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned int x_3_1_9; struct { char *x_10_2_1; unsigned int x_10_2_2; char *x_10_2_3; unsigned int x_10_2_4; char *x_10_2_5; unsigned int x_10_2_6; char *x_10_2_7; unsigned int x_10_2_8; char *x_10_2_9; unsigned int x_10_2_10; char *x_10_2_11; unsigned int x_10_2_12; char *x_10_2_13; unsigned int x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned int x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned int x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; char *x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned char x11[32000]; char *x12; struct iovec { void *x_13_1_1; unsigned int x_13_1_2; } x13[2]; struct iovec {} *x14; int x15; unsigned long long x16; int x17; int x18; int x19; void *x20; void *x21; void *x22; void *x23; void *x24; void *x25; int (*x26)(); id x27; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x28; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{HTTPMessagePrivate={__CFRuntimeBase=I[4C]}^{HTTPMessagePrivate}{?=[8192c]I*I*Ii*I{?=*I*I*I*I*I*I*I**}*Ii*ICQCi}CiC*III[32000C]*[2{iovec=^vI}]^{iovec}iQiii^v^v^v^v^v^v^?@?}8 */

- (void)_postConfigCheckStart:(id)arg1;
- (void)_postNote:(id)arg1 info:(id)arg2;
- (void)_postProgress:(int)arg1;
- (void)_postProgress:(int)arg1 withResponse:(id)arg2;
- (long)_setupClient:(id)arg1;
- (void)_start;
- (long)_startBonjourWithTimeout:(int)arg1 handler:(id)arg2;
- (void)_stop:(long)arg1;
- (long)_timeoutTimerStart:(unsigned int)arg1 block:(id)arg2;
- (void)_trySetupCode:(id)arg1;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)deviceIdentifier;
- (id)dispatchQueue;
- (unsigned long long)features;
- (id)init;
- (id)model;
- (id)name;
- (BOOL)pausesAfterApply;
- (BOOL)removed:(id)arg1;
- (void)resumePostConfig;
- (void)setConfiguration:(id)arg1;
- (void)setDeviceIdentifier:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFeatures:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPausesAfterApply:(BOOL)arg1;
- (void)setPostConfigMetrics:(const struct { double x1; int x2; unsigned char x3; unsigned char x4; int x5; unsigned int x6; unsigned int x7; }*)arg1;
- (void)setPreConfigMetrics:(const struct { double x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; double x6; int x7; unsigned char x8; int x9; unsigned int x10; unsigned int x11; }*)arg1;
- (void)setPromptForSetupCodeHandler:(id)arg1;
- (void)start;
- (void)stop;
- (void)trySetupCode:(id)arg1;
- (BOOL)updated:(id)arg1;

@end

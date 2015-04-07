/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class <ATAssetLinkDelegate>, <ATRestoreAssetLinkDelegate>, ATAsset, MBManager, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface ATRestoreAssetLink : NSObject <ATAssetLink, ATEnvironmentMonitorObserver, MBManagerDelegate> {
    ATAsset *_activeAsset;
    NSArray *_allowedDataClasses;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    <ATAssetLinkDelegate> *_delegate;
    BOOL _didEnqueueAsset;
    MBManager *_mbManager;
    BOOL _open;
    NSObject<OS_dispatch_queue> *_queue;
    <ATRestoreAssetLinkDelegate> *_restoreDelegate;
    int _restoreState;
}

@property(copy) NSArray * allowedDataClasses;
@property(copy,readonly) NSString * debugDescription;
@property <ATAssetLinkDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=isOpen,readonly) BOOL open;
@property <ATRestoreAssetLinkDelegate> * restoreDelegate;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_atErrorFromMBError:(id)arg1;
- (void)_enqueueAsset:(id)arg1;
- (id)allowedDataClasses;
- (BOOL)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)finishRestore;
- (id)init;
- (BOOL)isOpen;
- (BOOL)linkIsReady;
- (void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
- (void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned int)arg3;
- (void)managerDidCancelRestore:(id)arg1;
- (void)managerDidFinishRestore:(id)arg1;
- (void)managerDidLoseConnectionToService:(id)arg1;
- (unsigned int)maximumBatchSize;
- (BOOL)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned int)priority;
- (void)processRestoreFailureForAsset:(id)arg1;
- (id)restoreDelegate;
- (BOOL)restoreSessionActive;
- (void)setAllowedDataClasses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRestoreDelegate:(id)arg1;

@end

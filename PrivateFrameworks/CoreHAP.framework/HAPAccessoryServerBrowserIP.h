/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@class <HAPAccessoryServerBrowserDelegate>, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser {
    struct BonjourBrowser { } *_bonjourBrowser;
    <HAPAccessoryServerBrowserDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_discoveredAccessoryServers;
}

@property <HAPAccessoryServerBrowserDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * delegateQueue;
@property(retain) NSMutableSet * discoveredAccessoryServers;

- (void).cxx_destruct;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (long)_initializeAndStartBonjourBrowser;
- (void)_invalidateUnpairedAccessoryServers;
- (long)_server:(id*)arg1 forBonjourDevice:(id)arg2;
- (id)delegate;
- (id)delegateQueue;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)discoveredAccessoryServers;
- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiscoveredAccessoryServers:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;

@end

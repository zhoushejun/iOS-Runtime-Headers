/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <AFSiriTaskDelivering>, AFSiriRequest, AFWatchdogTimer, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deliveryHandler;

    NSObject<OS_dispatch_queue> *_queue;
    AFSiriRequest *_request;
    int _state;
    <AFSiriTaskDelivering> *_taskDeliverer;
    NSXPCListener *_taskResponseListener;
    AFWatchdogTimer *_taskResponseWatchdogTimer;
    NSXPCListener *_usageResultListener;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (void)_completeWithResponse:(id)arg1;
- (void)_completeWithResponse:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2;
- (void)handleSiriResponse:(id)arg1;
- (id)initWithRequest:(id)arg1 taskDeliverer:(id)arg2 usageResultListener:(id)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setCompletionHandler:(id)arg1;
- (void)setDeliveryHandler:(id)arg1;
- (void)start;

@end

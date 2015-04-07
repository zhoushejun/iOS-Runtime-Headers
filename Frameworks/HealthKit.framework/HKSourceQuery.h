/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface HKSourceQuery : HKQuery {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateHandler;

}

@property(readonly) id completionHandler;
@property(copy) id updateHandler;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id)_queue_errorHandler;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (id)completionHandler;
- (void)deliverSources:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(id)arg3;
- (void)setUpdateHandler:(id)arg1;
- (id)updateHandler;

@end

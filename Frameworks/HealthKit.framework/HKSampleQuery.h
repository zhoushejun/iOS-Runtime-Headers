/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray;

@interface HKSampleQuery : HKQuery {
    unsigned int _limit;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resultHandler;

    NSMutableArray *_results;
    NSArray *_sortDescriptors;
}

@property(readonly) unsigned int limit;
@property(readonly) id resultHandler;
@property(copy,readonly) NSArray * sortDescriptors;

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id)_queue_errorHandler;
- (void)_queue_validate;
- (void)deliverResultsBatch:(id)arg1 final:(BOOL)arg2 error:(id)arg3 forQuery:(id)arg4;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 sortDescriptors:(id)arg4 resultsHandler:(id)arg5;
- (unsigned int)limit;
- (id)resultHandler;
- (id)sortDescriptors;

@end

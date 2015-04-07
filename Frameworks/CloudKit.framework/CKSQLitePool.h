/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface CKSQLitePool : NSObject {
    NSMutableArray *_dbs;
    BOOL _drainScheduled;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _factory;

    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSMutableArray * dbs;
@property BOOL drainScheduled;
@property(copy,readonly) id factory;
@property(retain) NSObject<OS_dispatch_queue> * queue;

- (void).cxx_destruct;
- (id)_acquireDatabaseWithError:(id*)arg1;
- (void)_closeDatabase:(id)arg1;
- (void)_drain;
- (id)_openDatabaseWithError:(id*)arg1;
- (void)_scheduleDrain;
- (id)acquireDatabase:(BOOL)arg1;
- (void)closeAll;
- (id)dbs;
- (BOOL)drainScheduled;
- (id)factory;
- (id)initWithFactory:(id)arg1;
- (void)performWithDatabase:(id)arg1;
- (BOOL)performWithDatabase:(id)arg1 error:(id*)arg2;
- (id)queue;
- (void)releaseDatabase:(id)arg1;
- (void)setDbs:(id)arg1;
- (void)setDrainScheduled:(BOOL)arg1;
- (void)setQueue:(id)arg1;

@end

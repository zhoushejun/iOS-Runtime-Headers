/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation {
    NSMutableArray *_deletedRecordZoneIDs;
    BOOL _markZonesAsUserPurged;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _modifyRecordZonesCompletionBlock;

    NSMutableDictionary *_recordZoneErrors;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneIDs;
    NSArray *_recordZonesToSave;
    NSMutableArray *_savedRecordZones;
}

@property(retain) NSMutableArray * deletedRecordZoneIDs;
@property BOOL markZonesAsUserPurged;
@property(copy) id modifyRecordZonesCompletionBlock;
@property(retain) NSMutableDictionary * recordZoneErrors;
@property(copy) NSArray * recordZoneIDsToDelete;
@property(retain) NSMutableDictionary * recordZonesByZoneIDs;
@property(copy) NSArray * recordZonesToSave;
@property(retain) NSMutableArray * savedRecordZones;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)deletedRecordZoneIDs;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (BOOL)markZonesAsUserPurged;
- (id)modifyRecordZonesCompletionBlock;
- (void)performCKOperation;
- (id)recordZoneErrors;
- (id)recordZoneIDsToDelete;
- (id)recordZonesByZoneIDs;
- (id)recordZonesToSave;
- (id)savedRecordZones;
- (void)setDeletedRecordZoneIDs:(id)arg1;
- (void)setMarkZonesAsUserPurged:(BOOL)arg1;
- (void)setModifyRecordZonesCompletionBlock:(id)arg1;
- (void)setRecordZoneErrors:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesByZoneIDs:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)setSavedRecordZones:(id)arg1;

@end

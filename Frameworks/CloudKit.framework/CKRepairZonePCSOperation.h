/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKRepairZonePCSOperation : CKDatabaseOperation {
    NSArray *_zoneIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _zoneRepairedBlock;

}

@property(retain) NSArray * zoneIDs;
@property(copy) id zoneRepairedBlock;

- (void).cxx_destruct;
- (void)_handleProgressCallback:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithZoneIDsToRepair:(id)arg1;
- (void)performCKOperation;
- (void)setZoneIDs:(id)arg1;
- (void)setZoneRepairedBlock:(id)arg1;
- (id)zoneIDs;
- (id)zoneRepairedBlock;

@end

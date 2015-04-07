/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKRecordID, NSDictionary, NSString;

@interface BRCDownloadRecordOperation : BRCMultiplexableOperation {
    NSDictionary *_desiredPackageFileIndices;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _downloadCompletionBlock;

    NSString *_etag;
    CKRecordID *_recordID;
}

@property(retain) NSDictionary * desiredPackageFileIndices;
@property(copy) id downloadCompletionBlock;
@property(retain) NSString * etag;
@property(retain) CKRecordID * recordID;

- (void).cxx_destruct;
- (id)desiredPackageFileIndices;
- (id)downloadCompletionBlock;
- (id)etag;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithDownloadContext:(id)arg1 desiredKeys:(id)arg2;
- (id)initWithMultiplexer:(id)arg1;
- (id)name;
- (id)recordID;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (void)setDownloadCompletionBlock:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setRecordID:(id)arg1;

@end

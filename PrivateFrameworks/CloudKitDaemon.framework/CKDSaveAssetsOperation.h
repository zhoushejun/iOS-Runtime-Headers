/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKDMMCSItemGroupSetContext, NSArray, NSMutableArray;

@interface CKDSaveAssetsOperation : CKDDatabaseOperation {
    CKDMMCSItemGroupSetContext *_MMCSContext;
    NSMutableArray *_assetsToRetry;
    NSArray *_assetsToSave;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

    BOOL _shouldAutomaticallyRetryNetworkErrors;
}

@property(retain) CKDMMCSItemGroupSetContext * MMCSContext;
@property(retain) NSMutableArray * assetsToRetry;
@property(retain) NSArray * assetsToSave;
@property(copy) id progressBlock;
@property BOOL shouldAutomaticallyRetryNetworkErrors;

+ (BOOL)_isTransientError:(id)arg1;

- (void).cxx_destruct;
- (id)MMCSContext;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)_getMMCSItemsFromItemsToSave;
- (void)_handleAuthTokensForPutRequest:(id)arg1 items:(id)arg2;
- (void)_handleError:(id)arg1 forAsset:(id)arg2;
- (void)_handleError:(id)arg1 forMMCSItems:(id)arg2;
- (void)_handleItemGroupSetRegistered:(id)arg1 items:(id)arg2;
- (void)_handleProgressForMMCSItem:(id)arg1;
- (void)_retryOrFinishWithError:(id)arg1;
- (void)_saveAssets;
- (BOOL)_shouldRetryError:(id)arg1;
- (id)assetsToRetry;
- (id)assetsToSave;
- (void)cancel;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToSave:(id)arg3;
- (void)main;
- (id)progressBlock;
- (void)setAssetsToRetry:(id)arg1;
- (void)setAssetsToSave:(id)arg1;
- (void)setMMCSContext:(id)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)setShouldAutomaticallyRetryNetworkErrors:(BOOL)arg1;
- (BOOL)shouldAutomaticallyRetryNetworkErrors;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDGetSharesURLRequest : CKDURLRequest {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareFetchedBlock;

    NSMutableDictionary *_shareIDByRequestID;
    NSArray *_shareIDsToFetch;
}

@property(copy) id shareFetchedBlock;
@property(retain) NSMutableDictionary * shareIDByRequestID;
@property(retain) NSArray * shareIDsToFetch;

- (void).cxx_destruct;
- (id)initWithShareIDs:(id)arg1;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setShareFetchedBlock:(id)arg1;
- (void)setShareIDByRequestID:(id)arg1;
- (void)setShareIDsToFetch:(id)arg1;
- (id)shareFetchedBlock;
- (id)shareIDByRequestID;
- (id)shareIDsToFetch;

@end

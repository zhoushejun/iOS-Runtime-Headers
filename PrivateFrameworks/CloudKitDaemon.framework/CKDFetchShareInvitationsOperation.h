/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKDFetchShareInvitationsOperation : CKDOperation {
    int _fetchType;
    BOOL _queryAllContainers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareInvitationFetchedProgressBlock;

    NSArray *_shareInvitations;
}

@property int fetchType;
@property BOOL queryAllContainers;
@property(copy) id shareInvitationFetchedProgressBlock;
@property(retain) NSArray * shareInvitations;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleShareInvitationFetched:(id)arg1 responseCode:(id)arg2;
- (int)fetchType;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)queryAllContainers;
- (void)setFetchType:(int)arg1;
- (void)setQueryAllContainers:(BOOL)arg1;
- (void)setShareInvitationFetchedProgressBlock:(id)arg1;
- (void)setShareInvitations:(id)arg1;
- (id)shareInvitationFetchedProgressBlock;
- (id)shareInvitations;

@end

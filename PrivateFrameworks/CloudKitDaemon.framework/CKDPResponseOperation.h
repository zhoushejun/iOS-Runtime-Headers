/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPAssetUploadTokenRetrieveResponse, CKDPDeleteCommentResponse, CKDPDeleteContainerResponse, CKDPGetCommentResponse, CKDPGetCommentsResponse, CKDPGetLikesResponse, CKDPInvitationAcceptResponse, CKDPInvitationDeclineResponse, CKDPInvitationQueryResponse, CKDPLikeResponse, CKDPMescalCertificateResponse, CKDPMescalSessionInfoResponse, CKDPMescalSignatureResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPOperation, CKDPPkiRegisterResponse, CKDPPkiRetrieveResponse, CKDPPostCommentResponse, CKDPPromoteContainerSchemaResponse, CKDPPulseResponse, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResetContainerResponse, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareCreateResponse, CKDPShareDeleteResponse, CKDPShareParticipantCreateResponse, CKDPShareParticipantDeleteResponse, CKDPShareParticipantUpdateResponse, CKDPShareRetrieveResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUnlikeResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

@interface CKDPResponseOperation : PBCodable <NSCopying> {
    CKDPAssetUploadTokenRetrieveResponse *_assetUploadTokenRetrieveResponse;
    CKDPDeleteCommentResponse *_deleteCommentResponse;
    CKDPDeleteContainerResponse *_deleteContainerResponse;
    CKDPGetCommentResponse *_getCommentResponse;
    CKDPGetCommentsResponse *_getCommentsResponse;
    CKDPGetLikesResponse *_getLikesResponse;
    struct { 
        unsigned int operationCost : 1; 
    } _has;
    CKDPInvitationAcceptResponse *_invitationAcceptResponse;
    CKDPInvitationDeclineResponse *_invitationDeclineResponse;
    CKDPInvitationQueryResponse *_invitationQueryResponse;
    CKDPLikeResponse *_likeResponse;
    CKDPMescalCertificateResponse *_mescalCertificateResponse;
    CKDPMescalSessionInfoResponse *_mescalSessionInfoResponse;
    CKDPMescalSignatureResponse *_mescalSignatureResponse;
    CKDPNotificationMarkReadResponse *_notificationMarkReadResponse;
    CKDPNotificationSyncResponse *_notificationSyncResponse;
    unsigned int _operationCost;
    CKDPPkiRegisterResponse *_pkiRegisterResponse;
    CKDPPkiRetrieveResponse *_pkiRetrieveResponse;
    CKDPPostCommentResponse *_postCommentResponse;
    CKDPPromoteContainerSchemaResponse *_promoteContainerSchemaResponse;
    CKDPPulseResponse *_pulseResponse;
    CKDPQueryRetrieveResponse *_queryRetrieveResponse;
    CKDPRecordDeleteResponse *_recordDeleteResponse;
    CKDPRecordRetrieveChangesResponse *_recordRetrieveChangesResponse;
    CKDPRecordRetrieveResponse *_recordRetrieveResponse;
    CKDPRecordRetrieveVersionsResponse *_recordRetrieveVersionsResponse;
    CKDPRecordSaveResponse *_recordSaveResponse;
    CKDPResetContainerResponse *_resetContainerResponse;
    CKDPOperation *_response;
    CKDPResponseOperationResult *_result;
    CKDPSetBadgeCountResponse *_setBadgeCountResponse;
    CKDPShareCreateResponse *_shareCreateResponse;
    CKDPShareDeleteResponse *_shareDeleteResponse;
    CKDPShareParticipantCreateResponse *_shareParticipantCreateResponse;
    CKDPShareParticipantDeleteResponse *_shareParticipantDeleteResponse;
    CKDPShareParticipantUpdateResponse *_shareParticipantUpdateResponse;
    CKDPShareRetrieveResponse *_shareRetrieveResponse;
    CKDPShareCreateResponse *_shareSetKeyResponse;
    CKDPSubscriptionCreateResponse *_subscriptionCreateResponse;
    CKDPSubscriptionDeleteResponse *_subscriptionDeleteResponse;
    CKDPSubscriptionRetrieveResponse *_subscriptionRetrieveResponse;
    CKDPTokenRegistrationResponse *_tokenRegistrationResponse;
    CKDPTokenUnregistrationResponse *_tokenUnregistrationResponse;
    CKDPUnlikeResponse *_unlikeResponse;
    CKDPUserAvailableQuotaResponse *_userAvailableQuotaResponse;
    CKDPUserPrivacySettingsBatchLookupResponse *_userPrivacySettingsBatchLookupResponse;
    CKDPUserPrivacySettingsResetResponse *_userPrivacySettingsResetResponse;
    CKDPUserPrivacySettingsRetrieveResponse *_userPrivacySettingsRetrieveResponse;
    CKDPUserPrivacySettingsUpdateResponse *_userPrivacySettingsUpdateResponse;
    CKDPUserQueryResponse *_userQueryResponse;
    CKDPUserRetrieveResponse *_userRetrieveResponse;
    CKDPZoneDeleteResponse *_zoneDeleteResponse;
    CKDPZoneRetrieveResponse *_zoneRetrieveResponse;
    CKDPZoneSaveResponse *_zoneSaveResponse;
}

@property(retain) CKDPAssetUploadTokenRetrieveResponse * assetUploadTokenRetrieveResponse;
@property(retain) CKDPDeleteCommentResponse * deleteCommentResponse;
@property(retain) CKDPDeleteContainerResponse * deleteContainerResponse;
@property(retain) CKDPGetCommentResponse * getCommentResponse;
@property(retain) CKDPGetCommentsResponse * getCommentsResponse;
@property(retain) CKDPGetLikesResponse * getLikesResponse;
@property(readonly) BOOL hasAssetUploadTokenRetrieveResponse;
@property(readonly) BOOL hasDeleteCommentResponse;
@property(readonly) BOOL hasDeleteContainerResponse;
@property(readonly) BOOL hasGetCommentResponse;
@property(readonly) BOOL hasGetCommentsResponse;
@property(readonly) BOOL hasGetLikesResponse;
@property(readonly) BOOL hasInvitationAcceptResponse;
@property(readonly) BOOL hasInvitationDeclineResponse;
@property(readonly) BOOL hasInvitationQueryResponse;
@property(readonly) BOOL hasLikeResponse;
@property(readonly) BOOL hasMescalCertificateResponse;
@property(readonly) BOOL hasMescalSessionInfoResponse;
@property(readonly) BOOL hasMescalSignatureResponse;
@property(readonly) BOOL hasNotificationMarkReadResponse;
@property(readonly) BOOL hasNotificationSyncResponse;
@property BOOL hasOperationCost;
@property(readonly) BOOL hasPkiRegisterResponse;
@property(readonly) BOOL hasPkiRetrieveResponse;
@property(readonly) BOOL hasPostCommentResponse;
@property(readonly) BOOL hasPromoteContainerSchemaResponse;
@property(readonly) BOOL hasPulseResponse;
@property(readonly) BOOL hasQueryRetrieveResponse;
@property(readonly) BOOL hasRecordDeleteResponse;
@property(readonly) BOOL hasRecordRetrieveChangesResponse;
@property(readonly) BOOL hasRecordRetrieveResponse;
@property(readonly) BOOL hasRecordRetrieveVersionsResponse;
@property(readonly) BOOL hasRecordSaveResponse;
@property(readonly) BOOL hasResetContainerResponse;
@property(readonly) BOOL hasResponse;
@property(readonly) BOOL hasResult;
@property(readonly) BOOL hasSetBadgeCountResponse;
@property(readonly) BOOL hasShareCreateResponse;
@property(readonly) BOOL hasShareDeleteResponse;
@property(readonly) BOOL hasShareParticipantCreateResponse;
@property(readonly) BOOL hasShareParticipantDeleteResponse;
@property(readonly) BOOL hasShareParticipantUpdateResponse;
@property(readonly) BOOL hasShareRetrieveResponse;
@property(readonly) BOOL hasShareSetKeyResponse;
@property(readonly) BOOL hasSubscriptionCreateResponse;
@property(readonly) BOOL hasSubscriptionDeleteResponse;
@property(readonly) BOOL hasSubscriptionRetrieveResponse;
@property(readonly) BOOL hasTokenRegistrationResponse;
@property(readonly) BOOL hasTokenUnregistrationResponse;
@property(readonly) BOOL hasUnlikeResponse;
@property(readonly) BOOL hasUserAvailableQuotaResponse;
@property(readonly) BOOL hasUserPrivacySettingsBatchLookupResponse;
@property(readonly) BOOL hasUserPrivacySettingsResetResponse;
@property(readonly) BOOL hasUserPrivacySettingsRetrieveResponse;
@property(readonly) BOOL hasUserPrivacySettingsUpdateResponse;
@property(readonly) BOOL hasUserQueryResponse;
@property(readonly) BOOL hasUserRetrieveResponse;
@property(readonly) BOOL hasZoneDeleteResponse;
@property(readonly) BOOL hasZoneRetrieveResponse;
@property(readonly) BOOL hasZoneSaveResponse;
@property(retain) CKDPInvitationAcceptResponse * invitationAcceptResponse;
@property(retain) CKDPInvitationDeclineResponse * invitationDeclineResponse;
@property(retain) CKDPInvitationQueryResponse * invitationQueryResponse;
@property(retain) CKDPLikeResponse * likeResponse;
@property(retain) CKDPMescalCertificateResponse * mescalCertificateResponse;
@property(retain) CKDPMescalSessionInfoResponse * mescalSessionInfoResponse;
@property(retain) CKDPMescalSignatureResponse * mescalSignatureResponse;
@property(retain) CKDPNotificationMarkReadResponse * notificationMarkReadResponse;
@property(retain) CKDPNotificationSyncResponse * notificationSyncResponse;
@property unsigned int operationCost;
@property(retain) CKDPPkiRegisterResponse * pkiRegisterResponse;
@property(retain) CKDPPkiRetrieveResponse * pkiRetrieveResponse;
@property(retain) CKDPPostCommentResponse * postCommentResponse;
@property(retain) CKDPPromoteContainerSchemaResponse * promoteContainerSchemaResponse;
@property(retain) CKDPPulseResponse * pulseResponse;
@property(retain) CKDPQueryRetrieveResponse * queryRetrieveResponse;
@property(retain) CKDPRecordDeleteResponse * recordDeleteResponse;
@property(retain) CKDPRecordRetrieveChangesResponse * recordRetrieveChangesResponse;
@property(retain) CKDPRecordRetrieveResponse * recordRetrieveResponse;
@property(retain) CKDPRecordRetrieveVersionsResponse * recordRetrieveVersionsResponse;
@property(retain) CKDPRecordSaveResponse * recordSaveResponse;
@property(retain) CKDPResetContainerResponse * resetContainerResponse;
@property(retain) CKDPOperation * response;
@property(retain) CKDPResponseOperationResult * result;
@property(retain) CKDPSetBadgeCountResponse * setBadgeCountResponse;
@property(retain) CKDPShareCreateResponse * shareCreateResponse;
@property(retain) CKDPShareDeleteResponse * shareDeleteResponse;
@property(retain) CKDPShareParticipantCreateResponse * shareParticipantCreateResponse;
@property(retain) CKDPShareParticipantDeleteResponse * shareParticipantDeleteResponse;
@property(retain) CKDPShareParticipantUpdateResponse * shareParticipantUpdateResponse;
@property(retain) CKDPShareRetrieveResponse * shareRetrieveResponse;
@property(retain) CKDPShareCreateResponse * shareSetKeyResponse;
@property(retain) CKDPSubscriptionCreateResponse * subscriptionCreateResponse;
@property(retain) CKDPSubscriptionDeleteResponse * subscriptionDeleteResponse;
@property(retain) CKDPSubscriptionRetrieveResponse * subscriptionRetrieveResponse;
@property(retain) CKDPTokenRegistrationResponse * tokenRegistrationResponse;
@property(retain) CKDPTokenUnregistrationResponse * tokenUnregistrationResponse;
@property(retain) CKDPUnlikeResponse * unlikeResponse;
@property(retain) CKDPUserAvailableQuotaResponse * userAvailableQuotaResponse;
@property(retain) CKDPUserPrivacySettingsBatchLookupResponse * userPrivacySettingsBatchLookupResponse;
@property(retain) CKDPUserPrivacySettingsResetResponse * userPrivacySettingsResetResponse;
@property(retain) CKDPUserPrivacySettingsRetrieveResponse * userPrivacySettingsRetrieveResponse;
@property(retain) CKDPUserPrivacySettingsUpdateResponse * userPrivacySettingsUpdateResponse;
@property(retain) CKDPUserQueryResponse * userQueryResponse;
@property(retain) CKDPUserRetrieveResponse * userRetrieveResponse;
@property(retain) CKDPZoneDeleteResponse * zoneDeleteResponse;
@property(retain) CKDPZoneRetrieveResponse * zoneRetrieveResponse;
@property(retain) CKDPZoneSaveResponse * zoneSaveResponse;

- (void).cxx_destruct;
- (id)assetUploadTokenRetrieveResponse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteCommentResponse;
- (id)deleteContainerResponse;
- (id)description;
- (id)dictionaryRepresentation;
- (id)getCommentResponse;
- (id)getCommentsResponse;
- (id)getLikesResponse;
- (BOOL)hasAssetUploadTokenRetrieveResponse;
- (BOOL)hasDeleteCommentResponse;
- (BOOL)hasDeleteContainerResponse;
- (BOOL)hasGetCommentResponse;
- (BOOL)hasGetCommentsResponse;
- (BOOL)hasGetLikesResponse;
- (BOOL)hasInvitationAcceptResponse;
- (BOOL)hasInvitationDeclineResponse;
- (BOOL)hasInvitationQueryResponse;
- (BOOL)hasLikeResponse;
- (BOOL)hasMescalCertificateResponse;
- (BOOL)hasMescalSessionInfoResponse;
- (BOOL)hasMescalSignatureResponse;
- (BOOL)hasNotificationMarkReadResponse;
- (BOOL)hasNotificationSyncResponse;
- (BOOL)hasOperationCost;
- (BOOL)hasPkiRegisterResponse;
- (BOOL)hasPkiRetrieveResponse;
- (BOOL)hasPostCommentResponse;
- (BOOL)hasPromoteContainerSchemaResponse;
- (BOOL)hasPulseResponse;
- (BOOL)hasQueryRetrieveResponse;
- (BOOL)hasRecordDeleteResponse;
- (BOOL)hasRecordRetrieveChangesResponse;
- (BOOL)hasRecordRetrieveResponse;
- (BOOL)hasRecordRetrieveVersionsResponse;
- (BOOL)hasRecordSaveResponse;
- (BOOL)hasResetContainerResponse;
- (BOOL)hasResponse;
- (BOOL)hasResult;
- (BOOL)hasSetBadgeCountResponse;
- (BOOL)hasShareCreateResponse;
- (BOOL)hasShareDeleteResponse;
- (BOOL)hasShareParticipantCreateResponse;
- (BOOL)hasShareParticipantDeleteResponse;
- (BOOL)hasShareParticipantUpdateResponse;
- (BOOL)hasShareRetrieveResponse;
- (BOOL)hasShareSetKeyResponse;
- (BOOL)hasSubscriptionCreateResponse;
- (BOOL)hasSubscriptionDeleteResponse;
- (BOOL)hasSubscriptionRetrieveResponse;
- (BOOL)hasTokenRegistrationResponse;
- (BOOL)hasTokenUnregistrationResponse;
- (BOOL)hasUnlikeResponse;
- (BOOL)hasUserAvailableQuotaResponse;
- (BOOL)hasUserPrivacySettingsBatchLookupResponse;
- (BOOL)hasUserPrivacySettingsResetResponse;
- (BOOL)hasUserPrivacySettingsRetrieveResponse;
- (BOOL)hasUserPrivacySettingsUpdateResponse;
- (BOOL)hasUserQueryResponse;
- (BOOL)hasUserRetrieveResponse;
- (BOOL)hasZoneDeleteResponse;
- (BOOL)hasZoneRetrieveResponse;
- (BOOL)hasZoneSaveResponse;
- (unsigned int)hash;
- (id)invitationAcceptResponse;
- (id)invitationDeclineResponse;
- (id)invitationQueryResponse;
- (BOOL)isEqual:(id)arg1;
- (id)likeResponse;
- (void)mergeFrom:(id)arg1;
- (id)mescalCertificateResponse;
- (id)mescalSessionInfoResponse;
- (id)mescalSignatureResponse;
- (id)notificationMarkReadResponse;
- (id)notificationSyncResponse;
- (unsigned int)operationCost;
- (id)pkiRegisterResponse;
- (id)pkiRetrieveResponse;
- (id)postCommentResponse;
- (id)promoteContainerSchemaResponse;
- (id)pulseResponse;
- (id)queryRetrieveResponse;
- (BOOL)readFrom:(id)arg1;
- (id)recordDeleteResponse;
- (id)recordRetrieveChangesResponse;
- (id)recordRetrieveResponse;
- (id)recordRetrieveVersionsResponse;
- (id)recordSaveResponse;
- (id)resetContainerResponse;
- (id)response;
- (id)result;
- (void)setAssetUploadTokenRetrieveResponse:(id)arg1;
- (id)setBadgeCountResponse;
- (void)setDeleteCommentResponse:(id)arg1;
- (void)setDeleteContainerResponse:(id)arg1;
- (void)setGetCommentResponse:(id)arg1;
- (void)setGetCommentsResponse:(id)arg1;
- (void)setGetLikesResponse:(id)arg1;
- (void)setHasOperationCost:(BOOL)arg1;
- (void)setInvitationAcceptResponse:(id)arg1;
- (void)setInvitationDeclineResponse:(id)arg1;
- (void)setInvitationQueryResponse:(id)arg1;
- (void)setLikeResponse:(id)arg1;
- (void)setMescalCertificateResponse:(id)arg1;
- (void)setMescalSessionInfoResponse:(id)arg1;
- (void)setMescalSignatureResponse:(id)arg1;
- (void)setNotificationMarkReadResponse:(id)arg1;
- (void)setNotificationSyncResponse:(id)arg1;
- (void)setOperationCost:(unsigned int)arg1;
- (void)setPkiRegisterResponse:(id)arg1;
- (void)setPkiRetrieveResponse:(id)arg1;
- (void)setPostCommentResponse:(id)arg1;
- (void)setPromoteContainerSchemaResponse:(id)arg1;
- (void)setPulseResponse:(id)arg1;
- (void)setQueryRetrieveResponse:(id)arg1;
- (void)setRecordDeleteResponse:(id)arg1;
- (void)setRecordRetrieveChangesResponse:(id)arg1;
- (void)setRecordRetrieveResponse:(id)arg1;
- (void)setRecordRetrieveVersionsResponse:(id)arg1;
- (void)setRecordSaveResponse:(id)arg1;
- (void)setResetContainerResponse:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSetBadgeCountResponse:(id)arg1;
- (void)setShareCreateResponse:(id)arg1;
- (void)setShareDeleteResponse:(id)arg1;
- (void)setShareParticipantCreateResponse:(id)arg1;
- (void)setShareParticipantDeleteResponse:(id)arg1;
- (void)setShareParticipantUpdateResponse:(id)arg1;
- (void)setShareRetrieveResponse:(id)arg1;
- (void)setShareSetKeyResponse:(id)arg1;
- (void)setSubscriptionCreateResponse:(id)arg1;
- (void)setSubscriptionDeleteResponse:(id)arg1;
- (void)setSubscriptionRetrieveResponse:(id)arg1;
- (void)setTokenRegistrationResponse:(id)arg1;
- (void)setTokenUnregistrationResponse:(id)arg1;
- (void)setUnlikeResponse:(id)arg1;
- (void)setUserAvailableQuotaResponse:(id)arg1;
- (void)setUserPrivacySettingsBatchLookupResponse:(id)arg1;
- (void)setUserPrivacySettingsResetResponse:(id)arg1;
- (void)setUserPrivacySettingsRetrieveResponse:(id)arg1;
- (void)setUserPrivacySettingsUpdateResponse:(id)arg1;
- (void)setUserQueryResponse:(id)arg1;
- (void)setUserRetrieveResponse:(id)arg1;
- (void)setZoneDeleteResponse:(id)arg1;
- (void)setZoneRetrieveResponse:(id)arg1;
- (void)setZoneSaveResponse:(id)arg1;
- (id)shareCreateResponse;
- (id)shareDeleteResponse;
- (id)shareParticipantCreateResponse;
- (id)shareParticipantDeleteResponse;
- (id)shareParticipantUpdateResponse;
- (id)shareRetrieveResponse;
- (id)shareSetKeyResponse;
- (id)subscriptionCreateResponse;
- (id)subscriptionDeleteResponse;
- (id)subscriptionRetrieveResponse;
- (id)tokenRegistrationResponse;
- (id)tokenUnregistrationResponse;
- (id)unlikeResponse;
- (id)userAvailableQuotaResponse;
- (id)userPrivacySettingsBatchLookupResponse;
- (id)userPrivacySettingsResetResponse;
- (id)userPrivacySettingsRetrieveResponse;
- (id)userPrivacySettingsUpdateResponse;
- (id)userQueryResponse;
- (id)userRetrieveResponse;
- (void)writeTo:(id)arg1;
- (id)zoneDeleteResponse;
- (id)zoneRetrieveResponse;
- (id)zoneSaveResponse;

@end

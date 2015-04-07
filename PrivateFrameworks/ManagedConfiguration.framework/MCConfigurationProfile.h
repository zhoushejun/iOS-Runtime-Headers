/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class MCProfileServiceProfile, NSArray;

@interface MCConfigurationProfile : MCProfile {
    MCProfileServiceProfile *_OTAProfile;
    BOOL _isCloudLocked;
    BOOL _isCloudProfile;
    BOOL _isMDMProfile;
    NSArray *_managedPayloads;
    NSArray *_payloads;
}

@property(retain) MCProfileServiceProfile * OTAProfile;
@property BOOL isCloudLocked;
@property BOOL isCloudProfile;
@property BOOL isMDMProfile;

- (void).cxx_destruct;
- (id)OTAProfile;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (void)_sortPayloads;
- (id)_sortPayloads:(id)arg1;
- (id)_subjectSummaryFromCertificate:(struct __SecCertificate { }*)arg1;
- (struct __SecCertificate { }*)copyCertificateFromPayloadWithUUID:(id)arg1;
- (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1;
- (id)description;
- (id)earliestCertificateExpiryDate;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id*)arg3;
- (id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1;
- (BOOL)isCloudLocked;
- (BOOL)isCloudProfile;
- (BOOL)isMDMProfile;
- (BOOL)isManagedByProfileService;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)managedPayloads;
- (id)payloadWithUUID:(id)arg1;
- (id)payloads;
- (void)setIsCloudLocked:(BOOL)arg1;
- (void)setIsCloudProfile:(BOOL)arg1;
- (void)setIsMDMProfile:(BOOL)arg1;
- (void)setOTAProfile:(id)arg1;
- (id)stubDictionary;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;

@end

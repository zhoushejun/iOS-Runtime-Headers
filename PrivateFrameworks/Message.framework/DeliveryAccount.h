/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface DeliveryAccount : MFAccount {
}

+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountTypeIdentifier;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3;
+ (id)accountWithIdentifier:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (void)addDeliveryAccount:(id)arg1;
+ (id)carrierDeliveryAccount;
+ (id)deliveryAccounts;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithIdentifier:(id)arg1;
+ (id)newDefaultInstance;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(id)arg1;

- (void)_setAccountProperties:(id)arg1;
- (void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2;
- (BOOL)canBeFallbackAccount;
- (Class)deliveryClass;
- (id)displayHostname;
- (BOOL)hasEnoughInformationForEasySetup;
- (BOOL)hasNoReferences;
- (id)identifier;
- (id)mailAccountIfAvailable;
- (unsigned long long)maximumMessageBytes;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (void)setMaximumMessageBytes:(unsigned long long)arg1;
- (void)setShouldUseAuthentication:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (BOOL)shouldUseAuthentication;
- (BOOL)shouldUseSaveSentForAccount:(id)arg1;
- (BOOL)supportsOutboxCopy;
- (BOOL)supportsSoftBankCodePoints;

@end

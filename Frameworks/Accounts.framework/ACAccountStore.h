/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class ACRemoteAccountStoreSession, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface ACAccountStore : NSObject {
    NSString *_clientBundleID;
    id _daemonAccountStoreDidChangeObserver;
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property(readonly) NSArray * accounts;
@property(readonly) NSString * effectiveBundleID;
@property(retain) ACRemoteAccountStoreSession * remoteAccountStoreSession;

+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
+ (BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (int)countOfAccountsWithAccountTypeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2 filterOnDataclasses:(BOOL)arg3 withCompletion:(id)arg4;
- (id)_mailAccountTypeIdentifiers;
- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(id)arg2;
- (id)_primaryiCloudAccount;
- (void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(id)arg4;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (id)aa_appleAccountType;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (id)aa_appleAccounts;
- (id)aa_grandSlamAccountWithUsername:(id)arg1;
- (void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(id)arg3;
- (id)aa_primaryAppleAccount;
- (id)aa_primaryAppleAccountWithPreloadedDataclasses;
- (id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(id)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(id)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 usingCookieHeaders:(id)arg2 completion:(id)arg3;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(id)arg2;
- (id)aaui_accountDescriptionFromEmailAddress:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(id)arg2;
- (id)accountWithAppleID:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(id)arg2;
- (id)accounts;
- (id)accountsWithAccountType:(id)arg1;
- (id)accountsWithAccountType:(id)arg1 appleID:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 completion:(id)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(id)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id)arg3;
- (BOOL)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)aida_AppleIDAuthenticationAccountType;
- (id)aida_AppleIDAuthenticationAccounts;
- (id)aida_accountForPrimaryiCloudAccount;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id)arg3;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(BOOL)arg3 completion:(id)arg4;
- (id)allAccountTypes;
- (id)allDataclasses;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)clientTokenForAccount:(id)arg1;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)credentialForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id*)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)da_accounts;
- (id)da_accountsEnabledForDADataclasses:(int)arg1;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2;
- (void)da_loadDAAccountsEnabledForDADataclasses:(int)arg1 withCompletion:(id)arg2;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2 withCompletion:(id)arg3;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(id)arg2;
- (void)da_loadDAAccountsWithCompletion:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (void)dealloc;
- (void)disconnectFromRemoteAccountStore;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)effectiveBundleID;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (void)handleURL:(id)arg1;
- (BOOL)hasAccountWithDescription:(id)arg1;
- (BOOL)hasMailAccountsForSync;
- (id)init;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (BOOL)isPushSupportedForAccount:(id)arg1;
- (BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;
- (id)mailAccountsForSync;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(id)arg2;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(id)arg4;
- (id)parentAccountForAccount:(id)arg1;
- (BOOL)permissionForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)remoteAccountStoreSession;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(id)arg4;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(id)arg3;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(id)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(id)arg4;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (void)setRemoteAccountStoreSession:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id)arg2;

@end

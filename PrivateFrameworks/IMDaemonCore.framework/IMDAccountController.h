/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSArray, NSDictionary, NSMutableDictionary;

@interface IMDAccountController : NSObject {
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    BOOL _isFirstLoad;
    BOOL _isLoading;
}

@property(readonly) NSArray * accounts;
@property(readonly) NSArray * activeAccounts;
@property(readonly) NSArray * activeSessions;
@property(readonly) NSArray * connectedAccounts;
@property(readonly) NSArray * connectingAccounts;
@property(readonly) BOOL isLoading;
@property(readonly) NSDictionary * loadOldStatusStore;

+ (id)sharedAccountController;
+ (id)sharedInstance;

- (void)_checkPowerAssertion;
- (void)_daemonWillShutdown:(id)arg1;
- (BOOL)_isAccountActive:(id)arg1 forService:(id)arg2;
- (id)_superFormatFromAIML:(id)arg1;
- (id)accountForAccountID:(id)arg1;
- (id)accountForIDSAccountUniqueID:(id)arg1;
- (id)accounts;
- (id)accountsForLoginID:(id)arg1 onService:(id)arg2;
- (id)accountsForService:(id)arg1;
- (void)activateAccount:(id)arg1;
- (void)activateAccounts:(id)arg1;
- (id)activeAccounts;
- (id)activeAccountsForService:(id)arg1;
- (id)activeSessions;
- (void)addAccount:(id)arg1;
- (id)anySessionForServiceName:(id)arg1;
- (id)connectedAccounts;
- (id)connectedAccountsForService:(id)arg1;
- (id)connectingAccounts;
- (id)connectingAccountsForService:(id)arg1;
- (void)deactivateAccount:(id)arg1;
- (void)deactivateAccount:(id)arg1 force:(BOOL)arg2;
- (void)deactivateAccounts:(id)arg1;
- (void)deactivateAccounts:(id)arg1 force:(BOOL)arg2;
- (void)dealloc;
- (void)deferredSave;
- (id)init;
- (BOOL)isAccountActive:(id)arg1;
- (BOOL)isLoading;
- (void)load;
- (id)loadOldStatusStore;
- (void)removeAccount:(id)arg1;
- (void)save;
- (id)sessionForAccount:(id)arg1;
- (void)setupAccount:(id)arg1;

@end

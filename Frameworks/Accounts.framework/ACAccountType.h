/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class ACAccountStore, NSSet, NSString, NSURL;

@interface ACAccountType : NSObject <NSSecureCoding> {
    NSSet *_accessKeys;
    ACAccountStore *_accountStore;
    NSString *_accountTypeDescription;
    NSString *_credentialProtectionPolicy;
    NSString *_credentialType;
    BOOL _encryptAccountProperties;
    NSString *_identifier;
    NSURL *_objectID;
    NSString *_owningBundleID;
    NSString *_owningTeamID;
    NSSet *_supportedDataclasses;
    int _supportsAuthentication;
    BOOL _supportsMultipleAccounts;
    NSSet *_syncableDataclasses;
    int _visibility;
}

@property(readonly) BOOL accessGranted;
@property(readonly) NSSet * accessKeys;
@property ACAccountStore * accountStore;
@property(readonly) NSString * accountTypeDescription;
@property(copy) id credentialProtectionPolicy;
@property(retain) NSString * credentialType;
@property(readonly) BOOL encryptAccountProperties;
@property(readonly) NSString * fullDescription;
@property(readonly) NSString * identifier;
@property(retain) NSURL * objectID;
@property(retain) NSString * owningBundleID;
@property(retain) NSString * owningTeamID;
@property(readonly) NSSet * supportedDataclasses;
@property int supportsAuthentication;
@property BOOL supportsMultipleAccounts;
@property(readonly) NSSet * syncableDataclasses;
@property int visibility;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)accessGranted;
- (id)accessKeys;
- (id)accountStore;
- (id)accountTypeDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialProtectionPolicy;
- (id)credentialType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)encryptAccountProperties;
- (id)fullDescription;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (id)initWithManagedAccountType:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (id)objectID;
- (id)owningBundleID;
- (id)owningTeamID;
- (void)setAccountStore:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (void)setCredentialProtectionPolicy:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setOwningBundleID:(id)arg1;
- (void)setOwningTeamID:(id)arg1;
- (void)setSupportsAuthentication:(int)arg1;
- (void)setSupportsMultipleAccounts:(BOOL)arg1;
- (void)setVisibility:(int)arg1;
- (id)supportedDataclasses;
- (int)supportsAuthentication;
- (BOOL)supportsMultipleAccounts;
- (id)syncableDataclasses;
- (int)visibility;

@end

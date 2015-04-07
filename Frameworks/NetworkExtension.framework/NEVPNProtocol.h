/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEIdentityKeychainItem, NEKeychainItem, NEProxySettings, NSData, NSString, NSUUID;

@interface NEVPNProtocol : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    BOOL _disconnectOnIdle;
    int _disconnectOnIdleTimeout;
    BOOL _disconnectOnLogout;
    BOOL _disconnectOnSleep;
    BOOL _disconnectOnUserSwitch;
    BOOL _disconnectOnWake;
    int _disconnectOnWakeTimeout;
    NSUUID *_identifier;
    NEIdentityKeychainItem *_identity;
    NSData *_identityDataHash;
    BOOL _identityDataImported;
    NSData *_identityDataInternal;
    NSString *_identityDataPassword;
    int _keychainDomain;
    NSString *_passwordEncryption;
    NEKeychainItem *_passwordKeychainItem;
    NEProxySettings *_proxySettings;
    NSString *_serverAddress;
    int _type;
    NSString *_username;
}

@property BOOL disconnectOnIdle;
@property int disconnectOnIdleTimeout;
@property BOOL disconnectOnLogout;
@property BOOL disconnectOnSleep;
@property BOOL disconnectOnUserSwitch;
@property BOOL disconnectOnWake;
@property int disconnectOnWakeTimeout;
@property(copy) NSUUID * identifier;
@property(retain) NEIdentityKeychainItem * identity;
@property(copy) NSData * identityData;
@property(copy) NSData * identityDataHash;
@property BOOL identityDataImported;
@property(copy) NSData * identityDataInternal;
@property(copy) NSString * identityDataPassword;
@property(copy) NSData * identityReference;
@property(copy) NSData * identityReferenceInternal;
@property int keychainDomain;
@property(copy) NSString * passwordEncryption;
@property(copy) NEKeychainItem * passwordKeychainItem;
@property(copy) NSData * passwordReference;
@property(copy) NEProxySettings * proxySettings;
@property(copy) NSString * serverAddress;
@property(readonly) int type;
@property(copy) NSString * username;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDisconnectOptions:(id)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (void)copyPasswordsFromKeychainInDomain:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)description;
- (id)descriptionWithIndent:(int)arg1;
- (BOOL)disconnectOnIdle;
- (int)disconnectOnIdleTimeout;
- (BOOL)disconnectOnLogout;
- (BOOL)disconnectOnSleep;
- (BOOL)disconnectOnUserSwitch;
- (BOOL)disconnectOnWake;
- (int)disconnectOnWakeTimeout;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)identity;
- (id)identityData;
- (id)identityDataHash;
- (BOOL)identityDataImported;
- (id)identityDataInternal;
- (id)identityDataPassword;
- (id)identityReference;
- (id)identityReferenceInternal;
- (void)initDisconnectOptions:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolIdentifier:(id)arg1;
- (id)initWithType:(int)arg1;
- (int)keychainDomain;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { }*)arg1;
- (id)passwordEncryption;
- (id)passwordKeychainItem;
- (id)passwordReference;
- (id)proxySettings;
- (void)removeKeychainItemsInDomain:(int)arg1;
- (id)serverAddress;
- (void)setDisconnectOnIdle:(BOOL)arg1;
- (void)setDisconnectOnIdleTimeout:(int)arg1;
- (void)setDisconnectOnLogout:(BOOL)arg1;
- (void)setDisconnectOnSleep:(BOOL)arg1;
- (void)setDisconnectOnUserSwitch:(BOOL)arg1;
- (void)setDisconnectOnWake:(BOOL)arg1;
- (void)setDisconnectOnWakeTimeout:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setIdentityData:(id)arg1;
- (void)setIdentityDataHash:(id)arg1;
- (void)setIdentityDataImported:(BOOL)arg1;
- (void)setIdentityDataInternal:(id)arg1;
- (void)setIdentityDataPassword:(id)arg1;
- (void)setIdentityReference:(id)arg1;
- (void)setIdentityReferenceInternal:(id)arg1;
- (void)setKeychainDomain:(int)arg1;
- (void)setPasswordEncryption:(id)arg1;
- (void)setPasswordKeychainItem:(id)arg1;
- (void)setPasswordReference:(id)arg1;
- (void)setProxySettings:(id)arg1;
- (void)setServerAddress:(id)arg1;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)setUsername:(id)arg1;
- (void)syncWithKeychainInDomain:(int)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (void)syncWithKeychainInDomainCommon:(int)arg1;
- (int)type;
- (id)type2str;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;
- (id)username;

@end

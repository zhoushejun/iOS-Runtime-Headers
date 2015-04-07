/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDDatabase, NSMutableDictionary, NSNumber, NSString, NSXPCConnection;

@interface ACDClient : NSObject {
    struct __CFBundle { } *_bundle;
    NSString *_bundleID;
    NSXPCConnection *_connection;
    ACDDatabase *_database;
    BOOL _didManuallySetBundleID;
    NSMutableDictionary *_entitlementChecks;
    NSString *_localizedAppName;
    NSString *_name;
    NSNumber *_pid;
}

@property(readonly) NSString * adamOrDisplayID;
@property(readonly) struct __CFBundle { }* bundle;
@property(retain) NSString * bundleID;
@property(readonly) NSXPCConnection * connection;
@property(readonly) ACDDatabase * database;
@property(readonly) NSString * localizedAppName;
@property(readonly) NSString * name;
@property(readonly) NSNumber * pid;

+ (id)_bundleForNonPlugInPID:(int)arg1;
+ (id)_bundleForPID:(int)arg1;
+ (id)_bundleIDForPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;

- (void).cxx_destruct;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
- (id)_displayNameFromSpringBoardForPID:(int)arg1;
- (id)adamOrDisplayID;
- (struct __CFBundle { }*)bundle;
- (id)bundleID;
- (id)connection;
- (id)database;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (id)localizedAppName;
- (id)longDebugDescription;
- (id)name;
- (id)pid;
- (void)setBundleID:(id)arg1;
- (id)shortDebugDescription;

@end

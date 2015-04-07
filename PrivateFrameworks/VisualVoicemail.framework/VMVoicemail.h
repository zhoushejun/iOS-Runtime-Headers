/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, VMAccount;

@interface VMVoicemail : NSObject {
    VMAccount *_account;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    id _cachedAddressBookRef;
    NSString *_cachedDisplayName;
    struct __CFPhoneNumber { } *_callbackPhoneNumber;
    long long _identifier;
    struct __CFPhoneNumber { } *_senderPhoneNumber;
}

@property(retain) id cachedAddressBookRef;
@property(retain) NSString * cachedDisplayName;
@property(readonly) struct __CFPhoneNumber { }* callbackPhoneNumber;
@property(readonly) struct __CFPhoneNumber { }* senderPhoneNumber;

+ (void)_doVoicemailMapHousekeepingNoLock;
+ (id)_findPreviouslyCreatedVoicemailWithAccountNoLock:(id)arg1 identifier:(long long)arg2;
+ (void)_scheduleVoicemailMapHousekeepingNoLock;
+ (void)forceReloadAllLiveVoicemailsForAccount:(id)arg1;
+ (void)initialize;
+ (void)scheduleVoicemailMapHousekeeping;
+ (id)voicemailWithAccount:(id)arg1 identifier:(long long)arg2 creating:(BOOL)arg3;

- (void)_forceUpdateCache;
- (void)_handleDataAvailable:(id)arg1;
- (void)_lockedPreemptivelySetFlags:(unsigned int)arg1 clearFlags:(unsigned int)arg2 unlockedBlock:(id*)arg3;
- (void)_preemptivelySetFlags:(unsigned int)arg1 clearFlags:(unsigned int)arg2;
- (void)_updateCache;
- (void*)abRecordUsingAddressBook:(void*)arg1;
- (void*)abRecordUsingAddressBook:(void*)arg1 withIdentifier:(int*)arg2;
- (id)cachedAddressBookRef;
- (id)cachedDisplayName;
- (id)callbackNumber;
- (struct __CFPhoneNumber { }*)callbackPhoneNumber;
- (id)dataPath;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)displayLabelUsingAddressBook:(void*)arg1;
- (id)displayNameUsingAddressBook:(void*)arg1;
- (BOOL)doesNotHaveFlags:(unsigned int)arg1;
- (int)duration;
- (unsigned int)flags;
- (BOOL)hasFlags:(unsigned int)arg1;
- (long long)identifier;
- (id)imageDataUsingAddressBook:(void*)arg1;
- (id)initWithAccount:(id)arg1 identifier:(long long)arg2;
- (unsigned long long)remoteUID;
- (id)sender;
- (struct __CFPhoneNumber { }*)senderPhoneNumber;
- (void)setCachedAddressBookRef:(id)arg1;
- (void)setCachedDisplayName:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (BOOL)willBroadcastNotificationName:(id)arg1 userInfo:(id)arg2;

@end

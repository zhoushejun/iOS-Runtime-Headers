/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CRRecentContactsLibrary;

@interface PKPaymentOptionsRecents : NSObject {
    void *_abRef;
    CRRecentContactsLibrary *_coreRecentsLibrary;
}

+ (id)_coreRecentsKindForPropertyID:(int)arg1;
+ (id)defaultInstance;

- (void*)_copyOfUnifiedMeCard;
- (void)_coreRecentsContactsForPropertyID:(int)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)dealloc;
- (void)deleteRecentsForPropertyID:(int)arg1;
- (id)init;
- (id)meCardEntriesForPropertyID:(int)arg1;
- (void)meCardEntriesForPropertyID:(int)arg1 queue:(id)arg2 completion:(id)arg3;
- (id)recentsForPropertyID:(int)arg1;
- (void)recentsForPropertyID:(int)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)saveItemToCoreRecents:(id)arg1 contact:(id)arg2 propertyID:(int)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendar, NSString;

@interface EKSharee : EKObject <EKIdentityProtocol, NSCopying> {
}

@property(readonly) NSString * UUID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * emailAddress;
@property(copy) NSString * externalID;
@property(copy) NSString * firstName;
@property(readonly) unsigned int hash;
@property(copy) NSString * lastName;
@property(copy) NSString * name;
@property(readonly) EKCalendar * owner;
@property int shareeAccessLevel;
@property int shareeStatus;
@property(readonly) Class superclass;

+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;

- (void*)ABRecordWithAddressBook:(void*)arg1;
- (id)UUID;
- (id)_persistentSharee;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (id)externalID;
- (id)firstName;
- (unsigned int)hash;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)lastName;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)name;
- (id)owner;
- (void)setEmailAddress:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShareeAccessLevel:(int)arg1;
- (void)setShareeStatus:(int)arg1;
- (int)shareeAccessLevel;
- (int)shareeStatus;

@end

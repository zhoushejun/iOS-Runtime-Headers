/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ETPeople.framework/ETPeople
 */

@class NSNumber, NSSet, NSString;

@interface ETPerson : NSObject {
    NSString *_abDatabaseUID;
    NSString *_abRecordGUID;
    int _abRecordID;
    NSSet *_allValues;
    unsigned int _dirty : 1;
    NSNumber *_emailAddressCount;
    BOOL _hasImage;
    BOOL _hasUnreadMessages;
    NSString *_initials;
    NSString *_name;
    NSNumber *_phoneNumberCount;
    NSString *_primaryDestination;
    double _unreadMessageIndicatorUpdateTime;
}

@property(readonly) BOOL hasUnreadMessages;

+ (id)_allEmailValuesForRecord:(void*)arg1;
+ (id)_allEmailValuesInSet:(id)arg1;
+ (id)_allPhoneValuesForRecord:(void*)arg1;
+ (id)_allPhoneValuesInSet:(id)arg1;
+ (int)addValue:(void*)arg1 withLabel:(struct __CFString { }*)arg2 toPerson:(void*)arg3 property:(int)arg4;
+ (id)allValuesForPerson:(void*)arg1;
+ (id)preferredNameForPerson:(void*)arg1;

- (void).cxx_destruct;
- (void*)ABPersonWithAddressBook:(void*)arg1;
- (float)_allValuesMatchScore:(id)arg1;
- (void*)_bestRecordMatchFromDictionary:(id)arg1 addressBook:(void*)arg2;
- (void)_postChangeNotification;
- (void)_reconcile:(void*)arg1 canPostChangeNotification:(BOOL)arg2;
- (id)_recordMatchDictionaryFromCFArray:(struct __CFArray { }*)arg1 followLinks:(BOOL)arg2 addressBook:(void*)arg3;
- (id)abDatabaseUID;
- (id)abRecordGUID;
- (int)abRecordID;
- (id)allValues;
- (id)description;
- (id)dictionaryRepresentation;
- (void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2;
- (id)displayName;
- (BOOL)hasEmailAddress;
- (BOOL)hasImage;
- (BOOL)hasPhoneNumber;
- (BOOL)hasUnreadMessages;
- (id)init;
- (id)initWithABRecordGUID:(id)arg1 addressBook:(void*)arg2;
- (id)initWithDestinations:(id)arg1 addressBook:(void*)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2;
- (id)initWithFavorite:(id)arg1 addressBook:(void*)arg2;
- (id)initWithPerson:(void*)arg1;
- (id)initials;
- (BOOL)isEqualToDictionaryRepresentation:(id)arg1;
- (id)key;
- (void)makeClean;
- (id)primaryDestination;
- (void)refreshWithAddressBook:(void*)arg1;
- (void)resetHasUnreadMessages;
- (void)setHasUnreadMessages:(BOOL)arg1 forMessageSendTime:(double)arg2;
- (void)updateFromDictionaryRepresentation:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMMessageActionItem : IMItem <IMRemoteObjectCoding, NSCoding, NSCopying> {
    long long _actionType;
    NSString *_originalMessageGUID;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
}

@property long long actionType;
@property(retain) NSString * originalMessageGUID;
@property(retain) NSString * otherCountryCode;
@property(retain) NSString * otherHandle;
@property(retain) NSString * otherUnformattedID;

- (id)_newChatItems;
- (long long)actionType;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)originalMessageGUID;
- (id)otherCountryCode;
- (id)otherHandle;
- (id)otherUnformattedID;
- (void)setActionType:(long long)arg1;
- (void)setOriginalMessageGUID:(id)arg1;
- (void)setOtherCountryCode:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;

@end

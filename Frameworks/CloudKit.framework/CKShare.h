/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKShareID, CKSharedItemID, NSArray, NSData, NSMapTable, NSMutableArray, NSMutableSet, NSString;

@interface CKShare : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_addedParticipantsToOutgoingInvitationsTable;
    NSMutableArray *_existingParticipants;
    BOOL _isKnownToServer;
    NSMutableSet *_pendingServerParticipants;
    NSData *_protectionData;
    NSString *_protectionVersion;
    NSMutableArray *_removedParticipants;
    CKShareID *_shareID;
    CKSharedItemID *_sharedItemID;
}

@property(retain) NSMapTable * addedParticipantsToOutgoingInvitationsTable;
@property(copy,readonly) NSArray * allParticipants;
@property(retain) NSMutableArray * existingParticipants;
@property BOOL isKnownToServer;
@property(retain) NSMutableSet * pendingServerParticipants;
@property(retain) NSData * protectionData;
@property(retain) NSString * protectionVersion;
@property(retain) NSMutableArray * removedParticipants;
@property(copy) CKShareID * shareID;
@property(copy) CKSharedItemID * sharedItemID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesDescription;
- (void)_addParticipant:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (id)_addParticipantWithUserRecordID:(id)arg1 emailAddress:(id)arg2 invitationMessage:(id)arg3 invitationImageURL:(id)arg4;
- (id)_initBare;
- (id)_initWithSharedItemID:(id)arg1 shareID:(id)arg2 error:(id*)arg3;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
- (id)_matchingParticipantWithUserRecordID:(id)arg1 emailAddress:(id)arg2;
- (void)_mergeServerParticipants:(id)arg1;
- (void)_updateFromPendingServerParticipants;
- (int)acceptanceStatusForParticipant:(id)arg1;
- (id)addParticipantWithEmailAddress:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (id)addParticipantWithUserRecordID:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (id)addedParticipantsToOutgoingInvitationsTable;
- (id)allParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)existingParticipants;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 error:(id*)arg2;
- (id)initWithItem:(id)arg1 shareName:(id)arg2;
- (id)initWithItem:(id)arg1 shareName:(id)arg2 error:(id*)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKnownToServer;
- (int)itemPermissionForParticipant:(id)arg1;
- (int)participantListPermissionForParticipant:(id)arg1;
- (id)pendingServerParticipants;
- (id)protectionData;
- (id)protectionVersion;
- (void)removeParticipant:(id)arg1;
- (id)removedParticipants;
- (void)setAddedParticipantsToOutgoingInvitationsTable:(id)arg1;
- (void)setExistingParticipants:(id)arg1;
- (void)setIsKnownToServer:(BOOL)arg1;
- (void)setItemPermission:(int)arg1 forParticipant:(id)arg2;
- (void)setParticipantListPermission:(int)arg1 forParticipant:(id)arg2;
- (void)setPendingServerParticipants:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionVersion:(id)arg1;
- (void)setRemovedParticipants:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setSharedItemID:(id)arg1;
- (id)shareID;
- (id)sharedItemID;

@end

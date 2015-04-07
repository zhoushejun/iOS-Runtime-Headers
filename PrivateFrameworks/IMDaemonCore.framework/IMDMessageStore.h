/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSNumber, NSString, NSTimer;

@interface IMDMessageStore : NSObject {
    NSNumber *_cachedLastFailedMessageID;
    NSNumber *_cachedUnreadMessageCount;
    NSString *_modificationStamp;
    BOOL _pendingDBUpdatePost;
    BOOL _suppressedUpdates;
    NSTimer *_suppressedUpdatesTimer;
}

@property(retain) NSString * modificationStamp;

+ (void)_updateCacheForMessageGUID:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3;
+ (id)sharedInstance;

- (void)__postDBUpdate;
- (void)_deleteMessagesWithGUIDs:(id)arg1 chatIdentifiers:(id)arg2 style:(unsigned char)arg3 onServices:(id)arg4 batchNumber:(unsigned int)arg5 completion:(id)arg6;
- (BOOL)_hasMessagesWithGUIDs:(id)arg1;
- (id)_itemsWithGUIDs:(id)arg1;
- (id)_messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned int)arg4 onlyMessages:(BOOL)arg5;
- (id)_messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned int)arg4 onlyMessages:(BOOL)arg5;
- (void)_performBlock:(id)arg1 afterDelay:(double)arg2;
- (void)_postDBUpdate;
- (void)_storeAttachmentsForMessage:(id)arg1;
- (void)_suppressDBUpdateTimerFired;
- (id)_unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3 fallbackGUID:(id)arg4;
- (id)_unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3 fallbackGUID:(id)arg4;
- (void)_updateModificationDate;
- (id)attachmentsWithHandles:(id)arg1 onServices:(id)arg2;
- (id)attachmentsWithRoomNames:(id)arg1 onServices:(id)arg2;
- (BOOL)canStoreItem:(id)arg1 onService:(id)arg2;
- (BOOL)canStoreMessage:(id)arg1 onService:(id)arg2;
- (id)chatForMessage:(id)arg1;
- (id)chatForMessageGUID:(id)arg1;
- (id)chatsForMessage:(id)arg1;
- (id)chatsForMessageGUID:(id)arg1;
- (void)cleanseAttachments;
- (void)dealloc;
- (id)deleteMessageGUIDs:(id)arg1;
- (id)deleteMessageGUIDs:(id)arg1 inChat:(id)arg2;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 completion:(id)arg4;
- (id)deleteMessagesWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (id)existingMessageSimilarToMessage:(id)arg1 skipServices:(id)arg2 skipGUIDs:(id)arg3 withinTimeInterval:(double)arg4 participants:(id)arg5;
- (id)frequentRepliesForForChatIdentifiers:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (BOOL)hasStoredMessageWithGUID:(id)arg1;
- (id)init;
- (BOOL)isSuppressDatabaseUpdates;
- (id)itemWithGUID:(id)arg1;
- (long long)lastFailedMessageID;
- (id)lastMessageWithHandles:(id)arg1 onServices:(id)arg2;
- (id)lastMessageWithRoomNames:(id)arg1 onServices:(id)arg2;
- (void)markMessageAsDeduplicated:(id)arg1;
- (id)markMessagesAsReadWithHandle:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5;
- (id)markMessagesAsReadWithHandles:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5;
- (id)markMessagesAsReadWithRoomNames:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5;
- (id)markMessagesAsReadWithRoomname:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5;
- (id)messageActionItemsForOriginalMessageGUID:(id)arg1;
- (id)messageWithGUID:(id)arg1;
- (id)messageWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (id)messagesWithGUIDs:(id)arg1;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned int)arg4;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned int)arg4;
- (id)modificationStamp;
- (void)performInitialHousekeeping;
- (void)postCountChanges;
- (void)rebuildLastFailedMessageID;
- (void)rebuildUnreadMessageCount;
- (void)registerTransfersWithGUIDs:(id)arg1 forMessageGUID:(id)arg2;
- (void)resolveUnformattedRepresentationsForHandles:(id)arg1 onService:(id)arg2 message:(id)arg3 completionBlock:(id)arg4;
- (void)setModificationStamp:(id)arg1;
- (void)setSuppressDatabaseUpdates:(BOOL)arg1;
- (id)storeItem:(id)arg1 forceReplace:(BOOL)arg2;
- (id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5;
- (long long)unreadMessagesCount;
- (id)unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3 fallbackGUID:(id)arg4;
- (id)unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3 fallbackGUID:(id)arg4;
- (void)updateFileTransfer:(id)arg1;
- (void)updateStamp;
- (void)updateUnformattedID:(id)arg1 forBuddyID:(id)arg2 onService:(id)arg3;

@end

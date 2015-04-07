/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

@class IDSService, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface SUBMessageEndpoint : NSObject <IDSServiceDelegate, SUBMessageEndpoint> {
    NSMutableDictionary *_messageHandlers;
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSMutableDictionary *_pendingMessageCompletions;
    NSMutableDictionary *_pendingMessageReplies;
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_service;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSMutableDictionary * messageHandlers;
@property(retain,readonly) NSObject<OS_dispatch_queue> * messageQueue;
@property(retain) NSMutableDictionary * pendingMessageCompletions;
@property(retain) NSMutableDictionary * pendingMessageReplies;
@property(retain,readonly) NSObject<OS_dispatch_queue> * queue;
@property(retain,readonly) IDSService * service;
@property(readonly) Class superclass;

+ (id)sharedEndpoint;

- (void)dealloc;
- (id)init;
- (id)messageHandlers;
- (id)messageQueue;
- (id)pendingMessageCompletions;
- (id)pendingMessageReplies;
- (id)queue;
- (void)resume;
- (void)sendErrorReply:(id)arg1 toMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completion:(id)arg2;
- (void)sendMessage:(id)arg1 isCritical:(BOOL)arg2 completion:(id)arg3;
- (id)sendMessage:(id)arg1 replyingTo:(id)arg2 expectingResponse:(BOOL)arg3 isCritical:(BOOL)arg4 error:(id*)arg5;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)sendReply:(id)arg1 toMessage:(id)arg2;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setHandler:(id)arg1 forMessagesOfType:(id)arg2;
- (void)setHandler:(id)arg1 forMessagesOfTypes:(id)arg2;
- (void)setMessageHandlers:(id)arg1;
- (void)setPendingMessageCompletions:(id)arg1;
- (void)setPendingMessageReplies:(id)arg1;
- (void)suspend;

@end

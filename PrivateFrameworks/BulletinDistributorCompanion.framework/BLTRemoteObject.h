/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class BLTPBProtobufSequenceNumberManager, IDSDevice, IDSService, NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BLTRemoteObject : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    IDSDevice *_defaultPairedDevice;
    BOOL _full;
    NSObject<OS_dispatch_queue> *_idsQueue;
    NSMutableDictionary *_idsRequestMessageTypeToSelector;
    NSMutableDictionary *_idsSendIDToCompletionHandler;
    NSMutableDictionary *_idsSendIDToResponseHandler;
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;
    NSLock *_sequenceNumberSendLock;
    IDSService *_service;
}

@property(retain) NSObject<OS_dispatch_queue> * clientQueue;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) IDSDevice * defaultPairedDevice;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BLTPBProtobufSequenceNumberManager * sequenceNumberManager;
@property(readonly) IDSService * service;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id)arg7 andResponse:(id)arg8;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id)arg7 andResponse:(id)arg8;
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(int)arg3;
- (id)clientQueue;
- (unsigned int)connectionStatus;
- (void)dealloc;
- (id)defaultPairedDevice;
- (void)handleAckInitialSequenceNumberRequest:(id)arg1;
- (void)handleIncomingMessage:(id)arg1;
- (bool)hasSentUDID;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2 andClientQueue:(id)arg3;
- (void)registerProtobufHandlers;
- (void)saveHasSentUDID;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(id)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(id)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(id)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(id)arg6 andResponse:(id)arg7;
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(id)arg7;
- (id)sequenceNumberManager;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end

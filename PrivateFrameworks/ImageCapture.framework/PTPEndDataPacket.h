/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSData;



@interface PTPEndDataPacket : NSObject 
{
    unsigned short _operationCode;
    NSUInteger _transactionID;
    NSData *_data;
}


- (id)initWithUSBBuffer:(void*)arg1;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (void)setOperationCode:(unsigned short)arg1;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)contentForTCP;
- (unsigned long)transactionID;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned short)operationCode;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 andData:(id)arg3;
- (id)data;
- (id)description;
- (void)dealloc;
- (void)setData:(id)arg1;

@end
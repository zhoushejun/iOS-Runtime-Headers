/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPOperationRequestPacket : NSObject {
    unsigned long _dataPhaseInfo;
    int _numParameters;
    unsigned short _operationCode;
    unsigned long _parameters[5];
    unsigned long _transactionID;
}

- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (unsigned long)dataPhaseInfo;
- (id)description;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 numParameters:(unsigned long)arg4 parameters:(unsigned int*)arg5;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6 parameter4:(unsigned long)arg7;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6 parameter4:(unsigned long)arg7 parameter5:(unsigned long)arg8;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (int)numParameters;
- (unsigned short)operationCode;
- (unsigned long)parameter1;
- (unsigned long)parameter2;
- (unsigned long)parameter3;
- (unsigned long)parameter4;
- (unsigned long)parameter5;
- (unsigned long)parameterAtIndex:(unsigned long)arg1;
- (void)setDataPhaseInfo:(unsigned long)arg1;
- (void)setOperationCode:(unsigned short)arg1;
- (void)setParameter1:(unsigned long)arg1;
- (void)setParameter2:(unsigned long)arg1;
- (void)setParameter3:(unsigned long)arg1;
- (void)setParameter4:(unsigned long)arg1;
- (void)setParameter5:(unsigned long)arg1;
- (void)setPparameter:(unsigned long)arg1 atIndex:(unsigned long)arg2;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)transactionID;

@end

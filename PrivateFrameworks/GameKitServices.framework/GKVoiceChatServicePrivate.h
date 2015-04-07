/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class <GKVoiceChatClient>, GKVoiceChatDictionary, GKVoiceChatService, LoopbackSocketTunnel, NSLock, NSRecursiveLock, NSString, VideoConference;

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate, VideoConferenceRealTimeChannel> {
    int bundle;
    int chatMode;
    <GKVoiceChatClient> *client;
    BOOL clientHasRTChannel;
    NSLock *clientLock;
    VideoConference *conf;
    unsigned long curCallID;
    struct tagCONNRESULT { 
        unsigned int dwCallID; 
        int iResultCount; 
        int iRole; 
        unsigned int dwRemoteCallID; 
        int proto; 
        int bIfRelay; 
        unsigned short wRelayServType; 
        unsigned short wChannelNumber; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbLocal; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemote; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbDst; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemoteSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRelayExt; 
        unsigned int dwRTT; 
        int bIfLocalCellularQoS; 
        int bIfRemoteCellularQoS; 
        int iLocalCellTech; 
        int iRemoteCellTech; 
        unsigned int dwCellularUniqueTag; 
        unsigned short wCellularMTU; 
        int bIfUpgrade; 
        int bIfPrimary; 
        int bIfReplaceOnly; 
        struct tagCONNRESULT {} *next; 
    } currentConnResult;
    int didUseICE;
    BOOL focus;
    BOOL forceNoICE;
    GKVoiceChatDictionary *incomingCallDict;
    BOOL inputMeteringEnabled;
    BOOL microphoneMuted;
    GKVoiceChatDictionary *outgoingCallDict;
    BOOL outputMeteringEnabled;
    NSString *sdp;
    int state;
    NSRecursiveLock *stateLock;
    LoopbackSocketTunnel *tunnel;
    GKVoiceChatService *wrapperService;
}

@property int chatMode;
@property id client;
@property(getter=isFocus) BOOL focus;
@property(readonly) float inputMeterLevel;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(readonly) double localBitrate;
@property(readonly) double localFramerate;
@property void* localVideoLayer;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(readonly) float outputMeterLevel;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(readonly) double remoteBitrate;
@property(readonly) double remoteFramerate;
@property float remoteParticipantVolume;
@property void* remoteVideoLayer;
@property int state;
@property GKVoiceChatService * wrapperService;

+ (id)defaultVoiceChatService;

- (BOOL)acceptCallID:(unsigned long)arg1 error:(id*)arg2;
- (int)chatMode;
- (void)cleanup;
- (id)client;
- (id)createInvite:(id*)arg1 toParticipant:(id)arg2 callID:(unsigned int*)arg3;
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned int)arg2 error:(id*)arg3;
- (void)dealloc;
- (void)denyCallID:(unsigned long)arg1;
- (void)forceNoICE:(BOOL)arg1;
- (void)getNSError:(id*)arg1 code:(int)arg2 description:(id)arg3 hResult:(long)arg4;
- (void)getNSError:(id*)arg1 code:(int)arg2 description:(id)arg3 reason:(id)arg4;
- (void)informClientOfInviteFromParticipant:(id)arg1;
- (void)informClientVoiceChatDidNotStart:(id)arg1;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (id)init;
- (float)inputMeterLevel;
- (BOOL)inviteIsValid:(id)arg1;
- (BOOL)isFocus;
- (BOOL)isInputMeteringEnabled;
- (BOOL)isMicrophoneMuted;
- (BOOL)isOutputMeteringEnabled;
- (double)localBitrate;
- (id)localDisplayNameForCallID:(unsigned long)arg1;
- (double)localFramerate;
- (void*)localVideoLayer;
- (float)outputMeterLevel;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (double)remoteBitrate;
- (id)remoteDisplayNameForCallID:(unsigned long)arg1;
- (double)remoteFramerate;
- (float)remoteParticipantVolume;
- (void*)remoteVideoLayer;
- (void)resetState;
- (void)setChatMode:(int)arg1;
- (void)setClient:(id)arg1;
- (void)setFocus:(BOOL)arg1;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setState:(int)arg1;
- (void)setWrapperService:(id)arg1;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(BOOL)arg2;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(BOOL)arg2 withCallID:(unsigned long)arg3;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (int)state;
- (void)stopVoiceChatProc:(id)arg1;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3;
- (id)wrapperService;

@end

/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {
    unsigned int _connectDuration;
    unsigned int _connectionType;
    unsigned int _currentNatType;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int isVideo : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
    } _has;
    unsigned int _isVideo;
    unsigned int _localNetworkConnection;
    unsigned int _onLockScreen;
    unsigned int _relayConnectDuration;
    unsigned int _remoteNatType;
    unsigned int _remoteNetworkConnection;
    unsigned long long _timestamp;
    unsigned int _usesRelay;
}

@property unsigned int connectDuration;
@property unsigned int connectionType;
@property unsigned int currentNatType;
@property(retain) NSString * guid;
@property BOOL hasConnectDuration;
@property BOOL hasConnectionType;
@property BOOL hasCurrentNatType;
@property(readonly) BOOL hasGuid;
@property BOOL hasIsVideo;
@property BOOL hasLocalNetworkConnection;
@property BOOL hasOnLockScreen;
@property BOOL hasRelayConnectDuration;
@property BOOL hasRemoteNatType;
@property BOOL hasRemoteNetworkConnection;
@property BOOL hasTimestamp;
@property BOOL hasUsesRelay;
@property unsigned int isVideo;
@property unsigned int localNetworkConnection;
@property unsigned int onLockScreen;
@property unsigned int relayConnectDuration;
@property unsigned int remoteNatType;
@property unsigned int remoteNetworkConnection;
@property unsigned long long timestamp;
@property unsigned int usesRelay;

- (unsigned int)connectDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentNatType;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasConnectDuration;
- (BOOL)hasConnectionType;
- (BOOL)hasCurrentNatType;
- (BOOL)hasGuid;
- (BOOL)hasIsVideo;
- (BOOL)hasLocalNetworkConnection;
- (BOOL)hasOnLockScreen;
- (BOOL)hasRelayConnectDuration;
- (BOOL)hasRemoteNatType;
- (BOOL)hasRemoteNetworkConnection;
- (BOOL)hasTimestamp;
- (BOOL)hasUsesRelay;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (unsigned int)localNetworkConnection;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)relayConnectDuration;
- (unsigned int)remoteNatType;
- (unsigned int)remoteNetworkConnection;
- (void)setConnectDuration:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectDuration:(BOOL)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasCurrentNatType:(BOOL)arg1;
- (void)setHasIsVideo:(BOOL)arg1;
- (void)setHasLocalNetworkConnection:(BOOL)arg1;
- (void)setHasOnLockScreen:(BOOL)arg1;
- (void)setHasRelayConnectDuration:(BOOL)arg1;
- (void)setHasRemoteNatType:(BOOL)arg1;
- (void)setHasRemoteNetworkConnection:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUsesRelay:(BOOL)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setRelayConnectDuration:(unsigned int)arg1;
- (void)setRemoteNatType:(unsigned int)arg1;
- (void)setRemoteNetworkConnection:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsesRelay:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)usesRelay;
- (void)writeTo:(id)arg1;

@end

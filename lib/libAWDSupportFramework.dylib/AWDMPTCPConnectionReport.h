/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray, NSString;

@interface AWDMPTCPConnectionReport : PBCodable <NSCopying> {
    NSString *_clientId;
    BOOL _establishmentCellularFallback;
    int _establishmentFailureError;
    BOOL _establishmentForcedTcpFallback;
    NSString *_establishmentInterfaceName;
    BOOL _establishmentSuccess;
    int _establishmentSynRetransmits;
    BOOL _establishmentTcpFallback;
    double _establishmentTime;
    struct { 
        unsigned int establishmentTime : 1; 
        unsigned int postConnectSessionLifetime : 1; 
        unsigned int timestamp : 1; 
        unsigned int establishmentFailureError : 1; 
        unsigned int establishmentSynRetransmits : 1; 
        unsigned int postConnectSubflowAttemptCount : 1; 
        unsigned int postConnectSubflowMaxSubflowCount : 1; 
        unsigned int subflowSwitchingCount : 1; 
        unsigned int establishmentCellularFallback : 1; 
        unsigned int establishmentForcedTcpFallback : 1; 
        unsigned int establishmentSuccess : 1; 
        unsigned int establishmentTcpFallback : 1; 
        unsigned int postConnectMultiHomed : 1; 
        unsigned int postConnectSingleHomed : 1; 
    } _has;
    NSMutableArray *_interfaceReports;
    BOOL _postConnectMultiHomed;
    double _postConnectSessionLifetime;
    BOOL _postConnectSingleHomed;
    int _postConnectSubflowAttemptCount;
    int _postConnectSubflowMaxSubflowCount;
    int _subflowSwitchingCount;
    NSMutableArray *_subflowSwitchingReports;
    unsigned long long _timestamp;
}

@property(retain) NSString * clientId;
@property BOOL establishmentCellularFallback;
@property int establishmentFailureError;
@property BOOL establishmentForcedTcpFallback;
@property(retain) NSString * establishmentInterfaceName;
@property BOOL establishmentSuccess;
@property int establishmentSynRetransmits;
@property BOOL establishmentTcpFallback;
@property double establishmentTime;
@property(readonly) BOOL hasClientId;
@property BOOL hasEstablishmentCellularFallback;
@property BOOL hasEstablishmentFailureError;
@property BOOL hasEstablishmentForcedTcpFallback;
@property(readonly) BOOL hasEstablishmentInterfaceName;
@property BOOL hasEstablishmentSuccess;
@property BOOL hasEstablishmentSynRetransmits;
@property BOOL hasEstablishmentTcpFallback;
@property BOOL hasEstablishmentTime;
@property BOOL hasPostConnectMultiHomed;
@property BOOL hasPostConnectSessionLifetime;
@property BOOL hasPostConnectSingleHomed;
@property BOOL hasPostConnectSubflowAttemptCount;
@property BOOL hasPostConnectSubflowMaxSubflowCount;
@property BOOL hasSubflowSwitchingCount;
@property BOOL hasTimestamp;
@property(retain) NSMutableArray * interfaceReports;
@property BOOL postConnectMultiHomed;
@property double postConnectSessionLifetime;
@property BOOL postConnectSingleHomed;
@property int postConnectSubflowAttemptCount;
@property int postConnectSubflowMaxSubflowCount;
@property int subflowSwitchingCount;
@property(retain) NSMutableArray * subflowSwitchingReports;
@property unsigned long long timestamp;

- (void)addInterfaceReports:(id)arg1;
- (void)addSubflowSwitchingReports:(id)arg1;
- (void)clearInterfaceReports;
- (void)clearSubflowSwitchingReports;
- (id)clientId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)establishmentCellularFallback;
- (int)establishmentFailureError;
- (BOOL)establishmentForcedTcpFallback;
- (id)establishmentInterfaceName;
- (BOOL)establishmentSuccess;
- (int)establishmentSynRetransmits;
- (BOOL)establishmentTcpFallback;
- (double)establishmentTime;
- (BOOL)hasClientId;
- (BOOL)hasEstablishmentCellularFallback;
- (BOOL)hasEstablishmentFailureError;
- (BOOL)hasEstablishmentForcedTcpFallback;
- (BOOL)hasEstablishmentInterfaceName;
- (BOOL)hasEstablishmentSuccess;
- (BOOL)hasEstablishmentSynRetransmits;
- (BOOL)hasEstablishmentTcpFallback;
- (BOOL)hasEstablishmentTime;
- (BOOL)hasPostConnectMultiHomed;
- (BOOL)hasPostConnectSessionLifetime;
- (BOOL)hasPostConnectSingleHomed;
- (BOOL)hasPostConnectSubflowAttemptCount;
- (BOOL)hasPostConnectSubflowMaxSubflowCount;
- (BOOL)hasSubflowSwitchingCount;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)interfaceReports;
- (id)interfaceReportsAtIndex:(unsigned int)arg1;
- (unsigned int)interfaceReportsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)postConnectMultiHomed;
- (double)postConnectSessionLifetime;
- (BOOL)postConnectSingleHomed;
- (int)postConnectSubflowAttemptCount;
- (int)postConnectSubflowMaxSubflowCount;
- (BOOL)readFrom:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setEstablishmentCellularFallback:(BOOL)arg1;
- (void)setEstablishmentFailureError:(int)arg1;
- (void)setEstablishmentForcedTcpFallback:(BOOL)arg1;
- (void)setEstablishmentInterfaceName:(id)arg1;
- (void)setEstablishmentSuccess:(BOOL)arg1;
- (void)setEstablishmentSynRetransmits:(int)arg1;
- (void)setEstablishmentTcpFallback:(BOOL)arg1;
- (void)setEstablishmentTime:(double)arg1;
- (void)setHasEstablishmentCellularFallback:(BOOL)arg1;
- (void)setHasEstablishmentFailureError:(BOOL)arg1;
- (void)setHasEstablishmentForcedTcpFallback:(BOOL)arg1;
- (void)setHasEstablishmentSuccess:(BOOL)arg1;
- (void)setHasEstablishmentSynRetransmits:(BOOL)arg1;
- (void)setHasEstablishmentTcpFallback:(BOOL)arg1;
- (void)setHasEstablishmentTime:(BOOL)arg1;
- (void)setHasPostConnectMultiHomed:(BOOL)arg1;
- (void)setHasPostConnectSessionLifetime:(BOOL)arg1;
- (void)setHasPostConnectSingleHomed:(BOOL)arg1;
- (void)setHasPostConnectSubflowAttemptCount:(BOOL)arg1;
- (void)setHasPostConnectSubflowMaxSubflowCount:(BOOL)arg1;
- (void)setHasSubflowSwitchingCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInterfaceReports:(id)arg1;
- (void)setPostConnectMultiHomed:(BOOL)arg1;
- (void)setPostConnectSessionLifetime:(double)arg1;
- (void)setPostConnectSingleHomed:(BOOL)arg1;
- (void)setPostConnectSubflowAttemptCount:(int)arg1;
- (void)setPostConnectSubflowMaxSubflowCount:(int)arg1;
- (void)setSubflowSwitchingCount:(int)arg1;
- (void)setSubflowSwitchingReports:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)subflowSwitchingCount;
- (id)subflowSwitchingReports;
- (id)subflowSwitchingReportsAtIndex:(unsigned int)arg1;
- (unsigned int)subflowSwitchingReportsCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

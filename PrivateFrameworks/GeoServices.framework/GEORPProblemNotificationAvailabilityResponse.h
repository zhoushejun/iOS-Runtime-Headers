/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemNotificationAvailabilityResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    } _has;
    int _statusCode;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _supportedProblemTypes;
}

@property BOOL hasStatusCode;
@property int statusCode;
@property(readonly) int* supportedProblemTypes;
@property(readonly) unsigned int supportedProblemTypesCount;

- (void)addSupportedProblemType:(int)arg1;
- (void)clearSupportedProblemTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setSupportedProblemTypes:(int*)arg1 count:(unsigned int)arg2;
- (int)statusCode;
- (int)supportedProblemTypeAtIndex:(unsigned int)arg1;
- (int*)supportedProblemTypes;
- (unsigned int)supportedProblemTypesCount;
- (void)writeTo:(id)arg1;

@end

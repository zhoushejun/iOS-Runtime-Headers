/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, GEOStructuredAddress, NSString;

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {
    GEOStructuredAddress *_addressHint;
    struct { 
        unsigned int muid : 1; 
        unsigned int resultProviderId : 1; 
    } _has;
    GEOLatLng *_locationHint;
    unsigned long long _muid;
    NSString *_placeNameHint;
    int _resultProviderId;
}

@property(retain) GEOStructuredAddress * addressHint;
@property(readonly) BOOL hasAddressHint;
@property(readonly) BOOL hasLocationHint;
@property BOOL hasMuid;
@property(readonly) BOOL hasPlaceNameHint;
@property BOOL hasResultProviderId;
@property(retain) GEOLatLng * locationHint;
@property unsigned long long muid;
@property(retain) NSString * placeNameHint;
@property int resultProviderId;

- (id)addressHint;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressHint;
- (BOOL)hasLocationHint;
- (BOOL)hasMuid;
- (BOOL)hasPlaceNameHint;
- (BOOL)hasResultProviderId;
- (unsigned int)hash;
- (id)initWithCoordinateHint:(struct { double x1; double x2; })arg1 addressHint:(id)arg2 placeNameHint:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1;
- (id)initWithMuid:(unsigned long long)arg1 addressHint:(id)arg2 locationHint:(struct { double x1; double x2; })arg3 placeNameHint:(id)arg4 resultProviderId:(int)arg5;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)locationHint;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeNameHint;
- (BOOL)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setAddressHint:(id)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasResultProviderId:(BOOL)arg1;
- (void)setLocationHint:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setResultProviderId:(int)arg1;
- (void)writeTo:(id)arg1;

@end

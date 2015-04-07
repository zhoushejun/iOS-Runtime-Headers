/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLLatLonPolygon : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    } _latitudes;
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    } _longitudes;
    double _tolerance;
}

@property(readonly) double* latitudes;
@property(readonly) unsigned int latitudesCount;
@property(readonly) double* longitudes;
@property(readonly) unsigned int longitudesCount;
@property double tolerance;

- (void)addLatitude:(double)arg1;
- (void)addLongitude:(double)arg1;
- (void)clearLatitudes;
- (void)clearLongitudes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (double)latitudeAtIndex:(unsigned int)arg1;
- (double*)latitudes;
- (unsigned int)latitudesCount;
- (double)longitudeAtIndex:(unsigned int)arg1;
- (double*)longitudes;
- (unsigned int)longitudesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLatitudes:(double*)arg1 count:(unsigned int)arg2;
- (void)setLongitudes:(double*)arg1 count:(unsigned int)arg2;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (void)writeTo:(id)arg1;

@end

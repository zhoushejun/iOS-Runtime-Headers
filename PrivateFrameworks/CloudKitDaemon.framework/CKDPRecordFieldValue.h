/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPAsset, CKDPDate, CKDPLocationCoordinate, CKDPPackage, CKDPRecordReference, NSData, NSMutableArray, NSString;

@interface CKDPRecordFieldValue : PBCodable <NSCopying> {
    CKDPAsset *_assetValue;
    NSData *_bytesValue;
    CKDPDate *_dateValue;
    double _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int signedValue : 1; 
        unsigned int type : 1; 
    } _has;
    NSMutableArray *_listValues;
    CKDPLocationCoordinate *_locationValue;
    CKDPPackage *_packageValue;
    CKDPRecordReference *_referenceValue;
    long long _signedValue;
    NSString *_stringValue;
    int _type;
}

@property(retain) CKDPAsset * assetValue;
@property(retain) NSData * bytesValue;
@property(retain) CKDPDate * dateValue;
@property double doubleValue;
@property(readonly) BOOL hasAssetValue;
@property(readonly) BOOL hasBytesValue;
@property(readonly) BOOL hasDateValue;
@property BOOL hasDoubleValue;
@property(readonly) BOOL hasLocationValue;
@property(readonly) BOOL hasPackageValue;
@property(readonly) BOOL hasReferenceValue;
@property BOOL hasSignedValue;
@property(readonly) BOOL hasStringValue;
@property BOOL hasType;
@property(retain) NSMutableArray * listValues;
@property(retain) CKDPLocationCoordinate * locationValue;
@property(retain) CKDPPackage * packageValue;
@property(retain) CKDPRecordReference * referenceValue;
@property long long signedValue;
@property(retain) NSString * stringValue;
@property int type;

- (void).cxx_destruct;
- (id)_descriptionForType:(int)arg1;
- (id)_prettyDictionaryRepresentation;
- (id)_prettyRepresentationFromObject:(id)arg1;
- (void)addListValue:(id)arg1;
- (id)assetValue;
- (id)bytesValue;
- (void)clearListValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (BOOL)hasAssetValue;
- (BOOL)hasBytesValue;
- (BOOL)hasDateValue;
- (BOOL)hasDoubleValue;
- (BOOL)hasLocationValue;
- (BOOL)hasPackageValue;
- (BOOL)hasReferenceValue;
- (BOOL)hasSignedValue;
- (BOOL)hasStringValue;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)listValueAtIndex:(unsigned int)arg1;
- (id)listValues;
- (unsigned int)listValuesCount;
- (id)locationValue;
- (void)mergeFrom:(id)arg1;
- (id)packageValue;
- (BOOL)readFrom:(id)arg1;
- (id)referenceValue;
- (void)setAssetValue:(id)arg1;
- (void)setBytesValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(BOOL)arg1;
- (void)setHasSignedValue:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setListValues:(id)arg1;
- (void)setLocationValue:(id)arg1;
- (void)setPackageValue:(id)arg1;
- (void)setReferenceValue:(id)arg1;
- (void)setSignedValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(int)arg1;
- (long long)signedValue;
- (id)stringValue;
- (int)type;
- (void)writeTo:(id)arg1;

@end

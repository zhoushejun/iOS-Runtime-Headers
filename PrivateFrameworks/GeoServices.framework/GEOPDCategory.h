/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOPDCategory : PBCodable <NSCopying> {
    NSString *_categoryId;
    struct { 
        unsigned int level : 1; 
    } _has;
    int _level;
    NSMutableArray *_localizedNames;
}

@property(retain) NSString * categoryId;
@property(readonly) BOOL hasCategoryId;
@property BOOL hasLevel;
@property int level;
@property(retain) NSMutableArray * localizedNames;

+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (BOOL)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;

- (void)addLocalizedName:(id)arg1;
- (id)categoryId;
- (void)clearLocalizedNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCategoryId;
- (BOOL)hasLevel;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)level;
- (id)localizedNameAtIndex:(unsigned int)arg1;
- (id)localizedNames;
- (unsigned int)localizedNamesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCategoryId:(id)arg1;
- (void)setHasLevel:(BOOL)arg1;
- (void)setLevel:(int)arg1;
- (void)setLocalizedNames:(id)arg1;
- (void)writeTo:(id)arg1;

@end

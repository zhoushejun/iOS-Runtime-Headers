/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSLocale;

@interface VKMapSnapshotRequest : NSObject {
    NSLocale *_locale;
    int _mapType;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _region;
    unsigned int _scale;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    unsigned int _tileGroupID;
}

@property(retain) NSLocale * locale;
@property int mapType;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property unsigned int scale;
@property struct CGSize { float x1; float x2; } size;
@property unsigned int tileGroupID;

- (id).cxx_construct;
- (struct VKRequestKey { struct { struct { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; int x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; unsigned int x4; unsigned short x5; })_requestKey;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locale;
- (int)mapType;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (unsigned int)scale;
- (void)setLocale:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(unsigned int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTileGroupID:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (unsigned int)tileGroupID;

@end

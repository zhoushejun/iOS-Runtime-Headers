/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class CIFilter, NSArray, NSString, SKTexture, SKTextureCache;

@interface SKTexture : NSObject <NSCoding, NSCopying> {
    int _alignment;
    unsigned int *_alphaMap;
    struct CGSize { 
        float width; 
        float height; 
    } _alphaMapSize;
    unsigned int _compressedFormat;
    int _compressedSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _cropOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _cropScale;
    BOOL _didGenerateMipmaps;
    BOOL _disableAlpha;
    CIFilter *_filter;
    NSString *_imgName;
    BOOL _isCompressed;
    BOOL _isData;
    BOOL _isPath;
    BOOL _isRotated;
    NSString *_originalAtlasName;
    SKTexture *_originalTexture;
    int _rowLength;
    NSArray *_searchPaths;
    BOOL _shouldGenerateMipmaps;
    NSString *_subTextureName;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _textCoords;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _textRect;
    SKTextureCache *_textureCache;
    unsigned int _textureTarget;
}

@property(readonly) unsigned int* alphaMap;
@property(readonly) struct CGSize { float x1; float x2; } alphaMapSize;
@property struct CGPoint { float x1; float x2; } cropOffset;
@property struct CGPoint { float x1; float x2; } cropScale;
@property BOOL disableAlpha;
@property int filteringMode;
@property(readonly) BOOL hasAlpha;
@property(readonly) NSString * imageNameOrPath;
@property(readonly) BOOL isRepeatable;
@property BOOL isRotated;
@property(copy) NSString * originalAtlasName;
@property(readonly) struct CGSize { float x1; float x2; } pixelSize;
@property(copy) NSString * subTextureName;
@property unsigned int textureTarget;
@property(readonly) BOOL useAlpha;
@property BOOL usesMipmaps;
@property int wrapMode;

+ (void)_addTextureToPreloadlist:(id)arg1;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { float x1; float x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)_textureWithImageNamed:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 bitsPerPixel:(unsigned int)arg3 hasAlpha:(BOOL)arg4;
+ (void)deleteUnusedTextures;
+ (id)lookupTextureCacheForName:(id)arg1;
+ (void)preloadTextures;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)registerTextureCache:(id)arg1 forName:(id)arg2;
+ (id)textureNoiseWithSmoothness:(float)arg1 size:(struct CGSize { float x1; float x2; })arg2 grayscale:(BOOL)arg3;
+ (id)textureVectorNoiseWithSmoothness:(float)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 pointSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 flipped:(BOOL)arg3;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithImageNamed:(id)arg1;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)textureWithImagePath:(id)arg1;
+ (id)textureWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTexture:(id)arg2;
+ (void)updateTextures;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_copyImageData;
- (struct CGImage { }*)_createCGImage;
- (void)_ensureImageData;
- (id)_generateNormalMap:(float)arg1 contrast:(float)arg2 multiPass:(unsigned long)arg3;
- (id)_initWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)_loadOnTextureQueue;
- (struct CGImage { }*)_newTextureFromGLCache;
- (struct CGImage { }*)_rotateCGImage:(struct CGImage { }*)arg1;
- (void)_savePngFromGLCache:(id)arg1;
- (id)_textureCache;
- (unsigned int*)alphaMap;
- (struct CGSize { float x1; float x2; })alphaMapSize;
- (struct CGImage { }*)alphaMask;
- (BOOL)alphaTestX:(float)arg1 y:(float)arg2;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { float x1; float x2; })cropOffset;
- (struct CGPoint { float x1; float x2; })cropScale;
- (void)dealloc;
- (id)description;
- (BOOL)disableAlpha;
- (void)encodeWithCoder:(id)arg1;
- (int)filteringMode;
- (void)generateAlphaMapOfSize:(struct CGSize { float x1; float x2; })arg1 fromImage:(struct CGImage { }*)arg2;
- (int)glTextureId;
- (BOOL)hasAlpha;
- (id)imageNameOrPath;
- (id)imgName;
- (id)init;
- (void)initTextureCacheWithImageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithImagePath:(id)arg1;
- (BOOL)isInMemory;
- (BOOL)isRepeatable;
- (BOOL)isRotated;
- (void)load;
- (void)loadImageData;
- (void)loadImageDataFromCGImage:(struct CGImage { }*)arg1 pointsSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)loadImageDataFromPVRData:(id)arg1;
- (BOOL)loadImageDataFromPVRGZData:(id)arg1;
- (id)originalAtlasName;
- (struct CGSize { float x1; float x2; })pixelSize;
- (void)preload;
- (void)preloadWithCompletionHandler:(id)arg1;
- (void)setCropOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCropScale:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDisableAlpha:(BOOL)arg1;
- (void)setFilteringMode:(int)arg1;
- (void)setIsRotated:(BOOL)arg1;
- (void)setOriginalAtlasName:(id)arg1;
- (void)setSubTextureName:(id)arg1;
- (void)setTextureDimension:(const struct CGSize { float x1; float x2; }*)arg1 withPixelSize:(const struct CGSize { float x1; float x2; }*)arg2;
- (void)setTextureTarget:(unsigned int)arg1;
- (void)setUsesMipmaps:(BOOL)arg1;
- (void)setWrapMode:(int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)subTextureName;
- (id)textureByApplyingCIFilter:(id)arg1;
- (id)textureByGeneratingNormalMap;
- (id)textureByGeneratingNormalMapWithSmoothness:(float)arg1 contrast:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textureRect;
- (unsigned int)textureTarget;
- (void)unload;
- (BOOL)useAlpha;
- (BOOL)usesMipmaps;
- (int)wrapMode;

@end

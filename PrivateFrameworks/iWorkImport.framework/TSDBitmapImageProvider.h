/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_semaphore>;

@interface TSDBitmapImageProvider : TSDImageProvider {
    long mCheckIfValidToken;
    unsigned int mDPI;
    struct CGImage { } *mHalfSizeImage;
    struct CGImage { } *mImage;
    NSObject<OS_dispatch_semaphore> *mImageLock;
    struct CGImageSource { } *mImageSource;
    BOOL mIsOpaque;
    BOOL mIsValid;
    struct CGSize { 
        float width; 
        float height; 
    } mNaturalSize;
    int mOrientation;
    struct CGImage { } *mQuarterSizeImage;
}

+ (struct CGImage { }*)CGImageForImageData:(id)arg1;
+ (id)TSUImageForImageData:(id)arg1;
+ (void)clearCacheForData:(id)arg1;
+ (void)initialize;
+ (struct CGSize { float x1; float x2; })naturalSizeForImageData:(id)arg1;
+ (id)p_cacheStringForData:(id)arg1;
+ (struct CGImageSource { }*)p_newImageSourceFromCacheForData:(id)arg1 withFilenameSuffix:(id)arg2;
+ (struct CGImageSource { }*)p_newImageSourceFromFilePath:(id)arg1;

- (struct CGImage { }*)CGImageForNaturalSize;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { float x1; float x2; })arg1 inContext:(struct CGContext { }*)arg2 orLayer:(id)arg3;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { float x1; float x2; })arg1 lowQuality:(BOOL)arg2;
- (struct CGImageSource { }*)CGImageSource;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })dpiAdjustedFillSize;
- (struct CGSize { float x1; float x2; })dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)flush;
- (BOOL)hasFlushableContent;
- (void)i_commonInit;
- (unsigned int)imageDPI;
- (BOOL)isOpaque;
- (BOOL)isValid;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)orientation;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource { }*)arg1 andImage:(struct CGImage { }*)arg2;
- (void)p_loadFullSizedImageIfNecessary;
- (void)p_loadImageMetadata;
- (struct CGImage { }*)p_loadOrCreateResampledImageWithScale:(unsigned int)arg1 andCGImage:(struct CGImage {}**)arg2;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImageSource { }*)p_newCGImageSource;
- (struct CGImageSource { }*)p_newCGImageSourceForTemporaryUse;
- (struct CGImage { }*)p_newImageFromSource:(struct CGImageSource { }*)arg1;
- (struct CGImageSource { }*)p_newImageOfSize:(struct CGSize { float x1; float x2; })arg1 andWriteToCacheWithSuffix:(id)arg2;
- (struct CGImage { }*)p_resampledImageOfSizeType:(int)arg1;

@end

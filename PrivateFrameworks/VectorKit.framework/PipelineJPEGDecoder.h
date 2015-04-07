/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface PipelineJPEGDecoder : NSObject {
    int current420SurfaceCount;
    struct CGSize { 
        float width; 
        float height; 
    } imageSize;
    unsigned int maxJPEGSize;
    struct { 
        void *opaque1; 
        long opaque2; 
    } pool420;
    struct { 
        void *opaque1; 
        long opaque2; 
    } poolJPEG;
    unsigned int requestedImageCount;
}

@property unsigned int maxJPEGSize;

+ (struct __IOSurfaceAccelerator { }*)_createAccelerator;
+ (struct __IOSurfaceAccelerator { }*)_getPooledSurfaceAccelerator;
+ (id)_hardwareSemaphore;
+ (id)_hardwareSemaphoreWaitQueue;
+ (void)_poolSurfaceAccelerator:(struct __IOSurfaceAccelerator { }*)arg1;
+ (struct { void *x1; long x2; }*)_transferSessionPool;

- (struct __IOSurface { }*)_create420Surface;
- (struct __IOSurface { }*)_createJPEGSurface;
- (void)_decodeJPEG:(id)arg1 withInputSurface:(struct __IOSurface { }*)arg2 toIOSurface:(struct __IOSurface { }*)arg3;
- (struct __IOSurface { }*)_getPooled420Surface;
- (struct __IOSurface { }*)_getPooledJPEGSurfaceOfSize:(unsigned int)arg1;
- (void)_pool420Surface:(struct __IOSurface { }*)arg1;
- (void)_poolJPEGSurface:(struct __IOSurface { }*)arg1;
- (void)_receivedMemoryWarning:(id)arg1;
- (BOOL)_remove420Surface;
- (BOOL)_removeJPEGSurface;
- (void)dealloc;
- (void)decodeSurfaceFromJPEGData:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)decodeSurfaceFromJPEGPath:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 cachedCount:(int)arg2;
- (unsigned int)maxJPEGSize;
- (struct __IOSurface { }*)newSurfaceFromJPEGData:(id)arg1;
- (void)returnToPool:(struct __IOSurface { }*)arg1;
- (void)setMaxJPEGSize:(unsigned int)arg1;

@end

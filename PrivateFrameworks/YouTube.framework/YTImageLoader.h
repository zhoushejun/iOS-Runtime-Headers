/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNotificationCenter, NSTimer;

@interface YTImageLoader : NSObject {
    NSLock *_cacheLock;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imageCacheLRU;
    NSMutableDictionary *_largeThumbnailImageCache;
    NSMutableArray *_loadQueue;
    NSTimer *_loadStatusNotificationTimer;
    struct __CFRunLoop { } *_loaderRunLoop;
    struct __CFRunLoopSource { } *_loaderSource;
    NSMutableSet *_loadsInProgress;
    NSNotificationCenter *_notificationCenter;
    NSMutableDictionary *_pluginImageCache;
    NSLock *_queueLock;
    NSMutableDictionary *_roundedThumbnailImageCache;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } _startupCondition;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _startupLock;
}

+ (id)sharedImageLoader;

- (void)_imageLoadFinished:(id)arg1;
- (struct CGImage { }*)_largeThumbnailOverlay;
- (void)_loadImageURL:(id)arg1 videoID:(id)arg2;
- (void)_loadingStatusChanged;
- (BOOL)_locked_URLIsLoading:(id)arg1;
- (void)_locked_imageLoadStarted:(id)arg1;
- (id)_locked_loadImageCache:(id)arg1;
- (void)_locked_loadImageForURL:(id)arg1 videoID:(id)arg2;
- (id)_locked_saveImageCache:(id)arg1;
- (void)_mainThread_postLoadingStatusChanged;
- (void)_postImageLoadedNotification:(id)arg1;
- (void)_postLoadingStatusChanged;
- (void)_setImageData:(id)arg1 videoID:(id)arg2 forURL:(id)arg3 cacheLocked:(BOOL)arg4;
- (void)_startLoader;
- (struct CGImage { }*)createRoundedThumbnailWithImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)createSheenedThumbnailWithImage:(struct CGImage { }*)arg1 overlay:(struct CGImage { }*)arg2 width:(int)arg3 height:(int)arg4;
- (struct CGImage { }*)imageForURL:(id)arg1 rounded:(BOOL)arg2 videoID:(id)arg3 loadIfAbsent:(BOOL)arg4;
- (id)init;
- (BOOL)isLoadingImages;
- (struct CGImage { }*)largeImageForURL:(id)arg1 videoID:(id)arg2 loadIfAbsent:(BOOL)arg3;
- (void)loadCache:(id)arg1;
- (id)notificationCenter;
- (struct CGImage { }*)pluginImageForURL:(id)arg1 videoID:(id)arg2 loadIfAbsent:(BOOL)arg3;
- (void)saveCache:(id)arg1;

@end

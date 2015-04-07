/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CIBurstYUVImage, NSMutableArray, NSMutableDictionary;

@interface CIBurstThumbnailCluster : NSObject {
    struct __IOSurface { } *_fullsizeJpegData;
    NSMutableArray *burstImages;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id completionBlock;

    CIBurstYUVImage *image;
    NSMutableDictionary *imageProps;
}

@property NSMutableArray * burstImages;
@property id completionBlock;
@property struct __IOSurface { }* fullsizeJpegData;
@property CIBurstYUVImage * image;
@property NSMutableDictionary * imageProps;

- (void)addItemsFromCluster:(id)arg1;
- (id)burstImages;
- (id)completionBlock;
- (float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3;
- (void)dealloc;
- (struct __IOSurface { }*)fullsizeJpegData;
- (id)image;
- (id)imageProps;
- (id)init;
- (id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(id)arg5;
- (void)releaseImage;
- (void)setBurstImages:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setFullsizeJpegData:(struct __IOSurface { }*)arg1;
- (void)setImage:(id)arg1;
- (void)setImageProps:(id)arg1;

@end

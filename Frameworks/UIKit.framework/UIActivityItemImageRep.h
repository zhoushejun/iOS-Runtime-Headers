/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface UIActivityItemImageRep : NSObject {
    id _asset;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dataProvider;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _thumbnailProvider;

}

@property(retain) id asset;
@property(copy) id dataProvider;
@property(copy) id thumbnailProvider;

+ (id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(id)arg2 dataProvider:(id)arg3;

- (id)asset;
- (id)data;
- (id)dataProvider;
- (void)dealloc;
- (void)setAsset:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setThumbnailProvider:(id)arg1;
- (id)thumbnail;
- (id)thumbnailProvider;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScreenshotDataConsumer : SKUIImageDataConsumer {
    BOOL _drawsBorder;
    BOOL _forcesPortrait;
    struct CGSize { 
        float width; 
        float height; 
    } _screenshotSize;
}

@property(readonly) struct CGSize { float x1; float x2; } constraintSize;
@property BOOL drawsBorder;
@property BOOL forcesPortrait;

+ (id)consumer;
+ (id)consumerWithScreenshotSize:(struct CGSize { float x1; float x2; })arg1;

- (struct CGSize { float x1; float x2; })constraintSize;
- (BOOL)drawsBorder;
- (BOOL)forcesPortrait;
- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)imageForImage:(id)arg1;
- (void)setDrawsBorder:(BOOL)arg1;
- (void)setForcesPortrait:(BOOL)arg1;

@end

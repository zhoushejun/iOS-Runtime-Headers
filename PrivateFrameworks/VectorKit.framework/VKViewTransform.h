/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKViewVolume;

@interface VKViewTransform : NSObject {
    struct shared_ptr<vk::ViewTransform> { 
        struct ViewTransform {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _viewTransform;
}

@property(readonly) float contentScale;
@property(readonly) int coordinateSpace;
@property(readonly) float degreesFromPlumb;
@property(readonly) double farPlaneDistance;
@property(readonly) double focusDistance;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } focusPoint;
@property(readonly) struct  forwardVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) float heading;
@property(readonly) BOOL isGeocentric;
@property(readonly) BOOL isMercator;
@property(readonly) double nearPlaneDistance;
@property(readonly) struct  rightVector; /* unknown property attribute:  1>=[3d]} */
@property const struct { double x1[4][4]; }* scaledViewProjectionMatrix;
@property(readonly) struct CGSize { float x1; float x2; } screenSizeInPixels;
@property(readonly) struct CGSize { float x1; float x2; } screenSizeInPoints;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } translation;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } translationInMercator;
@property(readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  upVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) const struct { double x1[4][4]; }* viewProjectionMatrix;
@property(readonly) VKViewVolume * viewVolume;
@property(readonly) double widthOverDepth;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)contentScale;
- (int)coordinateSpace;
- (float)degreesFromPlumb;
- (double)farPlaneDistance;
- (double)focusDistance;
- (struct VKPoint { double x1; double x2; double x3; })focusPoint;
- (struct Matrix<double, 3, 1> { double x1[3]; })forwardVector;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromPixel:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)heading;
- (id)init;
- (BOOL)isGeocentric;
- (BOOL)isMercator;
- (double)nearPlaneDistance;
- (struct { double x1[4][4]; })orientationMatrixAtWorldPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })rightVector;
- (const struct { double x1[4][4]; }*)scaledViewProjectionMatrix;
- (struct CGSize { float x1; float x2; })screenSizeInPixels;
- (struct CGSize { float x1; float x2; })screenSizeInPoints;
- (void)setCoordinateSpace:(int)arg1 screenSizeInPixels:(struct CGSize { float x1; float x2; })arg2 contentScale:(float)arg3 frustum:(struct { BOOL x1; double x2; double x3; double x4; double x5; })arg4 position:(struct VKPoint { double x1; double x2; double x3; })arg5 orientation:(const struct { double x1[4][4]; }*)arg6 horizontalOffset:(float)arg7;
- (void)setScaledViewProjectionMatrix:(const struct { double x1[4][4]; }*)arg1;
- (struct VKPoint { double x1; double x2; double x3; })translation;
- (struct VKPoint { double x1; double x2; double x3; })translationInMercator;
- (struct Matrix<double, 3, 1> { double x1[3]; })upVector;
- (const struct { double x1[4][4]; }*)viewProjectionMatrix;
- (struct shared_ptr<vk::ViewTransform> { struct ViewTransform {} *x1; struct __shared_weak_count {} *x2; })viewTransform;
- (id)viewVolume;
- (double)widthOverDepth;

@end

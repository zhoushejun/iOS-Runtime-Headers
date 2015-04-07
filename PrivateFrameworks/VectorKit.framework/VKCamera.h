/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <VKCameraDelegate>, VKFootprint, VKViewVolume;

@interface VKCamera : NSObject {
    BOOL _allowDatelineWraparound;
    float _aspectRatio;
    double _canonicalPitch;
    <VKCameraDelegate> *_delegate;
    double _distanceToGroundAndFarClipPlaneIntersection;
    VKFootprint *_footprint;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _forward;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    struct { 
        BOOL orthographic; 
        double width; 
        double height; 
        double near; 
        double far; 
    } _frustum;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _gmPosition;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmViewProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmWorldMatrix;
    double _horizontalOffset;
    double _maxFarClipDistance;
    double _maxHeight;
    double _maxHeightNoPitch;
    double _maxPitch;
    double _minHeight;
    BOOL _needsUpdate;
    struct { 
        double v[4][4]; 
    } _orientation;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _position;
    struct { 
        double v[4][4]; 
    } _projectionMatrix;
    struct { 
        double v[4][4]; 
    } _projectionMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _projectionMatrixUnscaledWithoutOffset;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _puckPosition;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _right;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    double _terrainHeight;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _up;
    int _updateNumber;
    BOOL _updating;
    float _verticalFieldOfView;
    struct { 
        double v[4][4]; 
    } _viewMatrix;
    struct { 
        double v[4][4]; 
    } _viewMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _viewProjectionMatrix;
    struct { 
        double v[4][4]; 
    } _viewProjectionMatrixUnscaled;
    VKViewVolume *_viewVolume;
    struct { 
        double v[4][4]; 
    } _worldMatrix;
}

@property BOOL allowDatelineWraparound;
@property float aspectRatio;
@property struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; } cameraState;
@property double canonicalPitch;
@property <VKCameraDelegate> * delegate;
@property(readonly) double distanceToGroundAndFarClipPlaneIntersection;
@property(readonly) double farClipDistance;
@property(readonly) VKFootprint * footprint;
@property(readonly) struct  forwardVector; /* unknown property attribute:  1>=[3d]} */
@property double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property(readonly) struct { BOOL x1; double x2; double x3; double x4; double x5; } frustum;
@property(readonly) struct  gmForwardVector; /* unknown property attribute:  1>=[4d]} */
@property(readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct * gmPosition; /* unknown property attribute:  1>=[3d]} */
@property(readonly) const struct * gmProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property(readonly) struct  gmRightVector; /* unknown property attribute:  1>=[4d]} */
@property(readonly) struct  gmUpVector; /* unknown property attribute:  1>=[4d]} */
@property(readonly) const struct * gmViewMatrix; /* unknown property attribute:  4>=[16d]} */
@property(readonly) const struct * gmViewProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property(readonly) struct VKPoint { double x1; double x2; double x3; } groundPoint;
@property(readonly) float horizontalFieldOfView;
@property double horizontalOffset;
@property double maxHeight;
@property double maxHeightNoPitch;
@property double maxPitch;
@property double minHeight;
@property(readonly) double nearClipDistance;
@property const struct { double x1[4][4]; }* orientation;
@property(readonly) double pitch;
@property struct VKPoint { double x1; double x2; double x3; } position;
@property(readonly) const struct { double x1[4][4]; }* projectionMatrix;
@property(readonly) const struct { double x1[4][4]; }* projectionMatrixUnscaled;
@property(readonly) const struct { double x1[4][4]; }* projectionMatrixUnscaledWithoutOffset;
@property struct VKPoint { double x1; double x2; double x3; } puckPosition;
@property(readonly) struct  rightVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;
@property(readonly) double tanHalfHorizFOV;
@property(readonly) double tanHalfVerticalFOV;
@property double terrainHeight;
@property(readonly) struct  upVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) int updateNumber;
@property float verticalFieldOfView;
@property(readonly) const struct { double x1[4][4]; }* viewMatrix;
@property(readonly) const struct { double x1[4][4]; }* viewMatrixUnscaled;
@property(readonly) const struct { double x1[4][4]; }* viewProjectionMatrix;
@property(readonly) const struct { double x1[4][4]; }* viewProjectionMatrixUnscaled;
@property(readonly) VKViewVolume * viewVolume;
@property(readonly) const struct { double x1[4][4]; }* worldMatrix;
@property(readonly) double yaw;

- (id).cxx_construct;
- (void)_setPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)adjustClipPlanes;
- (BOOL)allowDatelineWraparound;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (float)aspectRatio;
- (struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; })cameraState;
- (double)canonicalPitch;
- (void)dealloc;
- (id)delegate;
- (double)depthForViewWidth:(double)arg1;
- (id)description;
- (double)displayZoomLevel;
- (double)distanceToGroundAndFarClipPlaneIntersection;
- (double)farClipDistance;
- (id)footprint;
- (struct Matrix<double, 3, 1> { double x1[3]; })forwardVector;
- (double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
- (struct { BOOL x1; double x2; double x3; double x4; double x5; })frustum;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmForwardVector;
- (struct Matrix<double, 3, 1> { double x1[3]; })gmGroundPointFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })gmGroundPointFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1 atGroundLevel:(double)arg2;
- (const struct Matrix<double, 3, 1> { double x1[3]; }*)gmPosition;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmProjectionMatrix;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmRightVector;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmUpVector;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmViewMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmViewProjectionMatrix;
- (struct VKPoint { double x1; double x2; double x3; })groundPlaneIntersectionPoint;
- (struct VKPoint { double x1; double x2; double x3; })groundPoint;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1 atGroundLevel:(double)arg2;
- (BOOL)hasChangedState:(struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; }*)arg1;
- (float)horizontalFieldOfView;
- (double)horizontalOffset;
- (id)init;
- (BOOL)isOuterWorldBoundsVisible;
- (BOOL)isWorldSpaceRectVisible:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)logCameraState;
- (double)maxHeight;
- (double)maxHeightNoPitch;
- (double)maxPitch;
- (float)maximumStyleZForRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (double)minHeight;
- (double)nearClipDistance;
- (const struct { double x1[4][4]; }*)orientation;
- (double)pitch;
- (struct VKPoint { double x1; double x2; double x3; })position;
- (const struct { double x1[4][4]; }*)projectionMatrix;
- (const struct { double x1[4][4]; }*)projectionMatrixUnscaled;
- (const struct { double x1[4][4]; }*)projectionMatrixUnscaledWithoutOffset;
- (struct VKPoint { double x1; double x2; double x3; })puckPosition;
- (struct Matrix<double, 3, 1> { double x1[3]; })rightVector;
- (double)screenHeightOfGroundAndFarClipPlaneIntersection;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (void)setAspectRatio:(float)arg1;
- (void)setCameraState:(struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; })arg1;
- (void)setCanonicalPitch:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1;
- (void)setHorizontalOffset:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setMaxHeightNoPitch:(double)arg1;
- (void)setMaxPitch:(double)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setNeedsUpdate;
- (void)setOrientation:(const struct { double x1[4][4]; }*)arg1;
- (void)setPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)setPuckPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)setTerrainHeight:(double)arg1;
- (void)setVerticalFieldOfView:(float)arg1;
- (double)tanHalfHorizFOV;
- (double)tanHalfVerticalFOV;
- (double)terrainHeight;
- (struct Matrix<double, 3, 1> { double x1[3]; })upVector;
- (void)updateIfNeeded;
- (int)updateNumber;
- (float)verticalFieldOfView;
- (const struct { double x1[4][4]; }*)viewMatrix;
- (const struct { double x1[4][4]; }*)viewMatrixUnscaled;
- (const struct { double x1[4][4]; }*)viewProjectionMatrix;
- (const struct { double x1[4][4]; }*)viewProjectionMatrixUnscaled;
- (id)viewVolume;
- (double)widthOfViewAtDepth:(double)arg1;
- (const struct { double x1[4][4]; }*)worldMatrix;
- (double)yaw;

@end

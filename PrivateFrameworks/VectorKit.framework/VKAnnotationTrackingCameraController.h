/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKTrackableAnnotation>, <VKTrackableAnnotationPresentation>, VKAnimation;

@interface VKAnnotationTrackingCameraController : VKCameraController {
    <VKTrackableAnnotation> *_annotation;
    <VKTrackableAnnotationPresentation> *_annotationPresentation;
    VKAnimation *_currentAnimation;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _currentAnimationEndCameraPosition;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _currentAnimationEndPoint;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _currentAnimationStartCameraPosition;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _currentAnimationStartPoint;
    VKAnimation *_currentHeadingAnimation;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    struct { 
        unsigned int hasPendingChange : 1; 
        unsigned int paused : 1; 
        unsigned int trackingHeading : 1; 
        unsigned int hasPendingHeadingChange : 1; 
        unsigned int isInitialRegionChange : 1; 
        unsigned int isJumpingToAnnotation : 1; 
        unsigned int annotationImplementsAccuracy : 1; 
        unsigned int annotationImplementsHeading : 1; 
        unsigned int annotationImplementsExpectedCoordinateUpdateInterval : 1; 
        unsigned int annotationImplementsExpectedHeadingUpdateInterval : 1; 
    } _flags;
    float _headingAnimationCompletedAngle;
    double _pendingChangeDuration;
    double _pendingHeadingChangeDuration;
    int _zoomStyle;
}

@property(readonly) <VKTrackableAnnotation> * annotation;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(getter=isTrackingHeading,readonly) BOOL trackingHeading;
@property int zoomStyle;

- (id).cxx_construct;
- (void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3;
- (void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2;
- (id)annotation;
- (void)dealloc;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)isAnimating;
- (BOOL)isTrackingHeading;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setZoomStyle:(int)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)stopTrackingAnnotation;
- (void)updateFramerate;
- (int)zoomStyle;

@end

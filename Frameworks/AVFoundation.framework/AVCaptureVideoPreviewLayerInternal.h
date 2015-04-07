/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureConnection, AVCaptureSession, AVWeakReference, CALayer, NSString;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    BOOL automaticallyAdjustsMirroring;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } captureDeviceTransform;
    int changeSeed;
    BOOL chromaNoiseReductionEnabled;
    AVCaptureConnection *connection;
    BOOL disableActions;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    NSString *gravity;
    BOOL isPaused;
    BOOL isPresentationLayer;
    BOOL mirrored;
    int orientation;
    float previewRotationDegrees;
    struct CGSize { 
        float width; 
        float height; 
    } previewSize;
    float rollAdjustment;
    struct CGSize { 
        float width; 
        float height; 
    } sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    AVCaptureSession *session;
    NSString *sinkID;
    CALayer *sublayer;
    BOOL visible;
    AVWeakReference *weakReference;
}

@end

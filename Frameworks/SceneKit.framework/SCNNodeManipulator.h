/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface SCNNodeManipulator : SCNManipulator {
    unsigned short _action;

  /* Error parsing encoded ivar type info: (?="axisMove"{?="selectedAxis"S"originalPosition""axisDirection""mouseDeltaVector"}"planeMove"{?="selectedPlane"S"originalPosition""planeNormal""pointInPlane""mouseDeltaVector"}"axisRotate"{?="selectedAxis"S"originalMouseLocation"{CGPoint="x"f"y"f}"rotationSign"f"originalRotation"{__C3DQuaternion="x"f"y"f"z"f"s"f}}) */
    union { 
        struct { 
            unsigned short selectedAxis; 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*originalPosition; 
        } axisMove; 
        struct { 
            unsigned short selectedPlane; 
            void*originalPosition; 
        } planeMove; 
        struct { 
            unsigned short selectedAxis; 
            struct CGPoint { 
                float x; 
                float y; 
            } originalMouseLocation; 
            float rotationSign; 
            struct __C3DQuaternion { 
                float x; 
                float y; 
                float z; 
                float s; 
            } originalRotation; 
        } axisRotate; 
    } _actionData;

    BOOL _isMouseDown;

  /* Error parsing encoded ivar type info: (C3DMatrix4x4="components"[16f]"m"[4]) */
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    } _xAxisToZAxisTransform;


  /* Error parsing encoded ivar type info: (C3DMatrix4x4="components"[16f]"m"[4]) */
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    } _xyPlaneToXZPlaneTransform;


  /* Error parsing encoded ivar type info: (C3DMatrix4x4="components"[16f]"m"[4]) */
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    } _xyPlaneToYZPlaneTransform;


  /* Error parsing encoded ivar type info: (C3DMatrix4x4="components"[16f]"m"[4]) */
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    } _yAxisToZAxisTransform;

}

- (id)copy;
- (void)draw;
- (id)init;
- (BOOL)mouseDown:(struct { id x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct SCNVector3 { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; float x6; })arg1;
- (BOOL)mouseDragged:(struct { id x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct SCNVector3 { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; float x6; })arg1;
- (BOOL)mouseMoved:(struct { id x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct SCNVector3 { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; float x6; })arg1;
- (BOOL)mouseUp:(struct { id x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct SCNVector3 { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; float x6; })arg1;

@end

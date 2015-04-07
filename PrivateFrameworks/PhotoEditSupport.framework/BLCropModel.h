/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCropModel : NSObject {
    float _angle;
    float _cropConstrain;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    struct CGSize { 
        float width; 
        float height; 
    } _nsqPhotoSize;
    struct CGSize { 
        float width; 
        float height; 
    } _photoSize;
}

@property float angle;
@property float cropConstrain;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cropRect;
@property(readonly) struct CGSize { float x1; float x2; } photoSize;

+ (BOOL)validateCropRectFor0Angle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })CGAffineTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })CGAffineTransformForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)adjustEdgeForDragAction:(int)arg1 withAmount:(struct CGPoint { float x1; float x2; })arg2 andLockAspectRatio:(BOOL)arg3;
- (float)angle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bestCropRectForIntialCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTrialRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFaceDictionaries:(id)arg3;
- (void)calculateCornerPoints:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)calculateCornerPoints:(struct CGPoint { float x1; float x2; }*)arg1 forCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)changeCropAspectRatioTo:(float)arg1 withNewCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })ciAffineTransformForSourceSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })ciCropRectForSourceSize:(struct CGSize { float x1; float x2; })arg1;
- (float)cropConstrain;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (id)croppedImageFromImage:(id)arg1;
- (struct CGSize { float x1; float x2; })croppedSize;
- (struct CGSize { float x1; float x2; })croppedSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasCrop;
- (id)initWithModel:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 andDictionary:(id)arg2;
- (struct CGPoint { float x1; float x2; })maxAllowableEdgeAdjustmentForDragAction:(int)arg1 withDirection:(struct CGPoint { float x1; float x2; })arg2 andLockAspectRatio:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maxAllowedPanWithCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)maxAllowedRotationFromPoint:(struct CGPoint { float x1; float x2; })arg1 counterClockwise:(BOOL)arg2;
- (float)maxAllowedScaleFromPoint:(struct CGPoint { float x1; float x2; })arg1 scaleUp:(BOOL)arg2;
- (float)maxAllowedTranslateWithDirection:(float)arg1;
- (struct CGImage { }*)newAspectedPreviewFromImage:(struct CGImage { }*)arg1 forSize:(struct CGSize { float x1; float x2; })arg2 withNewCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 andOrientation:(int)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })newCropRectForRatio:(float)arg1 withCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 andFaceDictionaries:(id)arg3;
- (struct CGImage { }*)newRenderedCroppedImageFromImage:(struct CGImage { }*)arg1 forSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGImage { }*)newRenderedCroppedImageFromImage:(struct CGImage { }*)arg1 forSize:(struct CGSize { float x1; float x2; })arg2 andOrientation:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })normalizedIntersectionPointsForCropWithLineFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })photoSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })recomputeCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forStraightenAngle:(float)arg2;
- (void)reset;
- (void)rotate:(float)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)scale:(float)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2;
- (int)scoreFaces:(id)arg1 ForTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)setAngle:(float)arg1;
- (void)setCropAndAngleFromCIAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 andCICrop:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forSourceSize:(struct CGSize { float x1; float x2; })arg3;
- (void)setCropConstrain:(float)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)touchedImageSidesForCurrentCrop;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForTrialCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)translate:(float)arg1 atAngle:(float)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADOrientedBounds : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    unsigned int mFlipX : 1;
    unsigned int mFlipY : 1;
    int mModeX;
    int mModeY;
    float mRotation;
}

+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;

- (id).cxx_construct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (struct CGSize { float x1; float x2; })boundingBoxSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)description;
- (BOOL)flipX;
- (BOOL)flipY;
- (unsigned int)hash;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrientedBounds:(id)arg1;
- (float)rotation;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFlipX:(BOOL)arg1;
- (void)setFlipY:(BOOL)arg1;
- (void)setOrientedBounds:(id)arg1;
- (void)setRotation:(float)arg1;
- (void)setXMode:(int)arg1;
- (void)setYMode:(int)arg1;
- (int)xMode;
- (int)yMode;

@end

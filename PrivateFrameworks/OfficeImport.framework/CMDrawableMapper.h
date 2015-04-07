/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMDrawableStyle, NSData, NSString, OADDrawable, OADOrientedBounds;

@interface CMDrawableMapper : CMMapper {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBox;
    OADDrawable *mDrawable;
    NSString *mExtension;
    NSData *mImageBinaryData;
    BOOL mIsCropped;
    BOOL mIsSupported;
    NSString *mName;
    OADOrientedBounds *mOrientedBounds;
    int mResourceType;
    float mRotation;
    NSString *mSourcePath;
    CMDrawableStyle *mStyle;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mUncroppedBox;
}

+ (id)orientedBoundsForDrawable:(id)arg1;

- (id).cxx_construct;
- (id)blipAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })box;
- (void)calculateUncroppedBox:(id)arg1;
- (id)convertMetafileToPdf;
- (void)dealloc;
- (id)initWithOadDrawable:(id)arg1 parent:(id)arg2;
- (id)initWithParent:(id)arg1;
- (BOOL)isCropped;
- (void)mapBounds;
- (void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(BOOL)arg3 withState:(id)arg4;
- (void)mapImageBinaryData;
- (void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (float)rotation;
- (id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2;
- (void)setBoundingBox;
- (void)setRotation:(float)arg1;
- (void)setWithOadImage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shapeTextBoxRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })uncroppedBox;

@end

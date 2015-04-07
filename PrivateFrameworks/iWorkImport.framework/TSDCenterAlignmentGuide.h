/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDSpacingGuideUILayer, TSDSwappableAxesGeometry;

@interface TSDCenterAlignmentGuide : TSDAlignmentGuide {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLeftGeneratingObjectRect;
    TSDSpacingGuideUILayer *mLeftSpacingUILayer;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mRightGeneratingObjectRect;
    TSDSpacingGuideUILayer *mRightSpacingUILayer;
    TSDSwappableAxesGeometry *mVerticalGeom;
}

- (BOOL)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (float)exactOffset;
- (id)initBetweenRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withGuideType:(int)arg3;
- (int)integerOffset;
- (id)layerWithICC:(id)arg1;

@end

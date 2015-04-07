/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class BLPEModel, NSDictionary, NSMutableDictionary;

@interface BLPhotoEffectsModel : NSObject {
    NSMutableDictionary *_adjustments;
    NSDictionary *_analysis;
    int _effectGroupIndex;
    float _effectValue;
    BOOL _hasAdjustments;
    BLPEModel *_model;
}

- (BOOL)canRenderCI;
- (id)ciImageWithPhotoEffectsForCIImage:(id)arg1 inDestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withPadding:(float)arg3;
- (id)ciImageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withPadding:(float)arg3;
- (void)dealloc;
- (BOOL)hasEdgeEffects;
- (BOOL)hasFastDownstreamEffects;
- (BOOL)hasInkEffects;
- (BOOL)hasPhotoEffects;
- (id)imageWithPhotoEffectsForImage:(id)arg1 inDestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withPadding:(float)arg3;
- (id)imageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withPadding:(float)arg3;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ignoreEdgeEffects:(BOOL)arg3;
- (BOOL)needsPadding;
- (float)paddingForSize:(struct CGSize { float x1; float x2; })arg1;

@end

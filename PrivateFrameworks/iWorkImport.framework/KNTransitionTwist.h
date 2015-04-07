/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;

@interface KNTransitionTwist : KNAnimationEffect <KNAnimationPluginArchiving, KNFrameAnimator> {
    NSArray *_bufferAttributes;
    TSDGLDataBuffer *_dataBuffer;
    TSDGLMotionBlurEffect *_motionBlurEffect;
    unsigned int _normalAttributeIndex;
    int _numPoints;
    unsigned int _positionAttributeIndex;
    unsigned int _prevPositionAttributeIndex;
    TSDGLShader *_shader;
    unsigned int _texCoordAttributeIndex;
    float _twistyness;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)createArrays:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (void)drawGrid:(id)arg1;
- (float)fx:(float)arg1 withPercent:(float)arg2;
- (id)initWithAnimationContext:(id)arg1;
- (void)p_drawTwistWithPercent:(float)arg1 texture:(id)arg2 oldTexture:(id)arg3;
- (void)p_teardown;
- (void)renderFrameWithContext:(id)arg1;
- (void)update:(id)arg1 withContext:(id)arg2;

@end

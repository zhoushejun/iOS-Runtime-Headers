/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class KNMagicMoveWrapper, KNMotionBlurWrapper, NSString;

@interface KNMagicMoveImpliedMotionPath : KNAnimationEffect <KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames, KNMagicMoveFrameAnimator, KNMagicMoveTransitionAnimator> {
    BOOL _isTextMorphEnabled;
    KNMagicMoveWrapper *_magicMoveWrapper;
    KNMotionBlurWrapper *_motionBlurWrapper;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _motionBlurWrapperSetupShaderBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _motionBlurWrapperTextureDrawOptionsBlock;

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
+ (BOOL)isCharacterAwareEffect;
+ (id)localizedMenuString:(int)arg1;
+ (id)obsoleteAnimationNames;
+ (int)rendererTypeForCapabilities:(id)arg1;
+ (BOOL)requiresBullets;
+ (BOOL)requiresPerspectiveTransform;
+ (id)supportedTypes;
+ (BOOL)supportsMorphTextures;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;
- (BOOL)p_isTextMorphWithTR:(id)arg1 match:(id)arg2;
- (void)p_setupMagicMoveWrapperWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)teardown;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildFireworksSystem : TSDGLParticleSystem {
    float _colorRandomness;
    BOOL _didDrawCenterBurst;
    float _fireworkStartingPositionX;
    struct { 
        float start; 
        float duration; 
    } _lifeSpan;
    float _lifeSpanMinDuration;
    float _maxDistance;
    struct CGSize { 
        float width; 
        float height; 
    } _randomParticleSizeMinMax;
    struct CGPoint { 
        float x; 
        float y; 
    } _randomParticleSpeedMinMax;
    struct { 
        float x; 
        float y; 
        float z; 
    } _startingColorRGB;
    struct CGPoint { 
        float x; 
        float y; 
    } _startingPoint;
}

@property float colorRandomness;
@property BOOL didDrawCenterBurst;
@property float fireworkStartingPositionX;
@property struct { float x1; float x2; } lifeSpan;
@property float lifeSpanMinDuration;
@property float maxDistance;
@property struct CGSize { float x1; float x2; } randomParticleSizeMinMax;
@property struct CGPoint { float x1; float x2; } randomParticleSpeedMinMax;
@property(readonly) struct CGPoint { float x1; float x2; } startingPoint;

+ (BOOL)willOverrideColors;
+ (BOOL)willOverrideStartingPoints;

- (struct { float x1; float x2; float x3; float x4; })colorAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)colorRandomness;
- (BOOL)didDrawCenterBurst;
- (float)fireworkStartingPositionX;
- (struct { float x1; float x2; })lifeSpan;
- (struct { float x1; float x2; })lifeSpanAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)lifeSpanMinDuration;
- (float)maxDistance;
- (struct CGSize { float x1; float x2; })randomParticleSizeMinMax;
- (struct CGPoint { float x1; float x2; })randomParticleSpeedMinMax;
- (float)scaleAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setColorRandomness:(float)arg1;
- (void)setDidDrawCenterBurst:(BOOL)arg1;
- (void)setFireworkStartingPositionX:(float)arg1;
- (void)setLifeSpan:(struct { float x1; float x2; })arg1;
- (void)setLifeSpanMinDuration:(float)arg1;
- (void)setMaxDistance:(float)arg1;
- (void)setRandomParticleSizeMinMax:(struct CGSize { float x1; float x2; })arg1;
- (void)setRandomParticleSpeedMinMax:(struct CGPoint { float x1; float x2; })arg1;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize { float x1; float x2; })arg2 reverseDrawOrder:(BOOL)arg3;
- (struct { float x1; float x2; float x3; })speedAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)speedMax;
- (struct CGPoint { float x1; float x2; })startingPoint;
- (struct CGPoint { float x1; float x2; })startingPointAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;

@end

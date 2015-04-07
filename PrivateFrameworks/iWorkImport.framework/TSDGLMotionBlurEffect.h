/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader, TSDGLState;

@interface TSDGLMotionBlurEffect : NSObject {
    TSDGLDataBuffer *_FBODataBuffer;
    TSDGLState *_GLState;
    TSDGLDataBuffer *_colorFBODataBuffer;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLFrameBuffer *_combinedFramebuffer;
    int _debugDrawMode;
    TSDGLShader *_defaultTextureShader;
    float _framebufferScale;
    struct CGSize { 
        float width; 
        float height; 
    } _framebufferSize;
    BOOL _isSingleObject;
    float _motionBlurStrength;
    int _originalViewport[4];
    struct CGSize { 
        float width; 
        float height; 
    } _slideSize;
    TSDGLShader *_velocityCollectionShader;
    TSDGLDataBuffer *_velocityFBODataBuffer;
    TSDGLFrameBuffer *_velocityFramebuffer;
    TSDGLShader *_velocityNeighborMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxVerticalShader;
    TSDGLDataBuffer *_velocitySquashedFBODataBuffer;
    TSDGLShader *_velocityTileMaxHorizontalShader;
    TSDGLShader *_velocityTileMaxVerticalShader;
    TSDGLShader *_velocityVisualizerShader;
}

@property(retain) TSDGLState * GLState;
@property int debugDrawMode;
@property float framebufferScale;
@property BOOL isSingleObject;
@property float motionBlurStrength;

- (id)GLState;
- (void)bindColorAndVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)dealloc;
- (int)debugDrawMode;
- (id)description;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (float)framebufferScale;
- (id)initWithFramebufferSize:(struct CGSize { float x1; float x2; })arg1 slideSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)isSingleObject;
- (float)motionBlurStrength;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_setupShaders;
- (void)p_setupVelocityFramebufferIfNecessary;
- (struct CGSize { float x1; float x2; })p_squashedVelocityFramebufferSize;
- (void)p_updateMaxVelocityInShadersWithScale:(float)arg1 isColorFBO:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })p_velocityFramebufferSize;
- (struct CGSize { float x1; float x2; })p_velocityFramebufferTextureScale;
- (void)setDebugDrawMode:(int)arg1;
- (void)setFramebufferScale:(float)arg1;
- (void)setGLState:(id)arg1;
- (void)setIsSingleObject:(BOOL)arg1;
- (void)setMotionBlurStrength:(float)arg1;
- (void)setupMotionBlurEffectIfNecessary;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)updateVelocityScaleInShader:(id)arg1;
- (struct CGSize { float x1; float x2; })velocityScaleForColorFBO:(BOOL)arg1;

@end

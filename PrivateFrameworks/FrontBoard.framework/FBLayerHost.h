/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBWindowContext;

@interface FBLayerHost : CALayerHost {
    float _rotation;
    float _scale;
    struct CGPoint { 
        float x; 
        float y; 
    } _translation;
    FBWindowContext *_windowContext;
}

@property float rotation;
@property float scale;
@property struct CGPoint { float x1; float x2; } translation;
@property(retain,readonly) FBWindowContext * windowContext;

- (void)dealloc;
- (id)description;
- (id)initWithWindowContext:(id)arg1;
- (float)rotation;
- (float)scale;
- (void)setDebug:(BOOL)arg1;
- (void)setRotation:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })translation;
- (id)windowContext;

@end

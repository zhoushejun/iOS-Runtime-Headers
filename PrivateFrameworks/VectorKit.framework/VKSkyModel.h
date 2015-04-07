/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, VKMapModel, VKStyleManager;

@interface VKSkyModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _fillColor;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _gglRenderState;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _horizonColor;
    struct shared_ptr<ggl::IndexDataTyped<unsigned short> > { 
        struct IndexDataTyped<unsigned short> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _indexData;
    VKMapModel *_mapModel;
    struct shared_ptr<ggl::Sky::SkyMesh> { 
        struct SkyMesh {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _mesh;
    BOOL _needsNewStyle;
    struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct ShaderSetup {} *x4; unsigned int x5; unsigned int x6; float x7; struct Mesh {} *x8; struct Range { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; struct Range {} *x10; unsigned int x11; } *_renderItem;
    struct shared_ptr<ggl::Sky::Shader::Setup> { 
        struct Setup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _shaderSetup;
    float _skyStartOffset;
    struct shared_ptr<ggl::Sky::SkyUniformData> { 
        struct SkyUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _uniformData;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property VKMapModel * mapModel;
@property(readonly) VKStyleManager * styleManager;
@property(readonly) Class superclass;

+ (BOOL)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct Matrix<float, 4, 1> { float x1[4]; })fillColor;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (struct Matrix<float, 4, 1> { float x1[4]; })horizonColor;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (id)mapModel;
- (void)setFillColor:(struct Matrix<float, 4, 1> { float x1[4]; })arg1;
- (void)setHorizonColor:(struct Matrix<float, 4, 1> { float x1[4]; })arg1;
- (void)setMapModel:(id)arg1;
- (BOOL)shouldLayoutWithoutStyleManager;
- (id)styleManager;
- (void)stylesheetDidChange;
- (void)updateStyle;

@end

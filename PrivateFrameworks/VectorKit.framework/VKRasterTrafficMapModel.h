/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface VKRasterTrafficMapModel : VKMapTileModel <VKMapLayer> {
    BOOL _needsTileStencil;
    int _sourceTileZtoStencilOffset;
    struct shared_ptr<md::StyleQuery> { 
        struct StyleQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _trafficDrawStyle;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> > { 
        struct __compressed_pair<vk::TrafficManager *, std::__1::default_delete<vk::TrafficManager> > { 
            struct TrafficManager {} *__first_; 
        } __ptr_; 
    } _trafficManager;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)commandBufferId;
- (void)dealloc;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (void)stylesheetDidChange;

@end

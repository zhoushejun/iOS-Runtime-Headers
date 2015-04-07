/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <VKBuildingFootprintMapModelDelegate>, NSString, VK3DObjectSubMapModel, VKAnimation, VKMercatorTerrainHeightCache, VKSkyModel;

@interface VKBuildingFootprintMapModel : VKVectorMapModel <VKMapLayer, VKMercatorTerrainHeightProvider> {
    struct RenderItemBatcher { 
        struct vector<ggl::Range, std::__1::allocator<ggl::Range> > { 
            struct Range {} *__begin_; 
            struct Range {} *__end_; 
            struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> > { 
                struct Range {} *__first_; 
            } __end_cap_; 
        } _activeRanges; 
        unsigned int _rangePoolCount; 
        struct vector<ggl::MultiRange, std::__1::allocator<ggl::MultiRange> > { 
            struct MultiRange {} *__begin_; 
            struct MultiRange {} *__end_; 
            struct __compressed_pair<ggl::MultiRange *, std::__1::allocator<ggl::MultiRange> > { 
                struct MultiRange {} *__first_; 
            } __end_cap_; 
        } _rangePool; 
        struct vector<ggl::Range, std::__1::allocator<ggl::Range> > { 
            struct Range {} *__begin_; 
            struct Range {} *__end_; 
            struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> > { 
                struct Range {} *__first_; 
            } __end_cap_; 
        } _activeRanges; 
        struct RenderItem {} *_prototype; 
        struct Pool<ggl::RenderItem> { 
            struct set<void *, std::__1::less<void *>, std::__1::allocator<void *> > { 
                struct __tree<void *, std::__1::less<void *>, std::__1::allocator<void *> > { 
                    struct __tree_node<void *, void *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<void *, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::less<void *> > { 
                        unsigned long __first_; 
                    } __pair3_; 
                } __tree_; 
            } mAllocatedSlabs; 
            unsigned int mElementsPerSlab; 
            unsigned int mSlabSize; 
            struct FreeList {} *mFreeElement; 
        } _pool; 
        unsigned int _rangePoolCount; 
        struct vector<ggl::MultiRange, std::__1::allocator<ggl::MultiRange> > { 
            struct MultiRange {} *__begin_; 
            struct MultiRange {} *__end_; 
            struct __compressed_pair<ggl::MultiRange *, std::__1::allocator<ggl::MultiRange> > { 
                struct MultiRange {} *__first_; 
            } __end_cap_; 
        } _rangePool; 
    } _batcher;
    float _brightness;
    int _buildingMode;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _buildingRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::Building::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::Building::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup> > > { 
            struct FragmentedPool<ggl::Building::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _buildingShaderSetupPool;
    struct unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, std::__1::allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList> > > { 
        struct __hash_table<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::__unordered_map_hasher<VKVectorTile *, std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::hash<VKVectorTile *>, true>, std::__1::__unordered_map_equal<VKVectorTile *, std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::equal_to<VKVectorTile *>, true>, std::__1::allocator<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<VKVectorTile *, std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::hash<VKVectorTile *>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<VKVectorTile *, std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::equal_to<VKVectorTile *>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _currentOccluders;
    <VKBuildingFootprintMapModelDelegate> *_delegate;
    VKAnimation *_fadeBuildingAnimation;
    BOOL _fadeTiles;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _fillRenderState;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _fillRenderStateWithBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingFlat::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingFlat::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::BuildingFlat::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingFlat::Shader::Setup> > > { 
            struct FragmentedPool<ggl::BuildingFlat::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _fillShaderSetupPool;
    VKMercatorTerrainHeightCache *_heightCache;
    BOOL _initializedStyles;
    VK3DObjectSubMapModel *_landmarksModel;
    float _maxLayeringHeight;
    float _minLayeringHeight;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup> > > { 
            struct FragmentedPool<ggl::BuildingPointyRoof::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _pointyRoofShaderSetupPool;
    struct unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, std::__1::allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList> > > { 
        struct __hash_table<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::__unordered_map_hasher<VKVectorTile *, std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::hash<VKVectorTile *>, true>, std::__1::__unordered_map_equal<VKVectorTile *, std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::equal_to<VKVectorTile *>, true>, std::__1::allocator<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<VKVectorTile *, std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::hash<VKVectorTile *>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<VKVectorTile *, std::__1::__hash_value_type<VKVectorTile *, OccluderGroupList>, std::__1::equal_to<VKVectorTile *>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _previousOccluders;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _shadowRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingShadow::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::BuildingShadow::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingShadow::Shader::Setup> > > { 
            struct FragmentedPool<ggl::BuildingShadow::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _shadowShaderSetupPool;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _shadowsRenderState;
    bool _shouldDraw3DBuildingsIn3DBuildingsRenderPass;
    bool _shouldDraw3DBuildingsInVectorBuildingsRenderPass;
    VKSkyModel *_skyModel;
    int _stencilRef;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _stroke3DRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PrefilteredLine::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PrefilteredLine::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::PrefilteredLine::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::PrefilteredLine::Shader::Setup> > > { 
            struct FragmentedPool<ggl::PrefilteredLine::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _stroke3DShaderSetupPool;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _strokeRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup> > > { 
            struct FragmentedPool<ggl::BuildingFlatStroke::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _strokeShaderSetupPool;
    VKAnimation *_styleChangeAnimation;
    BOOL _supports3DBuildings;
    BOOL _supports3DStrokes;
    BOOL _supportsBuildingShadows;
    BOOL _supportsStrokes;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _threeDRenderStateWithBlending;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _threeDRenderStateWithoutBlending;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _threeDStrokeRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::BuildingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingTop::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::BuildingTop::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::BuildingTop::Shader::Setup> > > { 
            struct FragmentedPool<ggl::BuildingTop::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _topShaderSetupPool;
    int _vectorType;
}

@property int buildingMode;
@property(copy,readonly) NSString * debugDescription;
@property <VKBuildingFootprintMapModelDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property BOOL fadeTiles;
@property(readonly) unsigned int hash;
@property(readonly) VKMercatorTerrainHeightCache * heightCache;
@property(retain) VK3DObjectSubMapModel * landmarksModel;
@property(retain) VKSkyModel * skyModel;
@property(readonly) Class superclass;
@property int vectorType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearOccluders;
- (void)_updateBuildingModeForContext:(id)arg1;
- (void)_updateStyles;
- (void)animateTiles:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 fromScale:(float)arg4 toScale:(float)arg5;
- (int)buildingMode;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (BOOL)fadeTiles;
- (void)flushPools;
- (void)generate2DBuildingRenderItemsForScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg3;
- (void)generate2DBuildingRenderItemsIfNecessaryForScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg3;
- (void)generate3DBuildingRenderItemsForScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg3;
- (void)generate3DBuildingRenderItemsIfNecessaryForScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg3;
- (void)generateRenderItemsForBuildingShadowsInScene:(id)arg1 withContext:(id)arg2 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (double)heightAtPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (id)heightCache;
- (id)init;
- (id)landmarksModel;
- (unsigned long long)mapLayerPosition;
- (double)maxTileHeightAtPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)removePersistingExitingTiles:(id)arg1;
- (void)reset;
- (void)resetPools;
- (void)setActive:(BOOL)arg1;
- (void)setBuildingMode:(int)arg1;
- (void)setBuildingMode:(int)arg1 animated:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFadeTiles:(BOOL)arg1;
- (void)setLandmarksModel:(id)arg1;
- (void)setSkyModel:(id)arg1;
- (void)setVectorType:(int)arg1;
- (id)skyModel;
- (void)stylesheetDidChange;
- (int)vectorType;
- (void)vectorTypeDidChange;
- (BOOL)wantsCategorizedSourceTiles;
- (void)willStartDrawingTiles:(id)arg1;
- (void)willStopDrawingTiles:(id)arg1;

@end

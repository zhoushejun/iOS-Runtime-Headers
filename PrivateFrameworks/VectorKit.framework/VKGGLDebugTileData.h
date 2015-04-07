/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface VKGGLDebugTileData : NSObject {
    unsigned int _coastLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _coastLineMesh;
    unsigned int _coastLineVertCount;
    unsigned int _junctionCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _junctionsPointsMesh;
    unsigned int _namedLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _namedLineMesh;
    unsigned int _namedLineVertCount;
    unsigned int _overpassCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _overpassPointsMesh;
    unsigned int _poiCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _poiPointsMesh;
    unsigned int _polygonCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _polygonLineMesh;
    unsigned int _polygonVertCount;
    unsigned int _unnamedLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _unnamedLineMesh;
    unsigned int _unnamedLineVertCount;
    unsigned int _vertexCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _verticesPointsMesh;
}

@property(readonly) unsigned int coastLineCount;
@property(readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }* coastLineMesh;
@property(readonly) unsigned int coastLineVertCount;
@property(readonly) unsigned int junctionCount;
@property(readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }* junctionsPointsMesh;
@property(readonly) unsigned int namedLineCount;
@property(readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }* namedLineMesh;
@property(readonly) unsigned int namedLineVertCount;
@property(readonly) unsigned int overpassCount;
@property(readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }* overpassPointsMesh;
@property(readonly) unsigned int poiCount;
@property(readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }* poiPointsMesh;
@property(readonly) unsigned int polygonCount;
@property(readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }* polygonLineMesh;
@property(readonly) unsigned int polygonVertCount;
@property(readonly) unsigned int unnamedLineCount;
@property(readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }* unnamedLineMesh;
@property(readonly) unsigned int unnamedLineVertCount;
@property(readonly) unsigned int vertexCount;
@property(readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }* verticesPointsMesh;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_fillInDebugData:(id)arg1;
- (unsigned int)coastLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)coastLineMesh;
- (unsigned int)coastLineVertCount;
- (id)initWithTile:(id)arg1;
- (unsigned int)junctionCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)junctionsPointsMesh;
- (unsigned int)namedLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)namedLineMesh;
- (unsigned int)namedLineVertCount;
- (unsigned int)overpassCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)overpassPointsMesh;
- (unsigned int)poiCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)poiPointsMesh;
- (unsigned int)polygonCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)polygonLineMesh;
- (unsigned int)polygonVertCount;
- (unsigned int)unnamedLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)unnamedLineMesh;
- (unsigned int)unnamedLineVertCount;
- (unsigned int)vertexCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)verticesPointsMesh;

@end

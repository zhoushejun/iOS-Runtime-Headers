/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CALayer, CAMeshTransform, NSArray, NSDictionary, NSString;

@interface CALayer : NSObject <CAMediaTiming, CAPropertyInfo, NSCoding> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
        void *unused1[8]; 
    } _attr;
}

@property(retain,readonly) CALayer * _mapKit_mapLayer;
@property BOOL acceleratesDrawing;
@property BOOL acceptsLights;
@property(copy) NSDictionary * actions;
@property BOOL allowsDisplayCompositing;
@property BOOL allowsEdgeAntialiasing;
@property BOOL allowsGroupBlending;
@property BOOL allowsGroupOpacity;
@property BOOL allowsHitTesting;
@property float ambientReflectance;
@property struct CGPoint { float x1; float x2; } anchorPoint;
@property float anchorPointZ;
@property BOOL autoreverses;
@property struct CGColor { }* backgroundColor;
@property struct CGSize { float x1; float x2; } backgroundColorPhase;
@property(copy) NSArray * backgroundFilters;
@property double beginTime;
@property(copy) NSArray * behaviors;
@property struct CGColor { }* borderColor;
@property float borderWidth;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property BOOL canDrawConcurrently;
@property BOOL clearsContext;
@property float coefficientOfRestitution;
@property(retain) id compositingFilter;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsCenter;
@property(copy) NSString * contentsGravity;
@property BOOL contentsOpaque;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsRect;
@property float contentsScale;
@property(copy) NSString * contentsScaling;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } contentsTransform;
@property float cornerRadius;
@property(retain,readonly) CALayer * currentLayer;
@property id delegate;
@property float diffuseReflectance;
@property(getter=isDoubleSided) BOOL doubleSided;
@property BOOL drawsAsynchronously;
@property double duration;
@property unsigned int edgeAntialiasingMask;
@property(copy) NSString * fillMode;
@property(copy) NSArray * filters;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(getter=isFrozen) BOOL frozen;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property(getter=isHidden) BOOL hidden;
@property BOOL hitTestsAsOpaque;
@property BOOL invertsShadow;
@property(copy) NSArray * lights;
@property BOOL literalContentsCenter;
@property(copy) NSString * magnificationFilter;
@property(retain) CALayer * mask;
@property BOOL masksToBounds;
@property float mass;
@property(copy) CAMeshTransform * meshTransform;
@property float metallicity;
@property(copy) NSString * minificationFilter;
@property float minificationFilterBias;
@property float momentOfInertia;
@property(copy) NSString * name;
@property BOOL needsDisplayOnBoundsChange;
@property BOOL needsLayoutOnGeometryChange;
@property float opacity;
@property(getter=isOpaque) BOOL opaque;
@property struct CGPoint { float x1; float x2; } position;
@property BOOL preloadsCache;
@property float rasterizationScale;
@property float repeatCount;
@property double repeatDuration;
@property struct CGColor { }* shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property float shadowOpacity;
@property struct CGPath { }* shadowPath;
@property BOOL shadowPathIsBounds;
@property float shadowRadius;
@property float shininess;
@property BOOL shouldRasterize;
@property struct CGSize { float x1; float x2; } sizeRequisition;
@property BOOL sortsSublayers;
@property float specularReflectance;
@property float speed;
@property(copy) NSArray * stateTransitions;
@property(copy) NSArray * states;
@property(copy) NSDictionary * style;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } sublayerTransform;
@property(copy) NSArray * sublayers;
@property(readonly) CALayer * superlayer;
@property BOOL swapsMaskAndLayer;
@property double timeOffset;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transform;
@property float velocityStretch;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property float zPosition;

+ (void)CAMLParserEndElement:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (int (*)())CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)())CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)layer;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (BOOL)needsLayoutForKey:(id)arg1;
+ (id)properties;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;

- (id).cxx_construct;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (BOOL)_canDisplayConcurrently;
- (void)_cancelAnimationTimer;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 30; struct Vec2<double> { double x_31_2_1; double x_31_2_2; } x_3_1_31; struct Rect { double x_32_2_1; double x_32_2_2; double x_32_2_3; double x_32_2_4; } x_3_1_32; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_5_1_1; } x5; struct Layer {} *x6; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_7_1_1; } x7; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_8_1_1; } x8; struct Ref<CA::Render::Handle> { struct Handle {} *x_9_1_1; } x9; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_dealloc;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (void)_display;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_gkParentSublayerTransform;
- (id)_gkRecursiveDescription;
- (id)_initWithReference:(id)arg1;
- (id)_mapKit_mapLayer;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id)arg3;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
- (double)_pkui_elapsedDurationForAnimation:(id)arg1;
- (id)_pkui_nextAdditiveAnimationKeyWithKeyPath:(id)arg1;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (unsigned int)_renderImageCopyFlags;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (BOOL)_scheduleAnimationTimer;
- (void)_scrollPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (BOOL)acceleratesDrawing;
- (BOOL)acceptsLights;
- (id)actionForKey:(id)arg1;
- (id)actions;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addCDEChartFlipAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1 toLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)addCDEChartFlipAnimationToFinalPosition:(struct CGPoint { float x1; float x2; })arg1 fromLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)addCDEEditorFlipInAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1 fromLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)addCDEEditorFlipOutAnimationToPosition:(struct CGPoint { float x1; float x2; })arg1 toLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)addCDEShieldInAnimation;
- (void)addCDEShieldOutAnimation;
- (void)addCallbackAnimationWithName:(id)arg1 duration:(float)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)addDistortAnimationWithVector:(struct CGPoint { float x1; float x2; })arg1;
- (void)addDragRotationAnimationWithDelta:(struct CGPoint { float x1; float x2; })arg1;
- (void)addFlipTransitionAnimationToLayer:(id)arg1;
- (void)addJiggleAnimation;
- (void)addJiggleAnimationWithDuration:(double)arg1 angle:(float)arg2;
- (void)addPerspectiveProjection;
- (void)addPerspectiveProjectionWithDistance:(float)arg1;
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (void)addPopInAnimation:(id)arg1;
- (void)addPopOutAnimation:(id)arg1;
- (void)addPulseAnimation;
- (void)addReflectionSubLayerWithHeight:(float)arg1 startOpacity:(float)arg2;
- (void)addResetAnimation;
- (void)addResetAnimationWithDelegate:(id)arg1;
- (void)addRippleAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)addRippleAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1 withScale:(float)arg2;
- (void)addRippleAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1 withScale:(float)arg2 addPerspectiveProjection:(BOOL)arg3;
- (void)addRotateInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)addSproingAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addState:(id)arg1;
- (void)addSublayer:(id)arg1;
- (void)addWaveAnimation;
- (void)addWaveAnimationWithOffset:(struct CGSize { float x1; float x2; })arg1 zPosition:(float)arg2;
- (void)addWaveAnimationWithScale:(float)arg1 offset:(struct CGSize { float x1; float x2; })arg2 zPosition:(float)arg3;
- (void)addWaveAnimationWithScale:(float)arg1 offset:(struct CGSize { float x1; float x2; })arg2 zPosition:(float)arg3 addPerspectiveProjection:(BOOL)arg4;
- (void)addZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addZoomAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1 speed:(float)arg2;
- (void)addZoomAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1 startingScale:(float)arg2;
- (void)addZoomDownAnimation;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1 endingScale:(float)arg2 delay:(double)arg3;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (BOOL)allowsDisplayCompositing;
- (BOOL)allowsEdgeAntialiasing;
- (BOOL)allowsGroupBlending;
- (BOOL)allowsGroupOpacity;
- (BOOL)allowsHitTesting;
- (BOOL)allowsWeakReference;
- (float)ambientReflectance;
- (id)ancestorSharedWithLayer:(id)arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (float)anchorPointZ;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (BOOL)autoreverses;
- (struct CGColor { }*)backgroundColor;
- (struct CGSize { float x1; float x2; })backgroundColorPhase;
- (id)backgroundFilters;
- (id)bakedLayer;
- (double)beginTime;
- (id)behaviors;
- (struct CGColor { }*)borderColor;
- (float)borderWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (BOOL)canDrawConcurrently;
- (void)cancelLayoutForTilingLayers;
- (void)clearHasBeenCommitted;
- (BOOL)clearsContext;
- (float)coefficientOfRestitution;
- (int)compareTextEffectsOrdering:(id)arg1;
- (id)compositingFilter;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)contents;
- (BOOL)contentsAreFlipped;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsCenter;
- (id)contentsGravity;
- (BOOL)contentsOpaque;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (float)contentsScale;
- (id)contentsScaling;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransform;
- (id)context;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (float)cornerRadius;
- (id)currentLayer;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)dependentStatesOfState:(id)arg1;
- (float)diffuseReflectance;
- (void)display;
- (void)displayIfNeeded;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (struct CADoublePoint { double x1; double x2; })doublePosition;
- (BOOL)doubleSided;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (BOOL)drawsAsynchronously;
- (BOOL)drawsMipmapLevels;
- (double)duration;
- (double)durationOfAllAnimations;
- (unsigned int)edgeAntialiasingMask;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillMode;
- (id)filters;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameIncludingSublayers;
- (BOOL)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;
- (BOOL)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
- (BOOL)getRendererInfo:(struct _CARenderRendererInfo { int x1; unsigned int x2; unsigned int x3; }*)arg1 size:(unsigned long)arg2;
- (BOOL)hasBeenCommitted;
- (BOOL)hasPopInAnimation;
- (BOOL)hidden;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)hitTestsAsOpaque;
- (BOOL)ignoresHitTesting;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)invalidateContents;
- (BOOL)invertsShadow;
- (BOOL)isDescendantOf:(id)arg1;
- (BOOL)isDoubleSided;
- (BOOL)isFlipped;
- (BOOL)isFrozen;
- (BOOL)isGeometryFlipped;
- (BOOL)isHidden;
- (BOOL)isOpaque;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (id)layerByAddingReflectionWithHeight:(float)arg1 startOpacity:(float)arg2;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)layoutBelowIfNeeded;
- (void)layoutIfNeeded;
- (BOOL)layoutIsActive;
- (void)layoutSublayers;
- (id)lights;
- (BOOL)literalContentsCenter;
- (id)magnificationFilter;
- (void)makeStretchableLayerWithImage:(struct CGImage { }*)arg1 leftCap:(float)arg2 rightCap:(float)arg3 topCap:(float)arg4 bottomCap:(float)arg5;
- (void)makeStretchableLayerWithImage:(struct CGImage { }*)arg1 leftCap:(float)arg2 topCap:(float)arg3;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(float)arg2 rightCap:(float)arg3 topCap:(float)arg4 bottomCap:(float)arg5;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(float)arg2 topCap:(float)arg3;
- (void)makeStretchableLayerWithoutImage:(struct CGImage { }*)arg1 leftCap:(float)arg2 rightCap:(float)arg3 topCap:(float)arg4 bottomCap:(float)arg5;
- (void)makeStretchableLayerWithoutImage:(struct CGImage { }*)arg1 leftCap:(float)arg2 topCap:(float)arg3;
- (id)mask;
- (BOOL)masksToBounds;
- (float)mass;
- (id)meshTransform;
- (float)metallicity;
- (id)minificationFilter;
- (float)minificationFilterBias;
- (id)modelLayer;
- (float)momentOfInertia;
- (id)name;
- (BOOL)needsDisplay;
- (BOOL)needsDisplayOnBoundsChange;
- (BOOL)needsLayout;
- (BOOL)needsLayoutOnGeometryChange;
- (struct CGImage { }*)newRasterizedImageRef;
- (float)opacity;
- (float)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (BOOL)opaque;
- (void)p_clearAllLayerDelegates;
- (float)p_perspectiveZDistanceUsingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)pause;
- (void)pauseAtTime:(double)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;
- (id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1;
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })position;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (BOOL)preloadsCache;
- (id)presentationLayer;
- (float)rasterizationScale;
- (void*)regionBeingDrawn;
- (oneway void)release;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)removeAllAnimations;
- (void)removeAllAnimationsOnLayerTree;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeCDEChartFlipAnimationFromPosition;
- (void)removeCDEChartFlipAnimationToFinalPosition;
- (void)removeCDEEditorFlipInAnimation;
- (void)removeCDEEditorFlipOutAnimation;
- (void)removeCDEShieldInAnimation;
- (void)removeCDEShieldOutAnimation;
- (void)removeCallbackAnimationWithName:(id)arg1;
- (void)removeDistortAnimation;
- (void)removeDragRotationAnimation;
- (void)removeFlipTransitionAnimation;
- (void)removeFromSuperlayer;
- (void)removeJiggleAnimation;
- (void)removePopInAnimation;
- (void)removePopOutAnimation;
- (void)removePulseAnimation;
- (void)removeResetAnimation;
- (void)removeRippleAnimation;
- (void)removeRotateInAnimation;
- (void)removeSproingAnimation;
- (void)removeState:(id)arg1;
- (void)removeWaveAnimation;
- (void)removeWaveAnimationAnimated:(BOOL)arg1;
- (void)removeZoomAnimation;
- (void)removeZoomAnimation;
- (void)removeZoomDownAnimation;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (float)repeatCount;
- (double)repeatDuration;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)resume;
- (void)resumeAtTime:(double)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)retainWeakReference;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAcceleratesDrawing:(BOOL)arg1;
- (void)setAcceptsLights:(BOOL)arg1;
- (void)setActions:(id)arg1;
- (void)setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setAllowsDisplayCompositing:(BOOL)arg1;
- (void)setAllowsEdgeAntialiasing:(BOOL)arg1;
- (void)setAllowsGroupBlending:(BOOL)arg1;
- (void)setAllowsGroupOpacity:(BOOL)arg1;
- (void)setAllowsHitTesting:(BOOL)arg1;
- (void)setAmbientReflectance:(float)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAnchorPointZ:(float)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBackgroundColorPhase:(struct CGSize { float x1; float x2; })arg1;
- (void)setBackgroundFilters:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setBehaviors:(id)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCanDrawConcurrently:(BOOL)arg1;
- (void)setClearsContext:(BOOL)arg1;
- (void)setCoefficientOfRestitution:(float)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentsChanged;
- (void)setContentsGravity:(id)arg1;
- (void)setContentsOpaque:(BOOL)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(float)arg1;
- (void)setContentsScaling:(id)arg1;
- (void)setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiffuseReflectance:(float)arg1;
- (void)setDoubleBounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDoublePosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (void)setDoubleSided:(BOOL)arg1;
- (void)setDrawsAsynchronously:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)setFillMode:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setFlipped:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrozen:(BOOL)arg1;
- (void)setGeometryFlipped:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHitTestsAsOpaque:(BOOL)arg1;
- (void)setIfDifferentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)setInvertsShadow:(BOOL)arg1;
- (void)setLights:(id)arg1;
- (void)setLiteralContentsCenter:(BOOL)arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setMask:(id)arg1;
- (void)setMasksToBounds:(BOOL)arg1;
- (void)setMass:(float)arg1;
- (void)setMeshTransform:(id)arg1;
- (void)setMetallicity:(float)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setMomentOfInertia:(float)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setNeedsLayout;
- (void)setNeedsLayoutForTilingLayers;
- (void)setNeedsLayoutOnGeometryChange:(BOOL)arg1;
- (void)setOpacity:(float)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setPerspectiveDistance:(float)arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPreloadsCache:(BOOL)arg1;
- (void)setRasterizationScale:(float)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setShadowPathIsBounds:(BOOL)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setShininess:(float)arg1;
- (void)setShouldRasterize:(BOOL)arg1;
- (void)setSizeRequisition:(struct CGSize { float x1; float x2; })arg1;
- (void)setSortsSublayers:(BOOL)arg1;
- (void)setSpecularReflectance:(float)arg1;
- (void)setSpeed:(float)arg1;
- (void)setStyle:(id)arg1;
- (void)setSublayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setSublayers:(id)arg1;
- (void)setSwapsMaskAndLayer:(BOOL)arg1;
- (void)setTileContents:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVelocityStretch:(float)arg1;
- (void)setZPosition:(float)arg1;
- (struct CGColor { }*)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (float)shadowOpacity;
- (struct CGPath { }*)shadowPath;
- (BOOL)shadowPathIsBounds;
- (float)shadowRadius;
- (float)shininess;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (BOOL)shouldRasterize;
- (struct CGSize { float x1; float x2; })size;
- (struct CGSize { float x1; float x2; })sizeRequisition;
- (BOOL)sortsSublayers;
- (float)specularReflectance;
- (float)speed;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)stateWithName:(id)arg1;
- (id)style;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })sublayerTransform;
- (id)sublayers;
- (id)superlayer;
- (BOOL)swapsMaskAndLayer;
- (id)tileContentsLayer;
- (BOOL)tilingSafeHasContents;
- (void)tilingSafeSetSublayers:(id)arg1;
- (double)timeOffset;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint { float x1; float x2; })arg3 animationCache:(id)arg4;
- (void)tsu_transformToQuadrilateralWithTopLeft:(struct CGPoint { float x1; float x2; })arg1 topRight:(struct CGPoint { float x1; float x2; })arg2 bottomLeft:(struct CGPoint { float x1; float x2; })arg3 bottomRight:(struct CGPoint { float x1; float x2; })arg4;
- (BOOL)uiHasFilterWithName:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (float)velocityStretch;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)web_disableAllActions;
- (float)zPosition;
- (id)zoomDownAnimation;

@end

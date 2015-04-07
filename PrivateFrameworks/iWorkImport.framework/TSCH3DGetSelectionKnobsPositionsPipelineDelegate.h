/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSCH3DChartRep, TSCH3DGeometry, TSCH3DScene;

@interface TSCH3DGetSelectionKnobsPositionsPipelineDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate, TSCH3DChartElementSceneObjectGeometryDelegate, TSCH3DSceneDelegate, TSCHUnretainedParent> {
    int mCurrentLabelType;
    TSCH3DGeometry *mGeometry;
    int mKnobsMode;
    NSMutableDictionary *mLabelsBoundsForMerging;
    NSMutableArray *mProjectedPoints;
    TSCH3DChartRep *mRep;
    TSCH3DScene *mScene;
    NSArray *mSelection;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) TSCH3DGeometry * geometry;
@property(readonly) unsigned int hash;
@property(retain) NSMutableArray * projectedPoints;
@property(readonly) BOOL shouldMerge;
@property(readonly) Class superclass;

- (void)addLabelBoundsForMerging:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)clearParent;
- (void)dealloc;
- (void)didEndProcessingSceneObject:(id)arg1;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (id)geometry;
- (id)initWithRep:(id)arg1 selection:(id)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)p_labelSelectedForType:(int)arg1 alignment:(unsigned int)arg2 elementIndex:(int)arg3;
- (id)p_selectedSeries;
- (id)projectedPoints;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForSceneObject:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setOffset:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 labelType:(int)arg2 boundsIndex:(int)arg3 forSceneObject:(id)arg4;
- (void)setProjectedPoints:(id)arg1;
- (BOOL)shouldMerge;
- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute { }*)arg1 sceneObject:(id)arg2 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { id x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_3_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_3_1_2; } x3; id x4; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_5_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_5_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_5_1_3; } x5; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_6_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_6_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_6_1_3; } x6; unsigned int x7; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_8_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_8_1_2; } x8; float x9; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_10_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_10_1_2; } x10; float x11; }*)arg3;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (BOOL)willProcessElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willRenderElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (void)willRunForScene:(id)arg1 pipeline:(id)arg2;
- (BOOL)willSubmitElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willSubmitGeometry:(id)arg1;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { id x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_3_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_3_1_2; } x3; id x4; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_5_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_5_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_5_1_3; } x5; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_6_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_6_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_6_1_3; } x6; unsigned int x7; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_8_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_8_1_2; } x8; float x9; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_10_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_10_1_2; } x10; float x11; }*)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(int)arg2 alignment:(unsigned int)arg3 elementIndex:(unsigned int)arg4 forSceneObject:(id)arg5;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;

@end

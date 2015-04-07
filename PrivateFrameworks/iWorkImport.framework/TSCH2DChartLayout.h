/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, NSValue, TSCHChartRootLayoutItem;

@interface TSCH2DChartLayout : TSCHChartLayout {
    NSValue *mCachedOriginRelativeToChartAreaFrame;
    struct CGSize { 
        float width; 
        float height; 
    } mLastChartBodySize;
    TSCHChartRootLayoutItem *mLayoutTreeRoot;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mStartingChartInnerFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mStartingLegendInnerFrame;
    struct CGSize { 
        float width; 
        float height; 
    } mStartingSize;
}

@property(readonly) TSCHChartRootLayoutItem * p_layoutTree;
@property(copy) NSDictionary * seriesIndexedPieWedgeExplosions;

+ (id)propertiesThatInvalidateLayout;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForResize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartAreaFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartBodyFrame;
- (unsigned int)dataSetIndex;
- (void)dealloc;
- (id)hitChartElements:(struct CGPoint { float x1; float x2; })arg1 passingTest:(id)arg2;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidate;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (void)layoutForChartAreaSize:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutForChartBodySize:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutForCircumscribingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutForResizingSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendDrawingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendGeometryFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendModelGeometryFrame;
- (id)model;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })outerLayoutFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })outerShadowFrame;
- (struct CGPoint { float x1; float x2; })p_cachedOriginRelativeToChartAreaFrame;
- (void)p_ensureValidForInwardLayout;
- (void)p_layoutNowForChartAreaSize:(struct CGSize { float x1; float x2; })arg1;
- (void)p_layoutNowForChartBodySize:(struct CGSize { float x1; float x2; })arg1;
- (void)p_layoutNowForCircumscribingSize:(struct CGSize { float x1; float x2; })arg1;
- (id)p_layoutTree;
- (void)processChanges:(id)arg1;
- (id)renderersWithRep:(id)arg1;
- (id)seriesIndexedPieWedgeExplosions;
- (void)setDataSetIndex:(unsigned int)arg1;
- (void)setLayoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })arg1;
- (void)setLegendGeometryFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLegendModelGeometryFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLegendSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleFrame;

@end

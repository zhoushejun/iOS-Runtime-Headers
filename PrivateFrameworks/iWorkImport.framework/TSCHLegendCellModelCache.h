/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSCHChartSeries, TSDStroke;

@interface TSCHLegendCellModelCache : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBadgeFillFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBadgeFrame;
    int mBadgeType;
    struct CGSize { 
        float width; 
        float height; 
    } mCellSize;
    float mEffectiveStrokeWidth;
    float mEffectiveSymbolStrokeWidth;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLabelFrame;
    NSString *mLabelString;
    int mLegendCellType;
    int mLineType;
    TSCHChartSeries *mSeries;
    unsigned int mSeriesIndex;
    TSDStroke *mStroke;
    TSDStroke *mSymbolStroke;
    int mSymbolType;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } badgeFillFrame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } badgeFrame;
@property(readonly) int badgeType;
@property(readonly) int cellType;
@property(readonly) float effectiveStrokeWidth;
@property(readonly) float effectiveSymbolStrokeWidth;
@property(readonly) id fill;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } labelFrame;
@property(readonly) NSString * labelString;
@property(readonly) int lineType;
@property(readonly) TSCHChartSeries * series;
@property(readonly) unsigned int seriesIndex;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) TSDStroke * stroke;
@property(readonly) id symbolFill;
@property(readonly) TSDStroke * symbolStroke;
@property(readonly) int symbolType;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })badgeFillFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })badgeFrame;
- (int)badgeType;
- (int)cellType;
- (void)dealloc;
- (float)effectiveStrokeWidth;
- (float)effectiveSymbolStrokeWidth;
- (id)fill;
- (id)initWithChartModel:(id)arg1 cellType:(int)arg2 seriesIndex:(unsigned int)arg3 withMetrics:(id)arg4 overrideLabel:(id)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelFrame;
- (id)labelString;
- (int)lineType;
- (id)series;
- (unsigned int)seriesIndex;
- (struct CGSize { float x1; float x2; })size;
- (id)stroke;
- (id)symbolFill;
- (id)symbolStroke;
- (int)symbolType;

@end

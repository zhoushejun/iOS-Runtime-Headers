/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)autoFill;
- (id)autoSeriesBorderStroke;
- (id)autoSeriesFill:(unsigned int)arg1;
- (id)autoStroke;
- (id)autoStrokeForSeriesIndex:(unsigned int)arg1;
- (id)autoTextFill;
- (id)fillWithColorIndex:(unsigned int)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned int)arg2 isLine:(bool)arg3;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned int)arg3;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(BOOL)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(BOOL)arg7;
- (id)strokeWithColorIndex:(int)arg1;

@end

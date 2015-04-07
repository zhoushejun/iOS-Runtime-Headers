/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDResources, OADGraphicProperties;

@interface CHDLegend : NSObject {
    unsigned int mFontIndex;
    OADGraphicProperties *mGraphicProperties;
    bool mIsVertical;
    EDCollection *mLegendEntries;
    int mLegendPosition;
    EDResources *mResources;
}

- (void)dealloc;
- (id)font;
- (unsigned int)fontIndex;
- (id)graphicProperties;
- (id)initWithResources:(id)arg1;
- (bool)isSingleColumnLegend;
- (id)legendEntries;
- (int)legendPosition;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned int)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setIsSingleColumnLegend:(bool)arg1;
- (void)setLegendPosition:(int)arg1;

@end

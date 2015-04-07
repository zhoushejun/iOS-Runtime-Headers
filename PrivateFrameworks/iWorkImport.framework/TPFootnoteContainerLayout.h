/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPFootnoteMarkProvider>, NSString, TSWPPadding;

@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPFootnoteMarkProvider, TSWPLayoutParent> {
    <TSWPFootnoteMarkProvider> *_footnoteMarkProvider;
    float _footnoteSpacing;
    BOOL _includeFootnoteSeparatorLine;
    float _maxFootnoteHeight;
    float _width;
}

@property(readonly) BOOL alwaysStartsNewTarget;
@property(readonly) unsigned int columnCount;
@property(readonly) BOOL columnsAreLeftToRight;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } footnoteSeparatorLineFrame;
@property(readonly) unsigned int hash;
@property(readonly) float height;
@property BOOL includeFootnoteSeparatorLine;
@property(readonly) BOOL isEmpty;
@property(readonly) TSWPPadding * layoutMargins;
@property(readonly) BOOL shrinkTextToFit;
@property(readonly) Class superclass;
@property(readonly) float textScaleFactor;

- (void)addFootnoteLayout:(id)arg1;
- (struct CGSize { float x1; float x2; })adjustedInsetsForTarget:(id)arg1;
- (BOOL)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { float x1; float x2; })arg2;
- (unsigned int)columnCount;
- (BOOL)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })footnoteSeparatorLineFrame;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (float)height;
- (BOOL)includeFootnoteSeparatorLine;
- (id)initWithFootnoteMarkProvider:(id)arg1 width:(float)arg2 maxFootnoteHeight:(float)arg3 footnoteSpacing:(float)arg4;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (BOOL)isEmpty;
- (id)layoutMargins;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (float)maxAutoGrowHeightForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float*)arg4 outGap:(float*)arg5;
- (void)removeAllFootnoteLayouts;
- (void)removeFootnoteLayout:(id)arg1;
- (void)removeFootnoteLayoutWithInfo:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (Class)repClassOverride;
- (void)setFootnoteSpacing:(int)arg1;
- (void)setIncludeFootnoteSeparatorLine:(BOOL)arg1;
- (void)setWidth:(float)arg1;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)shrinkTextToFit;
- (BOOL)textIsVertical;
- (void)trimFootnoteLayoutsFromIndex:(unsigned int)arg1;
- (void)validate;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;

@end

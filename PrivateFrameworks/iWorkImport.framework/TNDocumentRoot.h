/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, NSString, TNTheme, TNUIState, TSKTreeNode, TSSStylesheet;

@interface TNDocumentRoot : TSADocumentRoot <TSTResolverContainerNameProvider> {
    struct CGSize { 
        float width; 
        float height; 
    } _pageSize;
    NSString *_paperID;
    NSString *_printerID;
    BOOL _printingAllSheets;
    BOOL mDocumentWasPreparedFromTemplate;
    unsigned int mSheetNameCounter;
    NSMutableArray *mSheets;
    TSKTreeNode *mSidebarOrder;
    TSSStylesheet *mStylesheet;
    TNTheme *mTheme;
    TNUIState *mUIState;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property struct CGSize { float x1; float x2; } pageSize;
@property(copy) NSString * paperID;
@property(copy) NSString * printerID;
@property(getter=isPrintingAllSheets) BOOL printingAllSheets;
@property BOOL removedAllQuickCalcFunctions;
@property(copy) NSArray * selectedQuickCalcFunctions;
@property(readonly) NSArray * sheets;
@property(retain,readonly) TSKTreeNode * sidebarOrder;
@property(readonly) TSSStylesheet * stylesheet;
@property(readonly) Class superclass;
@property(readonly) unsigned int tableCount;
@property(retain) TNTheme * theme;
@property(retain) TNUIState * uiState;

+ (struct CGSize { float x1; float x2; })previewImageMaxSizeForType:(unsigned int)arg1;
+ (struct CGSize { float x1; float x2; })previewImageSizeForType:(unsigned int)arg1;

- (id).cxx_construct;
- (id)activeSheet;
- (void)addSheet:(id)arg1 dolcContext:(id)arg2;
- (unsigned int)applicationType;
- (id)childEnumerator;
- (void)dealloc;
- (void)documentDidLoad;
- (void)incrementSheetNameCounter;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)initializeForImport;
- (void)initializeHardCodedBlankDocument;
- (void)insertSheet:(id)arg1 sheetIndex:(unsigned int)arg2 context:(id)arg3;
- (BOOL)isMultiPageForQuickLook;
- (BOOL)isPrintingAllSheets;
- (void)moveSheet:(id)arg1 toIndex:(unsigned int)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned int)arg1 inTextStorage:(id)arg2;
- (void)p_addSidebarNodeForSheet:(id)arg1;
- (struct CGSize { float x1; float x2; })p_adjustCapturedContentSize:(struct CGSize { float x1; float x2; })arg1 toAspectRatio:(struct CGSize { float x1; float x2; })arg2;
- (void)p_buildSidebarOrder;
- (id)p_chartsWantingDeferredUpgrade;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_contentFrameToCaptureForSheet:(id)arg1;
- (float)p_imageBorderForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)p_previewImageWithImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)p_removeSidebarNodeForSheet:(id)arg1;
- (id)p_resolverContainerForResolver:(id)arg1;
- (unsigned int)p_tableCountForSheet:(id)arg1;
- (id)p_untitledSheetName;
- (struct CGSize { float x1; float x2; })pageSize;
- (id)paperID;
- (void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg1;
- (void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (id)previewImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)printerID;
- (void)removeAllSheets;
- (void)removeSheet:(id)arg1;
- (BOOL)removedAllQuickCalcFunctions;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selectedQuickCalcFunctions;
- (void)setImportedPaperID:(id)arg1 printerID:(id)arg2;
- (void)setPageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPaperID:(id)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setPrintingAllSheets:(BOOL)arg1;
- (void)setRemovedAllQuickCalcFunctions:(BOOL)arg1;
- (void)setSelectedQuickCalcFunctions:(id)arg1;
- (void)setSidebarChildren:(id)arg1 forSheet:(id)arg2;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUiState:(id)arg1;
- (void)sheet:(id)arg1 insertedDrawable:(id)arg2;
- (void)sheet:(id)arg1 removedDrawable:(id)arg2;
- (id)sheets;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldShowComments;
- (id)sidebarOrder;
- (id)stylesheet;
- (unsigned int)tableCount;
- (id)theme;
- (id)uiState;
- (BOOL)validName:(id)arg1 forRenamingSheet:(id)arg2;
- (BOOL)validNameForNewSheet:(id)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;

@end

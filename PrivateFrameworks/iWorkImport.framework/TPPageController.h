/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDate, NSMutableArray, NSString, TPDocumentRoot, TPFootnoteLayoutController, TPOffscreenLayoutController, TPPageLayoutState, TSUMutablePointerSet, TSWPLayoutManager;

@interface TPPageController : NSObject <TPLayoutStateConsumer, TPLayoutStateProvider, TPPageLayoutInfoProvider, TSWPLayoutOwner> {
    int _backgroundLayoutEnabled;
    int _backgroundLayoutSuspendCount;
    NSDate *_bgLayoutStartDate;
    int _bgLayoutStatus;
    TSWPLayoutManager *_bodyLayoutManager;
    BOOL _checkedForBackUp;
    unsigned int _completePageCount;
    TPDocumentRoot *_documentRoot;
    TPOffscreenLayoutController *_drawablesLayoutController;
    TPFootnoteLayoutController *_footnoteLayoutController;
    BOOL _handleBackgroundLayoutScheduled;
    int _isScrolling;
    unsigned int _lastKnownPageCount;
    TSUMutablePointerSet *_layoutObservers;
    TPPageLayoutState *_layoutState;
    NSMutableArray *_pageGeneratorStack;
    struct multimap<unsigned int, TPPageLayout *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, TPPageLayout *> > > { 
        struct __tree<std::__1::__value_type<unsigned int, TPPageLayout *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, TPPageLayout *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, TPPageLayout *> > > { 
            struct __tree_node<std::__1::__value_type<unsigned int, TPPageLayout *>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, TPPageLayout *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, TPPageLayout *>, std::__1::less<unsigned int>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _pageLayoutCache;
    NSMutableArray *_sectionHints;
    BOOL _shouldUpdatePageCount;
}

@property BOOL backgroundLayoutEnabled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int firstPageIndexNeedingLayout;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int pageCount;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accquireLockAndPerformAction:(id)arg1;
- (void)addLayoutObserver:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })anchoredRangeForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (void)archivedLayoutState:(id)arg1 setDocumentPageIndex:(unsigned int)arg2;
- (void)archivedLayoutState:(id)arg1 setLastPageCount:(unsigned int)arg2;
- (BOOL)archivedLayoutState:(id)arg1 setSectionHints:(id)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionIndex:(unsigned int)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionPageIndex:(unsigned int)arg2;
- (BOOL)backgroundLayoutEnabled;
- (struct _NSRange { unsigned int x1; unsigned int x2; })bodyRangeForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (BOOL)canProvideInfoForPageIndex:(unsigned int)arg1;
- (BOOL)canProvideNumberingInfoForPageIndex:(unsigned int)arg1;
- (BOOL)caresAboutStorageChanges;
- (int)contentFlagsForPageIndex:(unsigned int)arg1;
- (void)d_timeLayout;
- (void)dealloc;
- (void)didScroll;
- (void)didZoom;
- (unsigned int)documentPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned int)firstPageIndexNeedingLayout;
- (float)footerHeight;
- (id)footnoteLayoutController;
- (struct _NSRange { unsigned int x1; unsigned int x2; })footnoteLayoutRangeForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (id)headerFooterProviderForPageIndex:(unsigned int)arg1;
- (float)headerHeight;
- (id)i_columnAfterPageIndex:(unsigned int)arg1;
- (id)i_columnPriorToPageIndex:(unsigned int)arg1;
- (id)i_firstChildHintAfterPageIndex:(unsigned int)arg1;
- (void)i_inflateColumnsInBodyLayout:(id)arg1;
- (void)i_inflateFootnotesInFootnoteContainer:(id)arg1;
- (id)i_pageHintForPageIndex:(unsigned int)arg1;
- (void)i_registerPageLayout:(id)arg1;
- (void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(unsigned int)arg2;
- (BOOL)i_shouldLayoutBodyVertically;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)i_topicHintsAfterPageIndex:(unsigned int)arg1;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)i_topicHintsPriorToPageIndex:(unsigned int)arg1;
- (void)i_trimPageAtIndex:(unsigned int)arg1 toCharIndex:(unsigned int)arg2 removeFootnoteLayoutCount:(unsigned int)arg3 removeAutoNumberFootnoteCount:(unsigned int)arg4;
- (void)i_unregisterPageLayout:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isLayoutComplete;
- (BOOL)isLayoutCompleteThroughPageIndex:(unsigned int)arg1;
- (unsigned int)lastPageCountForArchivedLayoutState:(id)arg1;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(int)arg2 afterCharIndex:(unsigned int)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (void)layoutThroughPageIndex:(unsigned int)arg1;
- (void)layoutThroughPageIndex:(unsigned int)arg1 forLayoutController:(id)arg2;
- (id)masterDrawableProviderForPageIndex:(unsigned int)arg1;
- (BOOL)okToAnchorDrawable:(id)arg1 toPageIndex:(unsigned int)arg2;
- (void)p_advanceSectionIndex;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_anchoredRangeForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (void)p_backgroundLayoutReadEntry;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_bodyRangeForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (id)p_cachedPageLayoutForPageIndex:(unsigned int)arg1 preferredLayoutController:(id)arg2;
- (BOOL)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2;
- (void)p_cancelBGLayout;
- (void)p_checkForBackUp;
- (void)p_destroyBodyLayoutState;
- (void)p_didLayout;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_footnoteLayoutRangeForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (void)p_forceRestartLayout;
- (void)p_handleBGLayoutStatusChange;
- (void)p_handleBackgroundLayout;
- (void)p_handleBackgroundLayoutMainThreadEntry;
- (void)p_insertPageLayoutIntoCache:(id)arg1;
- (void)p_invalidatePageIndex:(unsigned int)arg1;
- (BOOL)p_isBackgroundLayoutActive;
- (BOOL)p_isLayoutComplete;
- (id)p_lastValidPageHint;
- (id)p_lastValidTextPageHint;
- (unsigned int)p_lastValidTextPageIndex;
- (unsigned int)p_layoutEndCharIndex;
- (unsigned int)p_layoutEndFootnoteIndex;
- (void)p_layoutFootnotesIntoPageLayout:(id)arg1;
- (void)p_layoutIntoPageLayout:(id)arg1 outDidSync:(BOOL*)arg2;
- (void)p_layoutNextPageForLayoutController:(id)arg1;
- (void)p_layoutTextIntoPageLayout:(id)arg1 outDidSync:(BOOL*)arg2;
- (void)p_layoutThroughPageIndex:(unsigned int)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(BOOL)arg3;
- (void)p_notifyObserversDidInvalidate;
- (void)p_notifyObserversDidLayoutWhileSyncing:(BOOL)arg1;
- (void)p_notifyObserversWillLayoutWhileSyncing:(BOOL)arg1;
- (id)p_pageHintForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (id)p_pageHintForPageIndexPath:(id)arg1;
- (id)p_pageHintPrecedingPageIndexPath:(id)arg1;
- (unsigned int)p_pageIndexContainingIndex:(unsigned int)arg1 ofType:(int)arg2;
- (unsigned int)p_pageIndexForAnchoredCharIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 searchAfterLayoutPoint:(BOOL)arg3;
- (unsigned int)p_pageIndexForCharIndex:(unsigned int)arg1 caretAffinity:(int)arg2 forceLayout:(BOOL)arg3 searchAfterLayoutPoint:(BOOL)arg4;
- (unsigned int)p_pageIndexForFootnoteIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 searchAfterLayoutPoint:(BOOL)arg3;
- (id)p_pageIndexPathForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (id)p_pageInfoForPageAtIndex:(unsigned int)arg1;
- (id)p_pageMasterForPageIndex:(unsigned int)arg1 inSection:(id)arg2 sectionHint:(id)arg3;
- (void)p_prepareLayoutStateForNextPage;
- (void)p_preparePageHintForNextPage;
- (void)p_prepareSectionHintForNextPage;
- (void)p_processWidowsAndInflationForLayoutController:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_rangeOfContinuousSectionsAtPageIndex:(unsigned int)arg1 startPage:(unsigned int*)arg2;
- (void)p_removeFinishedPageGenerators;
- (void)p_removePageLayoutFromCache:(id)arg1;
- (void)p_resetPageGenerators;
- (void)p_scheduleBGLayout;
- (void)p_scheduleImmediateBGLayout;
- (id)p_sectionAtSectionIndex:(unsigned int)arg1;
- (id)p_sectionHintForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 allowAfterLayoutPoint:(BOOL)arg3;
- (void)p_setBackgroundLayoutStartDate:(id)arg1;
- (void)p_setNeedsLayoutFromSectionIndexToEnd:(unsigned int)arg1;
- (void)p_setNeedsLayoutOnPageIndex:(unsigned int)arg1;
- (void)p_syncFromNextPage;
- (id)p_textPageHintFollowingPageIndexPath:(id)arg1;
- (id)p_textPageHintPrecedingPageIndex:(unsigned int)arg1;
- (id)p_textPageHintPrecedingPageIndexPath:(id)arg1;
- (unsigned int)p_textPageIndexPrecedingPageIndex:(unsigned int)arg1;
- (void)p_updateBackgroundLayoutStartDate;
- (void)p_updateNonTextHintAtPageIndexPath:(id)arg1;
- (void)p_updatePageCount;
- (void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2;
- (void)p_withPageLayoutAtIndex:(unsigned int)arg1 preferredLayoutController:(id)arg2 executeBlock:(id)arg3;
- (BOOL)pageAtIndexHasBody:(unsigned int)arg1;
- (BOOL)pageBeginsWithPaginatedAttachment:(unsigned int)arg1;
- (unsigned int)pageCount;
- (unsigned int)pageCountForPageIndex:(unsigned int)arg1;
- (BOOL)pageEndsWithPaginatedAttachment:(unsigned int)arg1;
- (unsigned int)pageIndexForAnchoredCharIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (unsigned int)pageIndexForCharIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (unsigned int)pageIndexForFootnoteIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (id)pageInfoForAttachmentAtBodyCharIndex:(unsigned int)arg1 selection:(id)arg2;
- (id)pageInfoForPageIndex:(unsigned int)arg1;
- (unsigned int)pageNumberForPageIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pageRangeForSelection:(id)arg1 outEndIsValid:(BOOL*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pageRangeOfSectionIndex:(unsigned int)arg1;
- (struct CGPoint { float x1; float x2; })positionForPositionerForDrawable:(id)arg1;
- (void)removeLayoutObserver:(id)arg1;
- (void)resumeBackgroundLayout;
- (void)scheduleImmediateBackgroundLayout;
- (struct _NSRange { unsigned int x1; unsigned int x2; })sectionBodyRangeForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (id)sectionHintsForArchivedLayoutState:(id)arg1;
- (unsigned int)sectionIndexForArchivedLayoutState:(id)arg1;
- (unsigned int)sectionIndexForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (unsigned int)sectionPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned int)sectionPageIndexForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })sectionPageRangeForPageIndex:(unsigned int)arg1 forceLayout:(BOOL)arg2 outEndIsValid:(BOOL*)arg3;
- (void)setBackgroundLayoutEnabled:(BOOL)arg1;
- (void)setupListenersForInteractiveCanvasController;
- (BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned int)arg1;
- (void)suspendBackgroundLayout;
- (void)teardown;
- (id)textWrapper;
- (void)willScroll;
- (void)willZoom;
- (void)withPageLayoutAtIndex:(unsigned int)arg1 executeBlock:(id)arg2;
- (void)withPageLayoutAtIndex:(unsigned int)arg1 preferredLayoutController:(id)arg2 executeBlock:(id)arg3;

@end

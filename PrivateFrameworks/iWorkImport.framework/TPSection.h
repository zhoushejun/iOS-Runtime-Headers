/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TPDocumentRoot, TPGuideStorageMap, TPPageMaster, TSWPStorage;

@interface TPSection : TSPObject <TSKDocumentObject, TSKModel, TSWPSection> {
    TPDocumentRoot *_documentRoot;
    BOOL _inheritPreviousHeaderFooter;
    NSString *_name;
    BOOL _pageMasterEvenOddPagesDifferent;
    BOOL _pageMasterFirstPageDifferent;
    BOOL _pageMasterFirstPageHidesHeaderFooter;
    TPPageMaster *_pageMasters[3];
    TSWPStorage *_parentStorage;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
    unsigned int _sectionStartKind;
    TPGuideStorageMap *_userGuideStorageMap;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL inheritPreviousHeaderFooter;
@property(retain) NSString * name;
@property BOOL pageMasterEvenOddPagesDifferent;
@property BOOL pageMasterFirstPageDifferent;
@property BOOL pageMasterFirstPageHidesHeaderFooter;
@property TSWPStorage * parentStorage;
@property unsigned int sectionPageNumberKind;
@property unsigned int sectionPageNumberStart;
@property unsigned int sectionStartKind;
@property(readonly) Class superclass;
@property(readonly) TPGuideStorageMap * userGuideStorageMap;

+ (BOOL)needsObjectUUID;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)childEnumerator;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)i_clearPropertiesToDefaults;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (void)i_setDocumentRoot:(id)arg1;
- (BOOL)inheritPreviousHeaderFooter;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 section:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHeaderFooterEmpty:(int)arg1;
- (BOOL)isHeaderFooterVisible:(int)arg1;
- (id)name;
- (id)objectUUIDPath;
- (void)p_makeUserGuideStorage;
- (void)p_unarchiveAndUpgrade:(id)arg1 archive:(const struct SectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TSP::Reference> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; float x5; float x6; float x7; float x8; bool x9; bool x10; bool x11; bool x12; float x13; float x14; float x15; float x16; float x17; struct RepeatedPtrField<TSP::Reference> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; float x19; unsigned int x20; unsigned int x21; bool x22; bool x23; bool x24; struct Reference {} *x25; struct Reference {} *x26; struct Reference {} *x27; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x28; struct Reference {} *x29; unsigned int x30; int x31; unsigned int x32[1]; }*)arg2;
- (void)p_upgradePageSizeAndMarginsFromParsedArchive:(const struct SectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TSP::Reference> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; float x5; float x6; float x7; float x8; bool x9; bool x10; bool x11; bool x12; float x13; float x14; float x15; float x16; float x17; struct RepeatedPtrField<TSP::Reference> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; float x19; unsigned int x20; unsigned int x21; bool x22; bool x23; bool x24; struct Reference {} *x25; struct Reference {} *x26; struct Reference {} *x27; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x28; struct Reference {} *x29; unsigned int x30; int x31; unsigned int x32[1]; }*)arg1;
- (BOOL)pageMasterEvenOddPagesDifferent;
- (BOOL)pageMasterFirstPageDifferent;
- (BOOL)pageMasterFirstPageHidesHeaderFooter;
- (id)pageMasterForType:(int)arg1;
- (id)pageMasterOwningModel:(id)arg1;
- (id)pageMasters;
- (id)parentStorage;
- (void)saveToArchiver:(id)arg1;
- (unsigned int)sectionPageNumberKind;
- (unsigned int)sectionPageNumberStart;
- (unsigned int)sectionStartKind;
- (void)setInheritPreviousHeaderFooter:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPageMasterEvenOddPagesDifferent:(BOOL)arg1;
- (void)setPageMasterFirstPageDifferent:(BOOL)arg1;
- (void)setPageMasterFirstPageHidesHeaderFooter:(BOOL)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setSectionPageNumberKind:(unsigned int)arg1;
- (void)setSectionPageNumberStart:(unsigned int)arg1;
- (void)setSectionStartKind:(unsigned int)arg1;
- (void)setUserGuideStorageMap:(id)arg1;
- (id)userGuideStorageMap;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

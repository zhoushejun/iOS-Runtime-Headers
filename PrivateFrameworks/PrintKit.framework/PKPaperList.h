/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSArray;

@interface PKPaperList : NSObject {
    NSArray *_duplexPapers;
    BOOL _hasMediaReady;
    NSArray *_papers;
    NSArray *_photoPapers;
    NSArray *_rolls;
    NSArray *_simplexPapers;
}

@property(retain) NSArray * duplexPapers;
@property BOOL hasMediaReady;
@property(retain) NSArray * papers;
@property(retain) NSArray * photoPapers;
@property(retain) NSArray * rolls;
@property(retain) NSArray * simplexPapers;

+ (id)mediaDictFromAttrs:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
+ (id)paperListWithAttrs:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
+ (id)paperListWithTXTRecord:(id)arg1;

- (void)addPaperSet:(id*)arg1 withCount:(int)arg2 toArrays:(id*)arg3;
- (id)adjustMargins:(id)arg1 forDuplex:(id)arg2;
- (id)availableRollPapersPreferBorderless:(BOOL)arg1;
- (void)categorizePapers:(id)arg1;
- (id)conjureMediaFromTXT:(id)arg1;
- (void)dealloc;
- (id)duplexPapers;
- (id)filterPapers:(id)arg1 usingBlock:(id)arg2;
- (id)filterUsingBlock:(id)arg1;
- (BOOL)hasMatchingLoadedRoll:(id)arg1;
- (BOOL)hasMediaReady;
- (id)initWithAttrs:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (id)initWithTXTRecord:(id)arg1;
- (BOOL)isPaperReady:(id)arg1;
- (int)jobTypesSupported:(id)arg1;
- (id)matchPaper:(id)arg1;
- (id)matchPaper:(id)arg1 inList:(id)arg2;
- (id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(BOOL*)arg4;
- (id)paperListForDuplexMode:(id)arg1;
- (id)papers;
- (id)papersForDocumentWithSize:(struct CGSize { float x1; float x2; })arg1 andDuplex:(BOOL)arg2;
- (id)papersForPhotoWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)photoPapers;
- (id)rollReadyPaperListForDocumentWithContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)rollReadyPaperListForPhotoWithContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize { float x1; float x2; })arg1 forPhoto:(BOOL)arg2;
- (id)rolls;
- (void)setDuplexPapers:(id)arg1;
- (void)setHasMediaReady:(BOOL)arg1;
- (void)setPapers:(id)arg1;
- (void)setPhotoPapers:(id)arg1;
- (void)setRolls:(id)arg1;
- (void)setSimplexPapers:(id)arg1;
- (id)simplexPapers;
- (id)tersePaperFrom:(id)arg1 withMediaInfo:(id)arg2;
- (id)tersePaperFrom:(id)arg1 withRequest:(id)arg2;

@end

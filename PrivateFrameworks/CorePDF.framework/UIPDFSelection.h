/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPage;

@interface UIPDFSelection : NSObject {
    int _cachedEndIndex;
    int _cachedStartIndex;
    struct CGPDFSelection { } *_cgSelection;
    BOOL _dirty;
    UIPDFPage *_page;
    struct __CFString { } *_string;
    struct { 
        int location; 
        int length; 
    } stringRange;
}

@property struct { int x1; int x2; } stringRange;

- (struct CGPDFSelection { }*)CGSelection;
- (id)archive;
- (id)attributedStringAtIndex:(unsigned int)arg1;
- (float)baseLineAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)containingTextLine;
- (void)copyToPasteboard;
- (void)dealloc;
- (id)description;
- (unsigned int)endIndex;
- (unsigned int)extendAtEnd:(unsigned int)arg1;
- (unsigned int)extendAtStart:(unsigned int)arg1;
- (void)extendToParagraph;
- (struct { int x1; int x2; })extent;
- (BOOL)getBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2 index:(unsigned int)arg3;
- (id)htmlAtIndex:(unsigned int)arg1;
- (id)init;
- (id)initWithPage:(id)arg1 cgSelection:(struct CGPDFSelection { }*)arg2;
- (id)initWithPage:(id)arg1 fromArchive:(id)arg2;
- (id)initWithPage:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)initWithSelection:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isNonEmpty;
- (BOOL)isWord;
- (unsigned int)numberOfRectangles;
- (id)page;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })rectangleAtIndex:(unsigned int)arg1 scale:(float)arg2 inset:(float)arg3;
- (id)selectionExtendedToLineBoundaries;
- (void)setStringRange:(struct { int x1; int x2; })arg1;
- (unsigned int)startIndex;
- (id)string;
- (struct { int x1; int x2; })stringRange;
- (id)textAtIndex:(unsigned int)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;

@end

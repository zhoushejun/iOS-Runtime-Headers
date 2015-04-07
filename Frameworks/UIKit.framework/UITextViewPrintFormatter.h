/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {
    NSArray *_pageData;
    struct { 
        unsigned int initializedUsedRects : 1; 
    } _textViewPrintFormatterFlags;
}

- (id)_pageData;
- (int)_recalcPageCount;
- (id)_textView;
- (id)attributedText;
- (id)color;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forPageAtIndex:(int)arg2;
- (id)font;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageAtIndex:(int)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (id)text;
- (int)textAlignment;

@end

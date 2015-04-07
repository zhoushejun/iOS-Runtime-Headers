/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _characterRange;
    long _elasticCharIndex;
    float _elasticRangeWidth;
    struct { 
        unsigned int _directionState : 2; 
        unsigned int _drawsOutside : 1; 
        unsigned int _isLineArray : 1; 
        unsigned int _reserved : 28; 
    } _flags;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _glyphRange;
    unsigned int _hyphenGlyph;
    float _hyphenGlyphWidth;
    void *_line;
    float _maxPosition;
    float _minPosition;
    NSATSTypesetter *_typesetter;
}

- (long)_charIndexToBreakLineByWordWrappingAtIndex:(long)arg1 lineFragmentWidth:(float)arg2 hyphenate:(BOOL*)arg3;
- (id)_copyRenderingContextWithGlyphOrigin:(float)arg1;
- (void)_flushCachedObjects;
- (void)_invalidate;
- (struct _NSRange { unsigned int x1; unsigned int x2; })characterRange;
- (void)dealloc;
- (void)finalize;
- (void)getTypographicLineHeight:(float*)arg1 baselineOffset:(float*)arg2 leading:(float*)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRange;
- (BOOL)hasElasticRange;
- (id)initWithTypesetter:(id)arg1;
- (void)justifyWithFactor:(float)arg1;
- (void)layoutForStartingGlyphAtIndex:(unsigned int)arg1 characterIndex:(unsigned int)arg2 minPosition:(float)arg3 maxPosition:(float)arg4 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (float)lineWidthForType:(int)arg1;
- (int)resolvedLineBreakMode:(BOOL)arg1;
- (void)saveMorphedGlyphs:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (void)saveWithGlyphOrigin:(float)arg1;

@end

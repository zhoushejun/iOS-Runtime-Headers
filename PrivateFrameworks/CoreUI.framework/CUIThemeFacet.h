/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSString;

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCoding, NSCopying> {
    struct { 
        unsigned int hasCheckedButtonGlyph : 1; 
        unsigned int isButtonGlyph : 1; 
        unsigned int reserved : 14; 
    } _fFlags;
    struct CGPoint { 
        float x; 
        float y; 
    } _hotSpot;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *_renditionKeyList;
    int _renditionType;
    unsigned int _themeIndex;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_facetWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned int)arg4;
+ (void)_invalidateArtworkCaches;
+ (id)_themeStoreForThemeIndex:(unsigned int)arg1;
+ (BOOL)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned int)arg2;
+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned int)arg2;
+ (id)debug_bundleIdentifierForThemeRef:(unsigned int)arg1;
+ (id)facetWithElement:(int)arg1 part:(int)arg2 dimension1:(int)arg3 dimension2:(int)arg4 fromTheme:(unsigned int)arg5;
+ (id)facetWithElement:(int)arg1 part:(int)arg2 fromTheme:(unsigned int)arg3;
+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned int)arg2;
+ (void)initialize;
+ (unsigned int)themeForBundleIdentifier:(id)arg1 error:(id*)arg2;
+ (unsigned int)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3;
+ (void)themeUnregisterThemeRef:(unsigned int)arg1;
+ (unsigned int)themeWithContentsOfURL:(id)arg1 error:(id*)arg2;

- (void)_applyFixedAttributesToKey:(id)arg1;
- (id)_approximateRenditionForRenditionKey:(id)arg1;
- (BOOL)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(int)arg2;
- (void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3 alpha:(float)arg4 operation:(int)arg5 isFocused:(int)arg6;
- (void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 alpha:(float)arg3 operation:(int)arg4 isFocused:(int)arg5 context:(struct CGContext { }*)arg6;
- (void)_drawSlice:(int)arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withKeyAdjustment:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3 alpha:(float)arg4 operation:(int)arg5 isFocused:(int)arg6 isFlipped:(BOOL)arg7;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3 isFocused:(int)arg4 isFlipped:(BOOL)arg5;
- (void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 alpha:(float)arg5 operation:(int)arg6 isFocused:(int)arg7 isFlipped:(BOOL)arg8;
- (struct CGPoint { float x1; float x2; })_hotSpot;
- (id)_imageForRenditionFromKey:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 isMask:(BOOL)arg3;
- (void)_initWithRenditionKey:(id)arg1;
- (BOOL)_isButtonGlyph;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)_setHasCheckedButtonGlyph:(BOOL)arg1;
- (void)_setIsButtonGlyph:(BOOL)arg1;
- (void)_setThemeIndex:(unsigned int)arg1;
- (int)_sliceIndexForSlice:(int)arg1 ofRendition:(id)arg2;
- (id)_themeStore;
- (struct CGSize { float x1; float x2; })_thumbnailSizeForRendition:(id)arg1;
- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(BOOL*)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (float)alpha;
- (int)blendMode;
- (id)blendModeAsCAFilterString;
- (int)controlSize;
- (struct CGImage { }*)copyLayerImageContentsAndCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (struct CGImage { }*)copyLayerImageContentsAndCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 renditionKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4;
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4;
- (void)drawAsOnePartWithSlice:(int)arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4;
- (void)drawGradientInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 angle:(float)arg2 alpha:(float)arg3 operation:(int)arg4 isFocused:(int)arg5 keyAdjustment:(id)arg6 context:(struct CGContext { }*)arg7;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 keyAdjustment:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext { }*)arg6;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4;
- (void)drawInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(int)arg4 context:(struct CGContext { }*)arg5;
- (void)drawInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext { }*)arg6;
- (void)drawInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext { }*)arg6;
- (void)drawInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isFocused:(int)arg2 context:(struct CGContext { }*)arg3;
- (void)drawInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawMaskInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawMaskInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext { }*)arg6;
- (void)drawMaskInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawMaskInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawPulseInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pulseValue:(float)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawPulseInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pulseValue:(float)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawSegmentInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isFocused:(int)arg2 segmentType:(int)arg3 context:(struct CGContext { }*)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)gradientWithKeyAdjustment:(id)arg1 angle:(float*)arg2 style:(unsigned int*)arg3;
- (BOOL)hasValueSlices;
- (id)highlightWithSize:(struct CGSize { float x1; float x2; })arg1 keyAdjustment:(id)arg2;
- (BOOL)hitTestAtPoint:(struct CGPoint { float x1; float x2; })arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 owner:(id)arg3 userInfo:(id)arg4;
- (id)image;
- (id)imageForSlice:(int)arg1 withKeyAdjustment:(id)arg2;
- (id)imageForSliceIndex:(int)arg1;
- (id)imageForState:(int)arg1;
- (id)imageForState:(int)arg1 value:(int)arg2;
- (id)imageForState:(int)arg1 value:(int)arg2 size:(unsigned int)arg3;
- (id)imageForState:(int)arg1 withValue:(int)arg2;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)imageWithKeyAdjustment:(id)arg1;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 keyAdjustment:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned int)arg2;
- (BOOL)isValidButtonImageSource;
- (BOOL)isValidButtonImageSourceForSize:(unsigned int)arg1;
- (id)makeLayer;
- (id)maskForSlice:(int)arg1 withKeyAdjustment:(id)arg2;
- (id)maskWithSize:(struct CGSize { float x1; float x2; })arg1 keyAdjustment:(id)arg2;
- (id)renditionForSpecificKeyWrapper:(id)arg1;
- (id)renditionKey;
- (id)renditionMetricsWithKeyAdjustment:(id)arg1;
- (id)renditionSliceInformationForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyAdjustment:(id)arg2;
- (int)renditionType;
- (void)setControlSize:(int)arg1;
- (unsigned int)themeIndex;
- (id)themeRendition;
- (id)thumbnail;
- (struct CGSize { float x1; float x2; })thumbnailSize;
- (struct CGSize { float x1; float x2; })topLeftCapSize;
- (void)updateLayer:(id)arg1;

@end

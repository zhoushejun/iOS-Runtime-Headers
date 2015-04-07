/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUITextLayout : NSObject <SKUICachedLayout> {
    struct __CTFramesetter { } *_framesetter;
    BOOL _requiresTruncation;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    struct __CTFrame { } *_textFrame;
    struct CGSize { 
        float width; 
        float height; 
    } _truncatedSize;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL requiresTruncation;
@property(readonly) Class superclass;
@property(readonly) struct __CTFrame { }* textFrame;
@property(readonly) struct CGSize { float x1; float x2; } textSize;
@property(readonly) struct CGSize { float x1; float x2; } truncatedSize;

+ (struct __CFAttributedString { }*)_newAttributedStringWithRequest:(id)arg1;
+ (struct __CFAttributedString { }*)newAttributedStringWithText:(id)arg1;

- (void)dealloc;
- (id)initWithLayoutRequest:(id)arg1;
- (BOOL)requiresTruncation;
- (struct __CTFrame { }*)textFrame;
- (struct CGSize { float x1; float x2; })textSize;
- (struct CGSize { float x1; float x2; })truncatedSize;

@end

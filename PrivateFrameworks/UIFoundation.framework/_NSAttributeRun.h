/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSMutableArray, NSTextStorage;

@interface _NSAttributeRun : NSObject <NSCopying> {
    NSMutableArray *_attributesArray;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSTextStorage *_textStorage;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)restoreAttributesOfTextStorage:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface EDAlignmentInfo : NSObject <EDImmutableObject, NSCopying> {
    bool mDoNotModify;
    bool mHorizontalAlignOverridden;
    int mHorizontalAlignment;
    int mIndent;
    bool mIndentOverridden;
    int mTextRotation;
    bool mTextWrapped;
    bool mTextWrappedOveridden;
    bool mVerticalAlignOverridden;
    int mVerticalAlignment;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)alignmentInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (int)horizontalAlignment;
- (int)indent;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAlignmentInfo:(id)arg1;
- (bool)isHorizontalAlignOverridden;
- (bool)isIndentOverridden;
- (bool)isTextWrapped;
- (bool)isTextWrappedOverridden;
- (bool)isVerticalAlignOverridden;
- (void)setDoNotModify:(bool)arg1;
- (void)setHorizontalAlignment:(int)arg1;
- (void)setIndent:(int)arg1;
- (void)setTextRotation:(int)arg1;
- (void)setTextWrapped:(bool)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (int)textRotation;
- (int)verticalAlignment;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle, WDTableCellProperties, WDTableRowProperties;

@interface WDTableStyleOverride : NSObject <NSCopying> {
    WDCharacterProperties *mCharacterProperties;
    unsigned int mCharacterPropertiesOverridden : 1;
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    unsigned int mParagraphPropertiesOverridden : 1;
    int mPart;
    WDStyle *mStyle;
    WDTableCellProperties *mTableCellStyleProperties;
    unsigned int mTableCellStylePropertiesOverridden : 1;
    WDTableRowProperties *mTableRowProperties;
    unsigned int mTableRowPropertiesOverridden : 1;
}

- (id)characterProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (BOOL)isCharacterPropertiesOverridden;
- (BOOL)isParagraphPropertiesOverridden;
- (BOOL)isTableCellStylePropertiesOverridden;
- (BOOL)isTablePropertiesOverridden;
- (BOOL)isTableRowPropertiesOverridden;
- (id)mutableCharacterProperties;
- (id)mutableParagraphProperties;
- (id)mutableTableCellStyleProperties;
- (id)mutableTableRowProperties;
- (id)paragraphProperties;
- (int)part;
- (void)setCharacterPropertiesOverridden:(BOOL)arg1;
- (void)setParagraphPropertiesOverridden:(BOOL)arg1;
- (void)setPart:(int)arg1;
- (void)setStyle:(id)arg1;
- (void)setTableCellStylePropertiesOverridden:(BOOL)arg1;
- (void)setTableRowPropertiesOverridden:(BOOL)arg1;
- (id)style;
- (id)tableCellStyleProperties;
- (id)tableProperties;
- (id)tableRowProperties;

@end

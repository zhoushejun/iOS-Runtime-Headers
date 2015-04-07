/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties;

@interface WDFieldMarker : WDRun {
    int mFieldPosition;
    unsigned char mFieldType;
    unsigned int mHasSeparator : 1;
    unsigned int mLocked : 1;
    int mMarkerType;
    unsigned int mNested : 1;
    unsigned int mPrivateResult : 1;
    WDCharacterProperties *mProperties;
    unsigned int mResultDirty : 1;
    unsigned int mResultEdited : 1;
    unsigned int mZombieEmbed : 1;
}

- (void)clearProperties;
- (void)dealloc;
- (int)fieldMarkerType;
- (int)fieldPosition;
- (unsigned char)fieldType;
- (BOOL)hasSeparator;
- (id)initWithParagraph:(id)arg1;
- (BOOL)locked;
- (BOOL)nested;
- (BOOL)privateResult;
- (id)properties;
- (BOOL)resultDirty;
- (BOOL)resultEdited;
- (int)runType;
- (void)setFieldMarkerType:(int)arg1;
- (void)setFieldPosition:(int)arg1;
- (void)setFieldType:(unsigned char)arg1;
- (void)setHasSeparator:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setNested:(BOOL)arg1;
- (void)setPrivateResult:(BOOL)arg1;
- (void)setResultDirty:(BOOL)arg1;
- (void)setResultEdited:(BOOL)arg1;
- (void)setZombieEmbed:(BOOL)arg1;
- (BOOL)zombieEmbed;

@end

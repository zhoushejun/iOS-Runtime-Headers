/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString;

@interface TSWPEndNoteConnection : NSObject {
    struct { 
        BOOL applicationExists; 
        BOOL oldPluginExists; 
        BOOL currentPluginExists; 
    } _availability;
    BOOL _checkedEndNoteAvailability;
    NSArray *_defaultFormats;
    unsigned int _failedPluginLoadingAttempts;
    NSString *_format;
}

@property(retain) NSString * format;

+ (void)applyEndNoteXml:(id)arg1 toCitationRecord:(id)arg2;
+ (id)currentPluginDownloadURL;
+ (id)sharedEndNoteConnection;

- (id).cxx_construct;
- (BOOL)anyOpenLibraries;
- (BOOL)anyOpenNonEmptyLibraries;
- (struct { BOOL x1; BOOL x2; BOOL x3; })availability;
- (id)availableFormats;
- (void)dealloc;
- (id)defaultStyle;
- (id)favoriteStyles;
- (id)format;
- (id)formatForTag:(int)arg1;
- (BOOL)getBibliographyString:(id*)arg1 andCitationStrings:(id*)arg2 forCitationInfos:(id)arg3 usingPosition:(unsigned int)arg4;
- (BOOL)getBibliographyString:(id*)arg1 andCitationStrings:(id*)arg2 forCitationRecords:(id)arg3 usingPosition:(unsigned int)arg4;
- (BOOL)getFormattedTextForCitation:(id)arg1 usingPosition:(unsigned int)arg2 outCitation:(id*)arg3 outBiblioEntry:(id*)arg4;
- (id)infoForCitation:(id)arg1;
- (id)infoForCitation:(id)arg1 isFootnote:(BOOL)arg2;
- (id)infosForAdjacentCitations:(id)arg1 isFootnote:(BOOL)arg2;
- (id)init;
- (BOOL)isEndNoteAvailable;
- (BOOL)launchEndNote:(BOOL)arg1;
- (id)outputStyles;
- (id)p_getProxyObject;
- (id)p_infoForCitation:(id)arg1 isAdjacent:(BOOL)arg2 isFootnote:(BOOL)arg3;
- (id)recordsForSearchString:(id)arg1 forContext:(id)arg2;
- (void)setFormat:(id)arg1;
- (int)tagForFormat:(id)arg1;

@end

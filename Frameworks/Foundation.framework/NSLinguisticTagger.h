/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSString;

@interface NSLinguisticTagger : NSObject {
    unsigned int _options;
    id _orthographyArray;
    id _reserved;
    NSArray *_schemes;
    NSString *_string;
    id _tokenArray;
}

@property(retain) NSString * string;
@property(copy,readonly) NSArray * tagSchemes;

+ (id)availableTagSchemesForLanguage:(id)arg1;
+ (BOOL)supportsLanguage:(id)arg1;

- (BOOL)_acceptSentenceTerminatorRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 tokens:(struct _NSLTToken { unsigned short x1; unsigned char x2; unsigned char x3; unsigned int x4; union { void *x_5_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_5_1_2; } x5; }*)arg3 count:(unsigned int)arg4 tokenIndex:(unsigned int)arg5;
- (void)_acceptSentencesForParagraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_analyzePunctuationTokensInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_analyzeTokensInInterwordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_analyzeTokensInWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_calculateSentenceRangesForParagraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_ngramTagsAndFrequenciesForMisspelledRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 word:(id)arg2 tags:(id*)arg3 frequencies:(id*)arg4;
- (id)_rankedCandidatesForMisspelledRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 candidates:(id)arg2;
- (id)_rankedCandidatesForMisspelledRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 candidates:(id)arg2 contextualFrequencies:(id*)arg3 baseFrequencies:(id*)arg4;
- (id)_tagSchemeForScheme:(id)arg1;
- (id)_tokenDataForParagraphAtIndex:(unsigned int)arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 requireLemmas:(BOOL)arg3 requirePartsOfSpeech:(BOOL)arg4 requireNamedEntities:(BOOL)arg5;
- (id)_tokenDataForParagraphAtIndex:(unsigned int)arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 tagScheme:(id)arg3;
- (id)_tokenDataForParagraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4;
- (void)_tokenizeParagraphAtIndex:(unsigned int)arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4;
- (void)dealloc;
- (id)description;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 scheme:(id)arg2 options:(unsigned int)arg3 usingBlock:(id)arg4;
- (id)initWithTagSchemes:(id)arg1 options:(unsigned int)arg2;
- (id)languageOfRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)orthographyAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)possibleTagsAtIndex:(unsigned int)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4 scores:(id*)arg5;
- (struct _NSRange { unsigned int x1; unsigned int x2; })sentenceRangeForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setOrthography:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setString:(id)arg1;
- (id)string;
- (void)stringEditedInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (id)tagAtIndex:(unsigned int)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4;
- (id)tagSchemes;
- (id)tagsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 scheme:(id)arg2 options:(unsigned int)arg3 tokenRanges:(id*)arg4;

@end

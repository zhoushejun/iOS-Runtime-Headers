/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNames : NSObject {
}

+ (id)bestName:(id)arg1;
+ (id)cjkSpacerCharacters;
+ (id)cjkSpacersToWhiteSpace:(id)arg1;
+ (id)cleanName:(id)arg1;
+ (id)handleLastNameFirstOrder:(id)arg1;
+ (void)initialize;
+ (BOOL)isCommonNameWord:(id)arg1;
+ (BOOL)isCommonNameWordUtf8:(const char *)arg1 length:(unsigned int)arg2;
+ (BOOL)isCommonVietnameseSurname:(id)arg1;
+ (BOOL)isDifficultName:(id)arg1;
+ (double)nameSimilarity:(id)arg1 and:(id)arg2;
+ (id)nameStringFromEmailAddress:(id)arg1;
+ (BOOL)namesApproximatelyMatch:(id)arg1 and:(id)arg2;
+ (BOOL)namesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3;
+ (id)possibleNameStringFromEmailAddress:(id)arg1;
+ (id)sgNameFromString:(id)arg1;
+ (BOOL)shouldInvertOrderOfFirst:(id)arg1 last:(id)arg2;
+ (id)stripAndReturnHonorifics:(id)arg1;
+ (id)stripHonorifics:(id)arg1;
+ (id)surnameFromName:(id)arg1;
+ (id)universalCleanName:(id)arg1;
+ (double)unnormalizedNameSimilarity:(id)arg1 and:(id)arg2;
+ (BOOL)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2;
+ (BOOL)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3;

@end

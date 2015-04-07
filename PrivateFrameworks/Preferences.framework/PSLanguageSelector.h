/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, NSString;

@interface PSLanguageSelector : NSObject {
    NSString *_language;
    NSArray *_languagesWithLocaleData;
    NSArray *_otherLanguages;
}

+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;
+ (id)sharedInstance;

- (id)appleLanguages;
- (void)dealloc;
- (id)defaultOtherLanguages;
- (id)deviceLanguageIdentifier;
- (BOOL)languageIsSupportedLanguage:(id)arg1;
- (id)languagesWithAvailableLocaleIdentifiers;
- (BOOL)preferredLanguages;
- (id)renderableLanguagesFromList:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLanguage:(id)arg1 fallback:(id)arg2;
- (id)supportedLanguages;
- (id)systemLanguages;
- (id)userDeviceLanguageOrder;

@end

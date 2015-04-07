/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFSiriContext, NSString;

@interface AFDictationOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString *_applicationName;
    NSString *_applicationVersion;
    AFSiriContext *_context;
    NSString *_fieldIdentifier;
    NSString *_fieldLabel;
    NSString *_interactionIdentifier;
    int _keyboardType;
    NSString *_languageCodeOverride;
    NSString *_postfixText;
    NSString *_prefixText;
    int _returnKeyType;
    NSString *_selectedText;
    int _transcriptionMode;
}

@property(copy) NSString * applicationName;
@property(copy) NSString * applicationVersion;
@property(retain) AFSiriContext * context;
@property(copy) NSString * fieldIdentifier;
@property(copy) NSString * fieldLabel;
@property(copy) NSString * interactionIdentifier;
@property int keyboardType;
@property(copy) NSString * languageCodeOverride;
@property(copy) NSString * postfixText;
@property(copy) NSString * prefixText;
@property int returnKeyType;
@property(copy) NSString * selectedText;
@property int transcriptionMode;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationName;
- (id)applicationVersion;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictationOptionsWithoutTextContext;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldIdentifier;
- (id)fieldLabel;
- (id)initWithCoder:(id)arg1;
- (id)interactionIdentifier;
- (int)keyboardType;
- (id)languageCodeOverride;
- (id)postfixText;
- (id)prefixText;
- (int)returnKeyType;
- (id)selectedText;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setLanguageCodeOverride:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setReturnKeyType:(int)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setTranscriptionMode:(int)arg1;
- (int)transcriptionMode;

@end

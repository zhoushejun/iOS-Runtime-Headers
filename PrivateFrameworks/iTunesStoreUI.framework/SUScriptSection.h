/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject {
    NSString *_badgeValue;
    NSString *_identifier;
    BOOL _transient;
    SUScriptViewController *_viewController;
}

@property(retain) NSString * badgeValue;
@property(readonly) NSString * identifier;
@property(readonly) BOOL transient;
@property(readonly) SUScriptViewController * viewController;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)badgeValue;
- (void)dealloc;
- (id)identifier;
- (id)initWithNativeSection:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setBadgeValue:(id)arg1;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
- (BOOL)transient;
- (id)viewController;

@end

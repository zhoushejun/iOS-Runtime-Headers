/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent {
}

@property(readonly) BOOL altGraphKey;
@property(readonly) BOOL altKey;
@property(readonly) int charCode;
@property(readonly) BOOL ctrlKey;
@property(readonly) int keyCode;
@property(copy,readonly) NSString * keyIdentifier;
@property(readonly) unsigned int keyLocation;
@property(readonly) unsigned int location;
@property(readonly) BOOL metaKey;
@property(readonly) BOOL shiftKey;

- (BOOL)altGraphKey;
- (BOOL)altKey;
- (int)charCode;
- (BOOL)ctrlKey;
- (BOOL)getModifierState:(id)arg1;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11;
- (int)keyCode;
- (id)keyIdentifier;
- (unsigned int)keyLocation;
- (unsigned int)location;
- (BOOL)metaKey;
- (BOOL)shiftKey;

@end

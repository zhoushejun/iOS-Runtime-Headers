/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class <NSCopying><NSObject><NSSecureCoding>, NSString, TIKeyboardCandidate, TIKeyboardTouchEvent;

@interface TIKeyboardInput : NSObject <NSSecureCoding> {
    TIKeyboardCandidate *_acceptedCandidate;
    BOOL _backspace;
    union { 
        int integerValue; 
        struct { 
            unsigned int uppercase : 1; 
            unsigned int autoshifted : 1; 
            unsigned int popupVariant : 1; 
            unsigned int multitap : 1; 
            unsigned int flick : 1; 
            unsigned int synthesizedByAcceptingCandidate : 1; 
        } fields; 
    } _flags;
    <NSCopying><NSObject><NSSecureCoding> *_object;
    NSString *_string;
    TIKeyboardTouchEvent *_touchEvent;
}

@property(retain) TIKeyboardCandidate * acceptedCandidate;
@property(getter=isAutoshifted) BOOL autoshifted;
@property(getter=isBackspace) BOOL backspace;
@property(getter=isFlick) BOOL flick;
@property(getter=isMultitap) BOOL multitap;
@property(copy) <NSCopying><NSObject><NSSecureCoding> * object;
@property(getter=isPopupVariant) BOOL popupVariant;
@property(copy) NSString * string;
@property(getter=isSynthesizedByAcceptingCandidate) BOOL synthesizedByAcceptingCandidate;
@property(retain) TIKeyboardTouchEvent * touchEvent;
@property(getter=isUppercase) BOOL uppercase;

+ (BOOL)supportsSecureCoding;

- (id)acceptedCandidate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAutoshifted;
- (BOOL)isBackspace;
- (BOOL)isFlick;
- (BOOL)isMultitap;
- (BOOL)isPopupVariant;
- (BOOL)isSynthesizedByAcceptingCandidate;
- (BOOL)isUppercase;
- (id)object;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setAutoshifted:(BOOL)arg1;
- (void)setBackspace:(BOOL)arg1;
- (void)setFlick:(BOOL)arg1;
- (void)setMultitap:(BOOL)arg1;
- (void)setObject:(id)arg1;
- (void)setPopupVariant:(BOOL)arg1;
- (void)setString:(id)arg1;
- (void)setSynthesizedByAcceptingCandidate:(BOOL)arg1;
- (void)setTouchEvent:(id)arg1;
- (void)setUppercase:(BOOL)arg1;
- (id)string;
- (id)touchEvent;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class SCNAction;

@interface SCNActionRepeat : SCNAction {

  /* Error parsing encoded ivar type info: ^{SCNCActionRepeat=^^?f@?@BddffdBB@?^{__CFString}iffff^{SCNCAction}IIc} */
    struct SCNCActionRepeat { int (**x1)(); float x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id x14; void*x15; struct __CFString {} *x16; int x17; float x18; float x19; float x20; float x21; struct SCNCAction {} *x22; unsigned int x23; unsigned int x24; BOOL x25; } *_mycaction;

    SCNAction *_repeatedAction;
}

+ (id)repeatAction:(id)arg1 count:(unsigned int)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCustom;
- (id)reversedAction;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface SKSequence : SKAction {
    NSArray *_actions;
    unsigned long _animIndex;

  /* Error parsing encoded ivar type info: ^{SKCSequence=^^?If@?@BddffdBB@?iffff{vector<SKCAction *, std::__1::allocator<SKCAction *> >=^^{SKCAction}^^{SKCAction}{__compressed_pair<SKCAction **, std::__1::allocator<SKCAction *> >=^^{SKCAction}}}L} */
    struct SKCSequence { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; bool x7; double x8; double x9; float x10; float x11; double x12; bool x13; bool x14; id x15; void*x16; int x17; float x18; float x19; float x20; float x21; struct vector<SKCAction *, std::__1::allocator<SKCAction *> > { struct SKCAction {} **x_22_1_1; struct SKCAction {} **x_22_1_2; struct __compressed_pair<SKCAction **, std::__1::allocator<SKCAction *> > { struct SKCAction {} **x_3_2_1; } x_22_1_3; } x22; unsigned long x23; } *_mycaction;

}

+ (id)sequenceWithActions:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end

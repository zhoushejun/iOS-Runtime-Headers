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

@interface SKFollowPath : SKAction {
    struct CGPath { } *_cgPath;

  /* Error parsing encoded ivar type info: ^{SKCFollowPath=^^?If@?@BddffdBB@?ifffffI^{PKPath}{?=ff}cc} */
    struct SKCFollowPath { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; bool x7; double x8; double x9; float x10; float x11; double x12; bool x13; bool x14; id x15; void*x16; int x17; float x18; float x19; float x20; float x21; float x22; unsigned int x23; struct PKPath {} *x24; struct { float x_25_1_1; float x_25_1_2; } x25; BOOL x26; BOOL x27; } *_mycaction;

}

+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 speed:(float)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath { }*)arg1 speed:(float)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end

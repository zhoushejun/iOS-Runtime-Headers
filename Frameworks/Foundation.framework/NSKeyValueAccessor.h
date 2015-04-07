/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface NSKeyValueAccessor : NSObject {
    id _containerClassID;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
    unsigned int _extraArgumentCount;
    int (*_implementation)();
    NSString *_key;
    SEL _selector;
}

- (id)containerClassID;
- (void)dealloc;
- (void*)extraArgument1;
- (void*)extraArgument2;
- (unsigned int)extraArgumentCount;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(int (*)())arg3 selector:(SEL)arg4 extraArguments:(void*[3])arg5 count:(unsigned int)arg6;
- (id)key;
- (SEL)selector;

@end

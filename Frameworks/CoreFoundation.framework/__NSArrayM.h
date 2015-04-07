/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSArrayM : NSMutableArray {
    unsigned int _doHardRetain : 1;
    unsigned int _doWeakAccess : 1;
    unsigned int _hasObjects : 1;
    unsigned int _hasStrongReferences : 1;
    id *_list;
    unsigned long _mutations;
    unsigned int _offset;
    unsigned int _size : 28;
    unsigned int _used;
}

+ (id)__new:(const id*)arg1 :(unsigned int)arg2 :(BOOL)arg3 :(BOOL)arg4 :(BOOL)arg5;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)_hasObjects;
- (BOOL)_hasStrongReferences;
- (void)_mutate;
- (void)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)exchangeObjectAtIndex:(unsigned int)arg1 withObjectAtIndex:(unsigned int)arg2;
- (void)finalize;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned int)arg2;

@end

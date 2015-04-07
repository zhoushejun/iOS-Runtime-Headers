/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSLock;

@interface MFWeakSet : NSMutableSet {
    unsigned long _gen;
    NSLock *_lock;
    struct __CFDictionary { } *_objects;
}

+ (id)set;
+ (id)setWithArray:(id)arg1;
+ (id)setWithCapacity:(unsigned int)arg1;
+ (id)setWithObject:(id)arg1;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)setWithSet:(id)arg1;

- (id)_copyAllItems;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (void)intersectSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end

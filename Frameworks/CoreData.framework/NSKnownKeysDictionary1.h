/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)init;
+ (id)initForKeys:(id)arg1;
+ (id)initWithCapacity:(unsigned int)arg1;
+ (id)initWithCoder:(id)arg1;
+ (id)initWithDictionary:(id)arg1;
+ (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
+ (id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned int)arg3;
+ (id)initWithSearchStrategy:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (unsigned int)_countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3 forKeys:(BOOL)arg4;
- (BOOL)_isDeallocating;
- (void)_recount;
- (void)_setValues:(id*)arg1 retain:(BOOL)arg2;
- (BOOL)_tryRetain;
- (unsigned int)_valueCountByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (id)allValues;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (const id*)knownKeyValuesPointer;
- (id)mapping;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setValues:(id*)arg1;
- (id)valueAtIndex:(unsigned int)arg1;
- (const id*)values;

@end

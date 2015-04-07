/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary {
}

@property(readonly) NSKnownKeysMappingStrategy * mapping;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)newInstanceWithSearchStrategy:(id)arg1 inData:(id)arg2;

- (void)_setValues:(id*)arg1 retain:(BOOL)arg2;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (id)initForKeys:(id)arg1;
- (id)initWithSearchStrategy:(id)arg1;
- (id)mapping;
- (void)setValue:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setValues:(id*)arg1;
- (id)valueAtIndex:(unsigned int)arg1;
- (const id*)values;

@end

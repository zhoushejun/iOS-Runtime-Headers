/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned int *_indexes;
    unsigned int _length;
    void *_reserved;
}

@property(readonly) int ab_group;
@property(readonly) int ab_item;
@property(readonly) int item;
@property(readonly) unsigned int length;
@property(readonly) int row;
@property(readonly) int section;
@property(readonly) int tk_row;
@property(readonly) int tk_section;

+ (id)indexPath;
+ (id)indexPathForItem:(int)arg1 inGroup:(int)arg2;
+ (id)indexPathForItem:(int)arg1 inSection:(int)arg2;
+ (id)indexPathForRow:(int)arg1 inSection:(int)arg2;
+ (id)indexPathWithIndex:(unsigned int)arg1;
+ (id)indexPathWithIndexes:(const unsigned int*)arg1 length:(unsigned int)arg2;
+ (id)pu_indexPathsForItems:(id)arg1 inSection:(int)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)tk_indexPathForRow:(int)arg1 inSection:(int)arg2;

- (id)__ck_indexPathShiftedForInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2;
- (BOOL)_gkIsGlobal;
- (int)ab_group;
- (int)ab_item;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dd_stringValue;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndexes:(unsigned int*)arg1;
- (void)getIndexes:(unsigned int*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (unsigned int)indexAtPosition:(unsigned int)arg1;
- (id)indexPathByAddingIndex:(unsigned int)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned int)arg1;
- (id)initWithIndexes:(const unsigned int*)arg1 length:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)item;
- (unsigned int)length;
- (id)pu_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (int)row;
- (int)section;
- (int)tk_row;
- (int)tk_section;

@end

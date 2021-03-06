/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLRUCache : NSObject {
    <ICLRUCacheDelegate> * _delegate;
    NSMapTable * mData;
    unsigned int  mMax;
    NSMutableArray * mOrderedKeys;
}

@property (nonatomic, readonly) NSArray *allKeys;
@property (nonatomic) <ICLRUCacheDelegate> *delegate;
@property (nonatomic, readonly) unsigned int maxSize;

- (void).cxx_destruct;
- (id)allKeys;
- (id)delegate;
- (id)initWithMaxSize:(unsigned int)arg1;
- (unsigned int)maxSize;
- (id)objectForKey:(id)arg1;
- (void)p_removeOldestObject;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

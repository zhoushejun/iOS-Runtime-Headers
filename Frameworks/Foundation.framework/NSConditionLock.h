/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {
    void *_priv;
}

@property(readonly) int condition;
@property(copy) NSString * name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (int)condition;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithCondition:(int)arg1;
- (void)lock;
- (BOOL)lockBeforeDate:(id)arg1;
- (void)lockWhenCondition:(int)arg1;
- (BOOL)lockWhenCondition:(int)arg1 beforeDate:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)tryLock;
- (BOOL)tryLockWhenCondition:(int)arg1;
- (void)unlock;
- (void)unlockWithCondition:(int)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSString, PLOperator;

@interface PLNSNotificationOperatorComposition : NSObject {
    NSArray *_notificationNames;
    id _observer;
    PLOperator *_operator;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _operatorBlock;

    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly) NSString * notificationName;
@property(retain) NSArray * notificationNames;
@property(retain) id observer;
@property PLOperator * operator;
@property(copy) id operatorBlock;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 withBlock:(id)arg3;
- (id)initWithOperator:(id)arg1 forNotifications:(id)arg2 withBlock:(id)arg3;
- (id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 withBlock:(id)arg3;
- (id)initWithWorkQueue:(id)arg1 forNotifications:(id)arg2 withBlock:(id)arg3;
- (void)listenForNotifications:(BOOL)arg1;
- (void)notificationCallback:(id)arg1;
- (id)notificationName;
- (id)notificationNames;
- (id)observer;
- (id)operator;
- (id)operatorBlock;
- (void)setNotificationNames:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end

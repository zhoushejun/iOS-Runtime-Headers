/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, PLOperator;

@interface PLIOHIDOperatorComposition : NSObject {
    struct __IOHIDEventSystemClient { } *_eventSystemClient;
    PLOperator *_operator;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _operatorBlock;

    NSArray *_serviceClients;
    NSString *_serviceName;
}

@property struct __IOHIDEventSystemClient { }* eventSystemClient;
@property(retain) PLOperator * operator;
@property(copy) id operatorBlock;
@property(retain) NSArray * serviceClients;
@property(retain) NSString * serviceName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (struct __IOHIDEventSystemClient { }*)eventSystemClient;
- (id)initWithOperator:(id)arg1 forService:(id)arg2;
- (id)initWithOperator:(id)arg1 forService:(id)arg2 withBlock:(id)arg3;
- (id)operator;
- (id)operatorBlock;
- (id)serviceClients;
- (id)serviceName;
- (void)setEventSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id)arg1;
- (void)setServiceClients:(id)arg1;
- (void)setServiceName:(id)arg1;

@end

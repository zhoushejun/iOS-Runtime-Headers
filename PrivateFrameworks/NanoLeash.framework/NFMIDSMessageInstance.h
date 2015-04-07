/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface NFMIDSMessageInstance : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _retryAction;

    int _retryCount;
    double _retryInterval;
}

@property(copy) id retryAction;
@property int retryCount;
@property double retryInterval;

+ (id)newMessageInstanceWithAction:(id)arg1 retryCount:(int)arg2 retryInterval:(double)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)retryAction;
- (int)retryCount;
- (double)retryInterval;
- (void)setRetryAction:(id)arg1;
- (void)setRetryCount:(int)arg1;
- (void)setRetryInterval:(double)arg1;

@end

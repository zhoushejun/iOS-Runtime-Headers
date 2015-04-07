/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _intervalRequested;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastIntervalUsed;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastNonperiodicFireTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastPeriodicFireTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastStopTime;
    unsigned int _sequenceNum;
}

- (void)_effectiveRateChanged;
- (void)_fireBlockForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 interval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 queue:(id)arg3 block:(id)arg4;

@end

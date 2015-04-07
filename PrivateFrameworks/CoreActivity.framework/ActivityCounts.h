/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreActivity.framework/CoreActivity
 */

@class <CoreActivityActivityDelegate>, NSTimer;

@interface ActivityCounts : NSObject {
    NSTimer *_calorieComputeTimer;
    <CoreActivityActivityDelegate> *_delegate;
    int _epoch_count;
    struct { 
        double xagg; 
        double yagg; 
        double zagg; 
        int numSamples; 
    } calorieFeature;
}

@property(retain) NSTimer * calorieComputeTimer;
@property <CoreActivityActivityDelegate> * delegate;
@property int epoch_count;

- (void).cxx_destruct;
- (id)calorieComputeTimer;
- (void)computeCalories;
- (id)delegate;
- (int)epoch_count;
- (void)handleAccelData:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)init;
- (double)myiir:(double)arg1 x:(double*)arg2 y:(double*)arg3 nCoef:(unsigned int)arg4 aCoef:(const double*)arg5 bCoef:(const double*)arg6;
- (void)setCalorieComputeTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEpoch_count:(int)arg1;
- (void)startCalorieUpdates;
- (void)stopCalorieUpdates;

@end

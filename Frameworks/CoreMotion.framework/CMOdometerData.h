/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSDate, NSNumber;

@interface CMOdometerData : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_averageSpeed;
    NSNumber *_currentSpeed;
    NSNumber *_distance;
    NSDate *_endDate;
    NSDate *_startDate;
}

@property(readonly) NSNumber * averageSpeed;
@property(readonly) NSNumber * currentSpeed;
@property(readonly) NSNumber * distance;
@property(readonly) NSDate * endDate;
@property(readonly) NSDate * startDate;

+ (BOOL)supportsSecureCoding;

- (id)averageSpeed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSpeed;
- (void)dealloc;
- (id)description;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistance:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 currentSpeed:(id)arg4 averageSpeed:(id)arg5;
- (id)startDate;

@end

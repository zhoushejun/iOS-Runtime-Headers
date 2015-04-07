/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSData, NSString;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding> {
}

@property(copy,readonly) NSData * data;
@property(copy,readonly) NSString * name;

+ (id)ICSQuickTimeZoneNames;
+ (id)abbreviationDictionary;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)calendarTimeZone;
+ (id)defaultTimeZone;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)resetSystemTimeZone;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (void)setDefaultTimeZone:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)systemTimeZone;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(int)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;

- (id)ICSComputeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (unsigned long)_cfTypeID;
- (id)abbreviation;
- (id)abbreviationForDate:(id)arg1;
- (id)cityName;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (double)daylightSavingTimeOffset;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)description;
- (id)descriptionForDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (BOOL)isDaylightSavingTime;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTimeZone:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1;
- (BOOL)isNSTimeZone__;
- (BOOL)isUTC;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransition;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (int)secondsFromGMT;
- (int)secondsFromGMTForDate:(id)arg1;
- (void)setCityName:(id)arg1;

@end

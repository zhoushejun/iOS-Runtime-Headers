/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFLocationQueryGeocodeCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _cacheAge;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    unsigned int  _capacity;
    double  _expirationInterval;
}

@property (nonatomic) unsigned int capacity;
@property (nonatomic) double expirationInterval;

- (void).cxx_destruct;
- (void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3;
- (BOOL)_shouldEvictObjectWithDate:(id)arg1;
- (unsigned int)capacity;
- (double)expirationInterval;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setCapacity:(unsigned int)arg1;
- (void)setExpirationInterval:(double)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

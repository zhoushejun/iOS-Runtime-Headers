/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray;

@interface TWCCityUpdater : TWCUpdater {
    NSMutableArray *_parsedCities;
    NSArray *_requestedCities;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _weatherUpdateCompletion;

}

@property(retain) NSMutableArray * parsedCities;
@property(retain) NSArray * requestedCities;

+ (void)clearSharedCityUpdater;
+ (id)sharedCityUpdater;

- (void)_failed:(unsigned int)arg1;
- (id)aggregateDictionaryDomain;
- (void)dealloc;
- (void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned int)arg2;
- (id)parsedCities;
- (id)requestedCities;
- (void)setParsedCities:(id)arg1;
- (void)setRequestedCities:(id)arg1;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(id)arg2;
- (void)updateWeatherForCity:(id)arg1;

@end

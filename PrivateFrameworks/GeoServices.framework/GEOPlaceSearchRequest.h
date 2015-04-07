/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOAddress, GEOBusinessOptions, GEOClientCapabilities, GEOIndexQueryNode, GEOLatLng, GEOLocation, GEOMapRegion, GEOSuggestionsOptions, NSData, NSMutableArray, NSString;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _additionalPlaceTypes;
    GEOAddress *_address;
    struct { 
        unsigned long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _businessIDs;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    BOOL _excludeAddressInResults;
    NSMutableArray *_filterByBusinessCategorys;
    long long _geoId;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int searchContextSubstring : 1; 
        unsigned int geoId : 1; 
        unsigned int intersectingGeoId : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int timestamp : 1; 
        unsigned int businessSortOrder : 1; 
        unsigned int knownAccuracy : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int maxBusinessReviews : 1; 
        unsigned int maxResults : 1; 
        unsigned int placeTypeLimit : 1; 
        unsigned int searchSource : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int transportTypeForTravelTimes : 1; 
        unsigned int excludeAddressInResults : 1; 
        unsigned int includeBusinessCategories : 1; 
        unsigned int includeBusinessRating : 1; 
        unsigned int includeEntryPoints : 1; 
        unsigned int includeFeatureSets : 1; 
        unsigned int includeGeoId : 1; 
        unsigned int includeMatchedToken : 1; 
        unsigned int includeNameForForwardGeocodingResults : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeQuads : 1; 
        unsigned int includeRevgeoRequestTemplate : 1; 
        unsigned int includeSpokenNames : 1; 
        unsigned int includeStatusCodeInfo : 1; 
        unsigned int includeSuggestionsOnly : 1; 
        unsigned int includeTravelDistance : 1; 
        unsigned int includeTravelTime : 1; 
        unsigned int includeUnmatchedStrings : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int isStrictGeocoding : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    } _has;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includeMatchedToken;
    BOOL _includeNameForForwardGeocodingResults;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeRevgeoRequestTemplate;
    BOOL _includeSpokenNames;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeTravelDistance;
    BOOL _includeTravelTime;
    BOOL _includeUnmatchedStrings;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    unsigned long long _intersectingGeoId;
    BOOL _isFromAPI;
    BOOL _isStrictGeocoding;
    BOOL _isStrictMapRegion;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    int _localSearchProviderID;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _optionalSuppressionReasons;
    NSString *_phoneticLocaleIdentifier;
    int _placeTypeLimit;
    GEOAddress *_preserveFields;
    NSString *_search;
    NSString *_searchContext;
    struct { 
        int _beginIndex; 
        int _endIndex; 
        int _stringType; 
    } _searchContextSubstring;
    GEOLatLng *_searchLocation;
    int _searchSource;
    struct { int x1; int x2; int x3; } *_searchSubstrings;
    unsigned int _searchSubstringsCount;
    unsigned int _searchSubstringsSpace;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionGUID;
    BOOL _structuredSearch;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    BOOL _suppressResultsRequiringAttribution;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    int _transportTypeForTravelTimes;
    NSData *_zilchPoints;
}

@property(readonly) int* additionalPlaceTypes;
@property(readonly) unsigned int additionalPlaceTypesCount;
@property(retain) GEOAddress * address;
@property(readonly) unsigned long long* businessIDs;
@property(readonly) unsigned int businessIDsCount;
@property(retain) GEOBusinessOptions * businessOptions;
@property int businessSortOrder;
@property(retain) GEOClientCapabilities * clientCapabilities;
@property(retain) NSString * deviceCountryCode;
@property(retain) GEOLatLng * deviceLocation;
@property(retain) NSString * deviceTimeZone;
@property BOOL excludeAddressInResults;
@property(retain) NSMutableArray * filterByBusinessCategorys;
@property long long geoId;
@property(readonly) BOOL hasAddress;
@property(readonly) BOOL hasBusinessOptions;
@property BOOL hasBusinessSortOrder;
@property(readonly) BOOL hasClientCapabilities;
@property(readonly) BOOL hasDeviceCountryCode;
@property(readonly) BOOL hasDeviceLocation;
@property(readonly) BOOL hasDeviceTimeZone;
@property BOOL hasExcludeAddressInResults;
@property BOOL hasGeoId;
@property BOOL hasIncludeBusinessCategories;
@property BOOL hasIncludeBusinessRating;
@property BOOL hasIncludeEntryPoints;
@property BOOL hasIncludeFeatureSets;
@property BOOL hasIncludeGeoId;
@property BOOL hasIncludeMatchedToken;
@property BOOL hasIncludeNameForForwardGeocodingResults;
@property BOOL hasIncludePhonetics;
@property BOOL hasIncludeQuads;
@property BOOL hasIncludeRevgeoRequestTemplate;
@property BOOL hasIncludeSpokenNames;
@property BOOL hasIncludeStatusCodeInfo;
@property BOOL hasIncludeSuggestionsOnly;
@property BOOL hasIncludeTravelDistance;
@property BOOL hasIncludeTravelTime;
@property BOOL hasIncludeUnmatchedStrings;
@property(readonly) BOOL hasIndexFilter;
@property(readonly) BOOL hasInputLanguage;
@property BOOL hasIntersectingGeoId;
@property BOOL hasIsFromAPI;
@property BOOL hasIsStrictGeocoding;
@property BOOL hasIsStrictMapRegion;
@property BOOL hasKnownAccuracy;
@property(readonly) BOOL hasKnownLocation;
@property BOOL hasLocalSearchProviderID;
@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasMapRegion;
@property BOOL hasMaxBusinessReviews;
@property BOOL hasMaxResults;
@property(readonly) BOOL hasPhoneticLocaleIdentifier;
@property BOOL hasPlaceTypeLimit;
@property(readonly) BOOL hasPreserveFields;
@property(readonly) BOOL hasSearch;
@property(readonly) BOOL hasSearchContext;
@property BOOL hasSearchContextSubstring;
@property(readonly) BOOL hasSearchLocation;
@property BOOL hasSearchSource;
@property BOOL hasSequenceNumber;
@property BOOL hasSessionGUID;
@property BOOL hasStructuredSearch;
@property(readonly) BOOL hasSuggestionsOptions;
@property(readonly) BOOL hasSuggestionsPrefix;
@property BOOL hasSuppressResultsRequiringAttribution;
@property BOOL hasTimeSinceMapEnteredForeground;
@property BOOL hasTimeSinceMapViewportChanged;
@property BOOL hasTimestamp;
@property BOOL hasTransportTypeForTravelTimes;
@property(readonly) BOOL hasZilchPoints;
@property BOOL includeBusinessCategories;
@property BOOL includeBusinessRating;
@property BOOL includeEntryPoints;
@property BOOL includeFeatureSets;
@property BOOL includeGeoId;
@property BOOL includeMatchedToken;
@property BOOL includeNameForForwardGeocodingResults;
@property BOOL includePhonetics;
@property BOOL includeQuads;
@property BOOL includeRevgeoRequestTemplate;
@property BOOL includeSpokenNames;
@property BOOL includeStatusCodeInfo;
@property BOOL includeSuggestionsOnly;
@property BOOL includeTravelDistance;
@property BOOL includeTravelTime;
@property BOOL includeUnmatchedStrings;
@property(retain) GEOIndexQueryNode * indexFilter;
@property(retain) NSString * inputLanguage;
@property unsigned long long intersectingGeoId;
@property BOOL isFromAPI;
@property BOOL isStrictGeocoding;
@property BOOL isStrictMapRegion;
@property int knownAccuracy;
@property(retain) GEOLatLng * knownLocation;
@property int localSearchProviderID;
@property(retain) GEOLocation * location;
@property(retain) GEOMapRegion * mapRegion;
@property int maxBusinessReviews;
@property int maxResults;
@property(readonly) int* optionalSuppressionReasons;
@property(readonly) unsigned int optionalSuppressionReasonsCount;
@property(retain) NSString * phoneticLocaleIdentifier;
@property int placeTypeLimit;
@property(retain) GEOAddress * preserveFields;
@property(retain) NSString * search;
@property(retain) NSString * searchContext;
@property struct { int x1; int x2; int x3; } searchContextSubstring;
@property(retain) GEOLatLng * searchLocation;
@property int searchSource;
@property(readonly) struct { int x1; int x2; int x3; }* searchSubstrings;
@property(readonly) unsigned int searchSubstringsCount;
@property int sequenceNumber;
@property(retain) NSMutableArray * serviceTags;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property BOOL structuredSearch;
@property(retain) GEOSuggestionsOptions * suggestionsOptions;
@property(retain) NSString * suggestionsPrefix;
@property BOOL suppressResultsRequiringAttribution;
@property double timeSinceMapEnteredForeground;
@property double timeSinceMapViewportChanged;
@property double timestamp;
@property int transportTypeForTravelTimes;
@property(retain) NSData * zilchPoints;

- (void)_applyBasicSearchProperties;
- (void)_applyDisplayableSearchProperties;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)addOptionalSuppressionReason:(int)arg1;
- (void)addSearchSubstring:(struct { int x1; int x2; int x3; })arg1;
- (void)addServiceTag:(id)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned int)arg1;
- (int*)additionalPlaceTypes;
- (unsigned int)additionalPlaceTypesCount;
- (id)address;
- (unsigned long long)businessIDAtIndex:(unsigned int)arg1;
- (unsigned long long*)businessIDs;
- (unsigned int)businessIDsCount;
- (id)businessOptions;
- (int)businessSortOrder;
- (void)clearAdditionalPlaceTypes;
- (void)clearBusinessIDs;
- (void)clearFilterByBusinessCategorys;
- (void)clearOptionalSuppressionReasons;
- (void)clearSearchSubstrings;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceLocation;
- (id)deviceTimeZone;
- (id)dictionaryRepresentation;
- (BOOL)excludeAddressInResults;
- (id)filterByBusinessCategoryAtIndex:(unsigned int)arg1;
- (id)filterByBusinessCategorys;
- (unsigned int)filterByBusinessCategorysCount;
- (long long)geoId;
- (BOOL)hasAddress;
- (BOOL)hasBusinessOptions;
- (BOOL)hasBusinessSortOrder;
- (BOOL)hasClientCapabilities;
- (BOOL)hasDeviceCountryCode;
- (BOOL)hasDeviceLocation;
- (BOOL)hasDeviceTimeZone;
- (BOOL)hasExcludeAddressInResults;
- (BOOL)hasGeoId;
- (BOOL)hasIncludeBusinessCategories;
- (BOOL)hasIncludeBusinessRating;
- (BOOL)hasIncludeEntryPoints;
- (BOOL)hasIncludeFeatureSets;
- (BOOL)hasIncludeGeoId;
- (BOOL)hasIncludeMatchedToken;
- (BOOL)hasIncludeNameForForwardGeocodingResults;
- (BOOL)hasIncludePhonetics;
- (BOOL)hasIncludeQuads;
- (BOOL)hasIncludeRevgeoRequestTemplate;
- (BOOL)hasIncludeSpokenNames;
- (BOOL)hasIncludeStatusCodeInfo;
- (BOOL)hasIncludeSuggestionsOnly;
- (BOOL)hasIncludeTravelDistance;
- (BOOL)hasIncludeTravelTime;
- (BOOL)hasIncludeUnmatchedStrings;
- (BOOL)hasIndexFilter;
- (BOOL)hasInputLanguage;
- (BOOL)hasIntersectingGeoId;
- (BOOL)hasIsFromAPI;
- (BOOL)hasIsStrictGeocoding;
- (BOOL)hasIsStrictMapRegion;
- (BOOL)hasKnownAccuracy;
- (BOOL)hasKnownLocation;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasLocation;
- (BOOL)hasMapRegion;
- (BOOL)hasMaxBusinessReviews;
- (BOOL)hasMaxResults;
- (BOOL)hasPhoneticLocaleIdentifier;
- (BOOL)hasPlaceTypeLimit;
- (BOOL)hasPreserveFields;
- (BOOL)hasSearch;
- (BOOL)hasSearchContext;
- (BOOL)hasSearchContextSubstring;
- (BOOL)hasSearchLocation;
- (BOOL)hasSearchSource;
- (BOOL)hasSequenceNumber;
- (BOOL)hasSessionGUID;
- (BOOL)hasStructuredSearch;
- (BOOL)hasSuggestionsOptions;
- (BOOL)hasSuggestionsPrefix;
- (BOOL)hasSuppressResultsRequiringAttribution;
- (BOOL)hasTimeSinceMapEnteredForeground;
- (BOOL)hasTimeSinceMapViewportChanged;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportTypeForTravelTimes;
- (BOOL)hasZilchPoints;
- (unsigned int)hash;
- (BOOL)includeBusinessCategories;
- (BOOL)includeBusinessRating;
- (BOOL)includeEntryPoints;
- (BOOL)includeFeatureSets;
- (BOOL)includeGeoId;
- (BOOL)includeMatchedToken;
- (BOOL)includeNameForForwardGeocodingResults;
- (BOOL)includePhonetics;
- (BOOL)includeQuads;
- (BOOL)includeRevgeoRequestTemplate;
- (BOOL)includeSpokenNames;
- (BOOL)includeStatusCodeInfo;
- (BOOL)includeSuggestionsOnly;
- (BOOL)includeTravelDistance;
- (BOOL)includeTravelTime;
- (BOOL)includeUnmatchedStrings;
- (id)indexFilter;
- (id)initWithTraits:(id)arg1;
- (id)initWithTraits:(id)arg1 includeEntryPoints:(BOOL)arg2;
- (id)initWithTraits:(id)arg1 maxResults:(int)arg2;
- (id)inputLanguage;
- (unsigned long long)intersectingGeoId;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromAPI;
- (BOOL)isStrictGeocoding;
- (BOOL)isStrictMapRegion;
- (int)knownAccuracy;
- (id)knownLocation;
- (int)localSearchProviderID;
- (id)location;
- (id)mapRegion;
- (int)maxBusinessReviews;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (int)optionalSuppressionReasonAtIndex:(unsigned int)arg1;
- (int*)optionalSuppressionReasons;
- (unsigned int)optionalSuppressionReasonsCount;
- (id)phoneticLocaleIdentifier;
- (int)placeTypeLimit;
- (id)preserveFields;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)search;
- (id)searchContext;
- (struct { int x1; int x2; int x3; })searchContextSubstring;
- (id)searchLocation;
- (int)searchSource;
- (struct { int x1; int x2; int x3; })searchSubstringAtIndex:(unsigned int)arg1;
- (struct { int x1; int x2; int x3; }*)searchSubstrings;
- (unsigned int)searchSubstringsCount;
- (int)sequenceNumber;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (id)serviceTags;
- (unsigned int)serviceTagsCount;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setAddress:(id)arg1;
- (void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned int)arg2;
- (void)setBusinessOptions:(id)arg1;
- (void)setBusinessSortOrder:(int)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceTimeZone:(id)arg1;
- (void)setExcludeAddressInResults:(BOOL)arg1;
- (void)setFilterByBusinessCategorys:(id)arg1;
- (void)setGeoId:(long long)arg1;
- (void)setHasBusinessSortOrder:(BOOL)arg1;
- (void)setHasExcludeAddressInResults:(BOOL)arg1;
- (void)setHasGeoId:(BOOL)arg1;
- (void)setHasIncludeBusinessCategories:(BOOL)arg1;
- (void)setHasIncludeBusinessRating:(BOOL)arg1;
- (void)setHasIncludeEntryPoints:(BOOL)arg1;
- (void)setHasIncludeFeatureSets:(BOOL)arg1;
- (void)setHasIncludeGeoId:(BOOL)arg1;
- (void)setHasIncludeMatchedToken:(BOOL)arg1;
- (void)setHasIncludeNameForForwardGeocodingResults:(BOOL)arg1;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setHasIncludeQuads:(BOOL)arg1;
- (void)setHasIncludeRevgeoRequestTemplate:(BOOL)arg1;
- (void)setHasIncludeSpokenNames:(BOOL)arg1;
- (void)setHasIncludeStatusCodeInfo:(BOOL)arg1;
- (void)setHasIncludeSuggestionsOnly:(BOOL)arg1;
- (void)setHasIncludeTravelDistance:(BOOL)arg1;
- (void)setHasIncludeTravelTime:(BOOL)arg1;
- (void)setHasIncludeUnmatchedStrings:(BOOL)arg1;
- (void)setHasIntersectingGeoId:(BOOL)arg1;
- (void)setHasIsFromAPI:(BOOL)arg1;
- (void)setHasIsStrictGeocoding:(BOOL)arg1;
- (void)setHasIsStrictMapRegion:(BOOL)arg1;
- (void)setHasKnownAccuracy:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasMaxBusinessReviews:(BOOL)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHasPlaceTypeLimit:(BOOL)arg1;
- (void)setHasSearchContextSubstring:(BOOL)arg1;
- (void)setHasSearchSource:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionGUID:(BOOL)arg1;
- (void)setHasStructuredSearch:(BOOL)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportTypeForTravelTimes:(BOOL)arg1;
- (void)setIncludeBusinessCategories:(BOOL)arg1;
- (void)setIncludeBusinessRating:(BOOL)arg1;
- (void)setIncludeEntryPoints:(BOOL)arg1;
- (void)setIncludeFeatureSets:(BOOL)arg1;
- (void)setIncludeGeoId:(BOOL)arg1;
- (void)setIncludeMatchedToken:(BOOL)arg1;
- (void)setIncludeNameForForwardGeocodingResults:(BOOL)arg1;
- (void)setIncludePhonetics:(BOOL)arg1;
- (void)setIncludeQuads:(BOOL)arg1;
- (void)setIncludeRevgeoRequestTemplate:(BOOL)arg1;
- (void)setIncludeSpokenNames:(BOOL)arg1;
- (void)setIncludeStatusCodeInfo:(BOOL)arg1;
- (void)setIncludeSuggestionsOnly:(BOOL)arg1;
- (void)setIncludeTravelDistance:(BOOL)arg1;
- (void)setIncludeTravelTime:(BOOL)arg1;
- (void)setIncludeUnmatchedStrings:(BOOL)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setIntersectingGeoId:(unsigned long long)arg1;
- (void)setIsFromAPI:(BOOL)arg1;
- (void)setIsStrictGeocoding:(BOOL)arg1;
- (void)setIsStrictMapRegion:(BOOL)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (void)setKnownLocation:(id)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMaxBusinessReviews:(int)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned int)arg2;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setPlaceTypeLimit:(int)arg1;
- (void)setPreserveFields:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)setSearchContextSubstring:(struct { int x1; int x2; int x3; })arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setSearchSource:(int)arg1;
- (void)setSearchSubstrings:(struct { int x1; int x2; int x3; }*)arg1 count:(unsigned int)arg2;
- (void)setSequenceNumber:(int)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStructuredSearch:(BOOL)arg1;
- (void)setSuggestionsOptions:(id)arg1;
- (void)setSuggestionsPrefix:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setTimeSinceMapEnteredForeground:(double)arg1;
- (void)setTimeSinceMapViewportChanged:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTransportTypeForTravelTimes:(int)arg1;
- (void)setZilchPoints:(id)arg1;
- (BOOL)structuredSearch;
- (id)suggestionsOptions;
- (id)suggestionsPrefix;
- (BOOL)suppressResultsRequiringAttribution;
- (double)timeSinceMapEnteredForeground;
- (double)timeSinceMapViewportChanged;
- (double)timestamp;
- (int)transportTypeForTravelTimes;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end

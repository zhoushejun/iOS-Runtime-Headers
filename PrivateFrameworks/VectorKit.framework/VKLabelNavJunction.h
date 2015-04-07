/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSMutableArray, NSString, VKLabelNavJunction, VKLabelNavRoad, VKLabelNavRoadLabel, VKLabelTile;

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {
    BOOL _areLabelsDisabled;
    unsigned int _depthFromRoute;
    float _distanceFromPreviousShieldLabel;
    BOOL _foundRoads;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; } *_geoJunction;
    BOOL _hasSharedRouteDirection;
    VKLabelNavRoad *_incomingRoad;
    BOOL _isOnDualCarriageway;
    BOOL _isOverpass;
    BOOL _isRouteOverpass;
    BOOL _isRouteRefineJunction;
    VKLabelNavRoadLabel *_junctionSign;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; unsigned char x3; unsigned char x4; unsigned char x5; struct { /* ? */ } *x6; } *_labelFeature;
    int _largestRoadClass;
    NSString *_name;
    VKLabelNavRoad *_outgoingRoad;
    VKLabelNavJunction *_overpassJunction;
    int _preferredLabelPlacement;
    NSMutableArray *_roads;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    } _sharedRouteDirection;
    double _sortValue;
    VKLabelTile *_tile;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    } _tileCoordinate;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _worldCoordinate;
    double _worldUnitsPerMeter;
}

@property unsigned int depthFromRoute;
@property float distanceFromPreviousShieldLabel;
@property(readonly) const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }* geoJunction;
@property(readonly) BOOL hasSharedRouteDirection;
@property(readonly) VKLabelNavRoad * incomingRoad;
@property(readonly) int intraRoadPriority;
@property(readonly) BOOL isAwayFromRoute;
@property(readonly) BOOL isGuidanceStepStart;
@property(readonly) BOOL isInGuidance;
@property(readonly) BOOL isIntersection;
@property(readonly) BOOL isIntraRamp;
@property(readonly) BOOL isMultiRoadIntersection;
@property(readonly) BOOL isOffRouteGraph;
@property BOOL isOnDualCarriageway;
@property(readonly) BOOL isOnRoute;
@property(readonly) BOOL isOverpass;
@property(readonly) BOOL isRamp;
@property(readonly) BOOL isRoadTerminus;
@property BOOL isRouteOverpass;
@property BOOL isRouteRefineJunction;
@property(readonly) BOOL isStartOfRoadName;
@property(readonly) BOOL isTileEdgeJunction;
@property(readonly) VKLabelNavRoadLabel * junctionSign;
@property(readonly) int largestRoadClass;
@property(readonly) NSString * name;
@property(readonly) VKLabelNavRoad * outgoingRoad;
@property VKLabelNavJunction * overpassJunction;
@property int preferredLabelPlacement;
@property(readonly) int requiredLabelPlacement;
@property(readonly) NSArray * roads;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property struct  sharedRouteDirection; /* unknown property attribute:  1>=[2f]} */
@property(readonly) NSString * shieldDisplayGroup;
@property(readonly) VKLabelTile * tile;
@property(readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  tileCoordinate; /* unknown property attribute:  1>=[2f]} */
@property(readonly) double worldUnitsPerMeter;

- (id).cxx_construct;
- (struct VKPoint { double x1; double x2; double x3; })_anchorCoordinateForSignOrientation:(int)arg1;
- (int)_signOrientationWithDrivingSide:(BOOL)arg1;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct { /* ? */ } *x3; }*)arg1 atA:(BOOL)arg2;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1 isDrivingSideRight:(BOOL)arg2;
- (void)dealloc;
- (unsigned int)depthFromRoute;
- (id)description;
- (float)distanceFromPreviousShieldLabel;
- (void)evaluateCrossStreets;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;
- (void)findRoads;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)geoJunction;
- (BOOL)hasSharedRouteDirection;
- (id)incomingRoad;
- (id)initWithGEOJunction:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)arg1 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 tile:(id)arg3;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 atA:(BOOL)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (int)intraRoadPriority;
- (BOOL)isAwayFromRoute;
- (BOOL)isGuidanceStepStart;
- (BOOL)isInGuidance;
- (BOOL)isIntersection;
- (BOOL)isIntraRamp;
- (BOOL)isMultiRoadIntersection;
- (BOOL)isOffRouteGraph;
- (BOOL)isOnDualCarriageway;
- (BOOL)isOnRoute;
- (BOOL)isOverpass;
- (BOOL)isRamp;
- (BOOL)isRoadTerminus;
- (BOOL)isRouteOverpass;
- (BOOL)isRouteRefineJunction;
- (BOOL)isStartOfRoadName;
- (BOOL)isTileEdgeJunction;
- (id)junctionSign;
- (int)largestRoadClass;
- (BOOL)matchesLocationForJunction:(id)arg1;
- (id)name;
- (id)outgoingRoad;
- (id)overpassJunction;
- (int)preferredLabelPlacement;
- (int)requiredLabelPlacement;
- (id)roads;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setDepthFromRoute:(unsigned int)arg1;
- (void)setDistanceFromPreviousShieldLabel:(float)arg1;
- (void)setIsOnDualCarriageway:(BOOL)arg1;
- (void)setIsRouteOverpass:(BOOL)arg1;
- (void)setIsRouteRefineJunction:(BOOL)arg1;
- (void)setOverpassJunction:(id)arg1;
- (void)setPreferredLabelPlacement:(int)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSharedRouteDirection:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })sharedRouteDirection;
- (id)shieldDisplayGroup;
- (id)tile;
- (struct Matrix<float, 2, 1> { float x1[2]; })tileCoordinate;
- (double)worldUnitsPerMeter;

@end

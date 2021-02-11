/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNLocation : CLLocation {
    GEONavigationMatchInfo * _detailedMatchInfo;
    NSDate * _expirationDate;
    bool  _isDirectional;
    bool  _isLeeched;
    bool  _locationUnreliable;
    NSDate * _originalDate;
    int  _rampType;
    CLLocation * _rawLocation;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _rawShiftedCoordinate;
    unsigned int  _roadLineType;
    GEORoadMatch * _roadMatch;
    NSString * _roadName;
    GEORouteMatch * _routeMatch;
    NSString * _shieldText;
    long long  _shieldType;
    unsigned long long  _speedLimit;
    bool  _speedLimitIsMPH;
    long long  _speedLimitShieldType;
    unsigned long long  _state;
    unsigned long long  _traceIndex;
}

@property (nonatomic, readonly) int _nav_source;
@property (nonatomic, retain) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) bool isDirectional;
@property (nonatomic) bool isLeeched;
@property (nonatomic, readonly) bool isProjected;
@property (nonatomic) bool locationUnreliable;
@property (nonatomic, retain) NSDate *originalDate;
@property (nonatomic) int rampType;
@property (nonatomic, retain) CLLocation *rawLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } rawShiftedCoordinate;
@property (nonatomic) unsigned int roadLineType;
@property (nonatomic, retain) GEORoadMatch *roadMatch;
@property (nonatomic, copy) NSString *roadName;
@property (nonatomic, retain) GEORouteMatch *routeMatch;
@property (nonatomic, copy) NSString *shieldText;
@property (nonatomic) long long shieldType;
@property (nonatomic) unsigned long long speedLimit;
@property (nonatomic) bool speedLimitIsMPH;
@property (nonatomic) long long speedLimitShieldType;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic) unsigned long long traceIndex;

- (void).cxx_destruct;
- (int)_nav_source;
- (id)_navigation_detailedMatchInfo;
- (bool)_navigation_hasValidCourse;
- (bool)_navigation_isStale;
- (struct CLLocationCoordinate2D { double x1; double x2; })_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (id)_referenceFrameAsString:(int)arg1;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)_roadFeature;
- (id)description;
- (id)detailedMatchInfo;
- (id)expirationDate;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; })arg1;
- (id)initWithGEOLocation:(id)arg1;
- (id)initWithLocationDetails:(id)arg1;
- (id)initWithLocationDetails:(id)arg1 route:(id)arg2;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRawLocation:(id)arg1 locationMatchType:(unsigned long long)arg2;
- (id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3;
- (id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3;
- (bool)isDirectional;
- (bool)isLeeched;
- (bool)isProjected;
- (bool)locationUnreliable;
- (id)matchInfo;
- (id)originalDate;
- (id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(bool)arg2;
- (int)rampType;
- (id)rawLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })rawShiftedCoordinate;
- (unsigned int)roadLineType;
- (id)roadMatch;
- (id)roadName;
- (id)routeMatch;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsDirectional:(bool)arg1;
- (void)setIsLeeched:(bool)arg1;
- (void)setLocationUnreliable:(bool)arg1;
- (void)setOriginalDate:(id)arg1;
- (void)setRampType:(int)arg1;
- (void)setRawLocation:(id)arg1;
- (void)setRawShiftedCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setRoadLineType:(unsigned int)arg1;
- (void)setRoadMatch:(id)arg1;
- (void)setRoadName:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setShieldText:(id)arg1;
- (void)setShieldType:(long long)arg1;
- (void)setSpeedLimit:(unsigned long long)arg1;
- (void)setSpeedLimitIsMPH:(bool)arg1;
- (void)setSpeedLimitShieldType:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTraceIndex:(unsigned long long)arg1;
- (id)shieldText;
- (long long)shieldType;
- (unsigned long long)speedLimit;
- (bool)speedLimitIsMPH;
- (long long)speedLimitShieldType;
- (unsigned long long)state;
- (unsigned long long)stepIndex;
- (unsigned long long)traceIndex;

@end
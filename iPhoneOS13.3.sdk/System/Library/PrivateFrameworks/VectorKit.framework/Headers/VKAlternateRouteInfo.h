//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKRouteInfo.h>

@interface VKAlternateRouteInfo : VKRouteInfo
{
    struct PolylineCoordinate _divergenceCoordinate;
    struct PolylineCoordinate _convergenceCoordinate;
    unsigned char _etaComparisonToMain;
}

@property(nonatomic) unsigned char etaComparisionToMain; // @synthesize etaComparisionToMain=_etaComparisonToMain;
@property(readonly, nonatomic) struct PolylineCoordinate convergenceCoordinate; // @synthesize convergenceCoordinate=_convergenceCoordinate;
@property(readonly, nonatomic) struct PolylineCoordinate divergenceCoordinate; // @synthesize divergenceCoordinate=_divergenceCoordinate;
- (id).cxx_construct;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2 divergenceRouteCoordinate:(struct PolylineCoordinate)arg3 convergenceRouteCoordinate:(struct PolylineCoordinate)arg4;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2 divergenceRouteCoordinate:(struct PolylineCoordinate)arg3 convergenceRouteCoordinate:(struct PolylineCoordinate)arg4;

@end


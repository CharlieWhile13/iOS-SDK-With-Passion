//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKFeatureMarker.h>

@class NSArray, NSDictionary;

@interface VKVenueBuildingFeatureMarker : VKFeatureMarker
{
    BOOL _localize;
}

- (CDStruct_c3b9c2ee)nearestFramingPositionToLocation:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) NSDictionary *floorNames;
@property(readonly, nonatomic) NSDictionary *shortFloorNames;
@property(readonly, nonatomic) NSArray *floorOrdinals;
@property(readonly, nonatomic) NSUInteger businessId;
@property(readonly, nonatomic) NSUInteger buildingId;
- (const shared_ptr_ec62a932 )venueBuildingFeatureMarker;
- (id)initWithVenueBuilding:(const struct VenueBuilding )arg1 localize:(BOOL)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEONavigationMatchInfo : NSObject
{
    double routeMatchScore;
    double distanceFromRoute;
    double maxDistance;
    double distanceMatchScore;
    double distanceWeight;
    double courseDelta;
    double maxCourseDelta;
    double courseMatchScore;
    double courseWeight;
    double roadWidthOnRoute;
    double distanceFromRoad;
    double roadCourseDelta;
    double distanceFromNearestJunction;
}

@property(nonatomic) double distanceFromNearestJunction; // @synthesize distanceFromNearestJunction;
@property(nonatomic) double roadCourseDelta; // @synthesize roadCourseDelta;
@property(nonatomic) double distanceFromRoad; // @synthesize distanceFromRoad;
@property(nonatomic) double roadWidthOnRoute; // @synthesize roadWidthOnRoute;
@property(nonatomic) double courseWeight; // @synthesize courseWeight;
@property(nonatomic) double courseMatchScore; // @synthesize courseMatchScore;
@property(nonatomic) double maxCourseDelta; // @synthesize maxCourseDelta;
@property(nonatomic) double courseDelta; // @synthesize courseDelta;
@property(nonatomic) double distanceWeight; // @synthesize distanceWeight;
@property(nonatomic) double distanceMatchScore; // @synthesize distanceMatchScore;
@property(nonatomic) double maxDistance; // @synthesize maxDistance;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute;
@property(nonatomic) double routeMatchScore; // @synthesize routeMatchScore;
- (id)description;

@end


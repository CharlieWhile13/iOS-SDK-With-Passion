//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEONavCameraState : PBCodable <NSCopying>
{
    int _distanceToManeuver;
    int _speedBucket;
    int _upcomingManeuverType;
    BOOL _isGroupedManeuver;
    struct {
        unsigned int has_distanceToManeuver:1;
        unsigned int has_speedBucket:1;
        unsigned int has_upcomingManeuverType:1;
        unsigned int has_isGroupedManeuver:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSpeedBucket:(id)arg1;
- (id)speedBucketAsString:(int)arg1;
@property(nonatomic) BOOL hasSpeedBucket;
@property(nonatomic) int speedBucket;
@property(nonatomic) BOOL hasIsGroupedManeuver;
@property(nonatomic) BOOL isGroupedManeuver;
- (int)StringAsDistanceToManeuver:(id)arg1;
- (id)distanceToManeuverAsString:(int)arg1;
@property(nonatomic) BOOL hasDistanceToManeuver;
@property(nonatomic) int distanceToManeuver;
- (int)StringAsUpcomingManeuverType:(id)arg1;
- (id)upcomingManeuverTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasUpcomingManeuverType;
@property(nonatomic) int upcomingManeuverType;

@end


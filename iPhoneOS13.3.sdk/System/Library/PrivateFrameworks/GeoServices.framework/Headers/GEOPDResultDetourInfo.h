//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

@interface GEOPDResultDetourInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _detourDistance;
    int _detourTime;
    unsigned int _distanceToPlace;
    unsigned int _timeToPlace;
    struct {
        unsigned int has_detourDistance:1;
        unsigned int has_detourTime:1;
        unsigned int has_distanceToPlace:1;
        unsigned int has_timeToPlace:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(nonatomic) BOOL hasDistanceToPlace;
@property(nonatomic) unsigned int distanceToPlace;
@property(nonatomic) BOOL hasDetourDistance;
@property(nonatomic) int detourDistance;
@property(nonatomic) BOOL hasTimeToPlace;
@property(nonatomic) unsigned int timeToPlace;
@property(nonatomic) BOOL hasDetourTime;
@property(nonatomic) int detourTime;

@end


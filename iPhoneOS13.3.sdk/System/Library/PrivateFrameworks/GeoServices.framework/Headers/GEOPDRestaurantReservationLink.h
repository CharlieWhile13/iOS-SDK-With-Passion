//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRestaurantReservationLink : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_restaurantLinks;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)restaurantLinkType;
+ (id)reservationLinkForPlaceData:(id)arg1;
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
- (id)restaurantLinkAtIndex:(NSUInteger)arg1;
- (NSUInteger)restaurantLinksCount;
- (void)addRestaurantLink:(id)arg1;
- (void)clearRestaurantLinks;
@property(retain, nonatomic) NSMutableArray *restaurantLinks;

@end


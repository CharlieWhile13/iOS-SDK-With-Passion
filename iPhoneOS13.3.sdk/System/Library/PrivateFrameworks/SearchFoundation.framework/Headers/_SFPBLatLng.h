//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBLatLng-Protocol.h>

@class NSData;

@interface _SFPBLatLng : PBCodable <_SFPBLatLng, NSSecureCoding>
{
    double _lat;
    double _lng;
}

@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

@end


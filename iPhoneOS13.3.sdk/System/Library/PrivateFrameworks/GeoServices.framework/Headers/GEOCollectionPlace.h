//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

@interface GEOCollectionPlace : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_address;
    GEOLatLng *_coordinate;
    NSUInteger _muid;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _providerId;
    struct {
        unsigned int has_muid:1;
        unsigned int has_providerId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_coordinate:1;
        unsigned int read_name:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_name:1;
        unsigned int wrote_providerId:1;
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
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
@property(retain, nonatomic) GEOLatLng *coordinate;
@property(readonly, nonatomic) BOOL hasCoordinate;
- (void)_readCoordinate;
@property(retain, nonatomic) NSString *address;
@property(readonly, nonatomic) BOOL hasAddress;
- (void)_readAddress;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) NSUInteger muid;
@property(nonatomic) BOOL hasProviderId;
@property(nonatomic) int providerId;
- (id)initWithData:(id)arg1;
- (id)init;

@end


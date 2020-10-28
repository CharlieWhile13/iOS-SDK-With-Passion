//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItem : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_photo;
    NSString *_primaryText;
    NSString *_secondaryText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _photoItemType;
    struct {
        unsigned int has_photoItemType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_photo:1;
        unsigned int read_primaryText:1;
        unsigned int read_secondaryText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_photo:1;
        unsigned int wrote_primaryText:1;
        unsigned int wrote_secondaryText:1;
        unsigned int wrote_photoItemType:1;
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
- (int)StringAsPhotoItemType:(id)arg1;
- (id)photoItemTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPhotoItemType;
@property(nonatomic) int photoItemType;
@property(retain, nonatomic) NSString *secondaryText;
@property(readonly, nonatomic) BOOL hasSecondaryText;
- (void)_readSecondaryText;
@property(retain, nonatomic) NSString *primaryText;
@property(readonly, nonatomic) BOOL hasPrimaryText;
- (void)_readPrimaryText;
@property(retain, nonatomic) GEOPDPhoto *photo;
@property(readonly, nonatomic) BOOL hasPhoto;
- (void)_readPhoto;
- (id)initWithData:(id)arg1;
- (id)init;

@end


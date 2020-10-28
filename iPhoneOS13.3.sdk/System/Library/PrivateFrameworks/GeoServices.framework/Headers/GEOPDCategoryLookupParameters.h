//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategoryLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    long long _industryCode;
    NSString *_mapsCategoryId;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_industryCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapsCategoryId:1;
        unsigned int read_walletCategoryId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_industryCode:1;
        unsigned int wrote_mapsCategoryId:1;
        unsigned int wrote_walletCategoryId:1;
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
@property(nonatomic) BOOL hasIndustryCode;
@property(nonatomic) long long industryCode;
@property(retain, nonatomic) NSString *walletCategoryId;
@property(readonly, nonatomic) BOOL hasWalletCategoryId;
- (void)_readWalletCategoryId;
@property(retain, nonatomic) NSString *mapsCategoryId;
@property(readonly, nonatomic) BOOL hasMapsCategoryId;
- (void)_readMapsCategoryId;
- (id)initWithData:(id)arg1;
- (id)init;

@end


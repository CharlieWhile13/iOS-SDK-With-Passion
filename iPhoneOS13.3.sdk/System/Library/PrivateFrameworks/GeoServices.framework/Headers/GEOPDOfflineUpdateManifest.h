//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineUpdateManifest : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_datas;
    NSMutableArray *_patchs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_datas:1;
        unsigned int read_patchs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_datas:1;
        unsigned int wrote_patchs:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)dataType;
+ (Class)patchType;
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
- (id)dataAtIndex:(NSUInteger)arg1;
- (NSUInteger)datasCount;
- (void)_addNoFlagsData:(id)arg1;
- (void)addData:(id)arg1;
- (void)clearDatas;
@property(retain, nonatomic) NSMutableArray *datas;
- (void)_readDatas;
- (id)patchAtIndex:(NSUInteger)arg1;
- (NSUInteger)patchsCount;
- (void)_addNoFlagsPatch:(id)arg1;
- (void)addPatch:(id)arg1;
- (void)clearPatchs;
@property(retain, nonatomic) NSMutableArray *patchs;
- (void)_readPatchs;
- (id)initWithData:(id)arg1;
- (id)init;

@end

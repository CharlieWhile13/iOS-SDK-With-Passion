//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDStorefrontPresentation, NSMutableArray, PBDataReader;

@interface GEOPDStorefrontBundle : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_faces;
    NSUInteger _identifier;
    NSUInteger _matchedMuid;
    GEOPDStorefrontPresentation *_presentation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_identifier:1;
        unsigned int has_matchedMuid:1;
        unsigned int read_faces:1;
        unsigned int read_presentation:1;
        unsigned int wrote_faces:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_matchedMuid:1;
        unsigned int wrote_presentation:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)faceType;
// - (void).cxx_destruct;
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
@property(nonatomic) BOOL hasMatchedMuid;
@property(nonatomic) NSUInteger matchedMuid;
- (id)faceAtIndex:(NSUInteger)arg1;
- (NSUInteger)facesCount;
- (void)_addNoFlagsFace:(id)arg1;
- (void)addFace:(id)arg1;
- (void)clearFaces;
@property(retain, nonatomic) NSMutableArray *faces;
- (void)_readFaces;
@property(retain, nonatomic) GEOPDStorefrontPresentation *presentation;
@property(readonly, nonatomic) BOOL hasPresentation;
- (void)_readPresentation;
@property(nonatomic) BOOL hasIdentifier;
@property(nonatomic) NSUInteger identifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end


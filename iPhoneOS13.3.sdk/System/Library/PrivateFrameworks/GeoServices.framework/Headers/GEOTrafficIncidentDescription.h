//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncidentDescription : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_incidentDescription;
    NSString *_language;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_incidentDescription:1;
        unsigned int read_language:1;
        unsigned int wrote_incidentDescription:1;
        unsigned int wrote_language:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *incidentDescription;
@property(readonly, nonatomic) BOOL hasIncidentDescription;
- (void)_readIncidentDescription;
@property(retain, nonatomic) NSString *language;
@property(readonly, nonatomic) BOOL hasLanguage;
- (void)_readLanguage;
- (id)initWithData:(id)arg1;
- (id)init;

@end


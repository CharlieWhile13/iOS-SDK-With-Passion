//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDAutocompleteSessionData, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    NSMutableArray *_clientRankingFeatureMetadatas;
    NSMutableArray *_sections;
    NSMutableArray *_sortPriorityMappings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _retainSearchTime;
    BOOL _enableRap;
    BOOL _isNoResultFromNegativeCache;
    BOOL _isTopSectionTypeQuery;
    BOOL _shouldDifferentiateClientAndServerResults;
    BOOL _shouldDisplayNoResults;
    struct {
        unsigned int has_retainSearchTime:1;
        unsigned int has_enableRap:1;
        unsigned int has_isNoResultFromNegativeCache:1;
        unsigned int has_isTopSectionTypeQuery:1;
        unsigned int has_shouldDifferentiateClientAndServerResults:1;
        unsigned int has_shouldDisplayNoResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteSessionData:1;
        unsigned int read_clientRankingFeatureMetadatas:1;
        unsigned int read_sections:1;
        unsigned int read_sortPriorityMappings:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_autocompleteSessionData:1;
        unsigned int wrote_clientRankingFeatureMetadatas:1;
        unsigned int wrote_sections:1;
        unsigned int wrote_sortPriorityMappings:1;
        unsigned int wrote_retainSearchTime:1;
        unsigned int wrote_enableRap:1;
        unsigned int wrote_isNoResultFromNegativeCache:1;
        unsigned int wrote_isTopSectionTypeQuery:1;
        unsigned int wrote_shouldDifferentiateClientAndServerResults:1;
        unsigned int wrote_shouldDisplayNoResults:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)clientRankingFeatureMetadataType;
+ (Class)sortPriorityMappingType;
+ (Class)sectionsType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;
@property(readonly, nonatomic) BOOL hasAutocompleteSessionData;
- (void)_readAutocompleteSessionData;
@property(nonatomic) BOOL hasShouldDifferentiateClientAndServerResults;
@property(nonatomic) BOOL shouldDifferentiateClientAndServerResults;
- (id)clientRankingFeatureMetadataAtIndex:(NSUInteger)arg1;
- (NSUInteger)clientRankingFeatureMetadatasCount;
- (void)_addNoFlagsClientRankingFeatureMetadata:(id)arg1;
- (void)addClientRankingFeatureMetadata:(id)arg1;
- (void)clearClientRankingFeatureMetadatas;
@property(retain, nonatomic) NSMutableArray *clientRankingFeatureMetadatas;
- (void)_readClientRankingFeatureMetadatas;
@property(nonatomic) BOOL hasIsTopSectionTypeQuery;
@property(nonatomic) BOOL isTopSectionTypeQuery;
- (id)sortPriorityMappingAtIndex:(NSUInteger)arg1;
- (NSUInteger)sortPriorityMappingsCount;
- (void)_addNoFlagsSortPriorityMapping:(id)arg1;
- (void)addSortPriorityMapping:(id)arg1;
- (void)clearSortPriorityMappings;
@property(retain, nonatomic) NSMutableArray *sortPriorityMappings;
- (void)_readSortPriorityMappings;
@property(nonatomic) BOOL hasIsNoResultFromNegativeCache;
@property(nonatomic) BOOL isNoResultFromNegativeCache;
@property(nonatomic) BOOL hasRetainSearchTime;
@property(nonatomic) unsigned int retainSearchTime;
@property(nonatomic) BOOL hasShouldDisplayNoResults;
@property(nonatomic) BOOL shouldDisplayNoResults;
@property(nonatomic) BOOL hasEnableRap;
@property(nonatomic) BOOL enableRap;
- (id)sectionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)sectionsCount;
- (void)_addNoFlagsSections:(id)arg1;
- (void)addSections:(id)arg1;
- (void)clearSections;
@property(retain, nonatomic) NSMutableArray *sections;
- (void)_readSections;
- (id)initWithData:(id)arg1;
- (id)init;

@end


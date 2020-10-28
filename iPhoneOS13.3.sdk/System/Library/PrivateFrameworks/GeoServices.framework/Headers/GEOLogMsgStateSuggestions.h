//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgStateSuggestions : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_displayedResults;
    NSString *_searchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _acSequenceNumber;
    int _searchFieldType;
    int _selectedIndex;
    struct {
        unsigned int has_acSequenceNumber:1;
        unsigned int has_searchFieldType:1;
        unsigned int has_selectedIndex:1;
        unsigned int read_displayedResults:1;
        unsigned int read_searchString:1;
        unsigned int wrote_displayedResults:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_acSequenceNumber:1;
        unsigned int wrote_searchFieldType:1;
        unsigned int wrote_selectedIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)displayedResultType;
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
@property(nonatomic) BOOL hasAcSequenceNumber;
@property(nonatomic) int acSequenceNumber;
- (int)StringAsSearchFieldType:(id)arg1;
- (id)searchFieldTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchFieldType;
@property(nonatomic) int searchFieldType;
@property(nonatomic) BOOL hasSelectedIndex;
@property(nonatomic) int selectedIndex;
- (id)displayedResultAtIndex:(NSUInteger)arg1;
- (NSUInteger)displayedResultsCount;
- (void)_addNoFlagsDisplayedResult:(id)arg1;
- (void)addDisplayedResult:(id)arg1;
- (void)clearDisplayedResults;
@property(retain, nonatomic) NSMutableArray *displayedResults;
- (void)_readDisplayedResults;
@property(retain, nonatomic) NSString *searchString;
@property(readonly, nonatomic) BOOL hasSearchString;
- (void)_readSearchString;
- (id)initWithData:(id)arg1;
- (id)init;

@end


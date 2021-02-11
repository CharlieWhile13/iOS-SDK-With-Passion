/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPopularNearbySearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxResults : 1; 
        unsigned int has_searchType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_suggestionEntryMetadata : 1; 
        unsigned int wrote_viewportInfo : 1; 
        unsigned int wrote_maxResults : 1; 
        unsigned int wrote_searchType : 1; 
    }  _flags;
    unsigned int  _maxResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _searchType;
    NSData * _suggestionEntryMetadata;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) bool hasMaxResults;
@property (nonatomic) bool hasSearchType;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) int searchType;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (void)_readSuggestionEntryMetadata;
- (void)_readViewportInfo;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasSearchType;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)suggestionEntryMetadata;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
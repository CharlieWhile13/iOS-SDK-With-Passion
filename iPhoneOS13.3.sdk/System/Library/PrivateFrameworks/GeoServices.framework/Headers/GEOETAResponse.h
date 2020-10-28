//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOClientMetrics, GEOETAResult, GEOETAServiceResponseSummary, GEOPDDatasetABStatus, GEOPlaceSearchResponse, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOETAResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOProblemDetail _problemDetails;
    NSUInteger _problemDetailsCount;
    NSUInteger _problemDetailsSpace;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    NSUInteger _debugServerLatencyMs;
    NSMutableArray *_etaResultReferencePointDestinations;
    GEOETAResult *_etaResultReferencePointOrigin;
    NSMutableArray *_etaResults;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_debugServerLatencyMs:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_problemDetails:1;
        unsigned int read_clientMetrics:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_debugData:1;
        unsigned int read_etaResultReferencePointDestinations:1;
        unsigned int read_etaResultReferencePointOrigin:1;
        unsigned int read_etaResults:1;
        unsigned int read_etaServiceSummary:1;
        unsigned int read_originPlaceSearchResponse:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_problemDetails:1;
        unsigned int wrote_clientMetrics:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_debugData:1;
        unsigned int wrote_debugServerLatencyMs:1;
        unsigned int wrote_etaResultReferencePointDestinations:1;
        unsigned int wrote_etaResultReferencePointOrigin:1;
        unsigned int wrote_etaResults:1;
        unsigned int wrote_etaServiceSummary:1;
        unsigned int wrote_originPlaceSearchResponse:1;
        unsigned int wrote_status:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)etaResultReferencePointDestinationType;
+ (Class)etaResultType;
// - (void).cxx_destruct;
@property(retain, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) BOOL hasClientMetrics;
- (void)_readClientMetrics;
@property(nonatomic) BOOL hasDebugServerLatencyMs;
@property(nonatomic) NSUInteger debugServerLatencyMs;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) BOOL hasEtaServiceSummary;
- (void)_readEtaServiceSummary;
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
@property(retain, nonatomic) NSString *debugData;
@property(readonly, nonatomic) BOOL hasDebugData;
- (void)_readDebugData;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property(readonly, nonatomic) BOOL hasDatasetAbStatus;
- (void)_readDatasetAbStatus;
- (id)etaResultReferencePointDestinationAtIndex:(NSUInteger)arg1;
- (NSUInteger)etaResultReferencePointDestinationsCount;
- (void)_addNoFlagsEtaResultReferencePointDestination:(id)arg1;
- (void)addEtaResultReferencePointDestination:(id)arg1;
- (void)clearEtaResultReferencePointDestinations;
@property(retain, nonatomic) NSMutableArray *etaResultReferencePointDestinations;
- (void)_readEtaResultReferencePointDestinations;
@property(retain, nonatomic) GEOETAResult *etaResultReferencePointOrigin;
@property(readonly, nonatomic) BOOL hasEtaResultReferencePointOrigin;
- (void)_readEtaResultReferencePointOrigin;
- (void)setProblemDetails:(struct GEOProblemDetail )arg1 count:(NSUInteger)arg2;
- (struct GEOProblemDetail)problemDetailAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsProblemDetail:(struct GEOProblemDetail)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail)arg1;
- (void)clearProblemDetails;
@property(readonly, nonatomic) struct GEOProblemDetail problemDetails;
@property(readonly, nonatomic) NSUInteger problemDetailsCount;
- (void)_readProblemDetails;
@property(retain, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse;
@property(readonly, nonatomic) BOOL hasOriginPlaceSearchResponse;
- (void)_readOriginPlaceSearchResponse;
- (id)etaResultAtIndex:(NSUInteger)arg1;
- (NSUInteger)etaResultsCount;
- (void)_addNoFlagsEtaResult:(id)arg1;
- (void)addEtaResult:(id)arg1;
- (void)clearEtaResults;
@property(retain, nonatomic) NSMutableArray *etaResults;
- (void)_readEtaResults;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end


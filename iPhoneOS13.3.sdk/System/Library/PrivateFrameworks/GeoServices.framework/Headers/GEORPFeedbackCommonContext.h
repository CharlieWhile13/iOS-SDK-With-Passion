//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOABAssignmentResponse, GEORPCurrentEnvironmentManifestURLs, GEORPMapLocation, GEORPNavigationSettings, GEORPSearchCommonContext, GEORPSourceInfo, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackCommonContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _userPaths;
    NSMutableArray *_auxiliaryControls;
    double _clientCreatedAt;
    GEOABAssignmentResponse *_currentAbAssignmentResponse;
    GEORPCurrentEnvironmentManifestURLs *_currentEnvironmentManifestUrls;
    GEORPMapLocation *_mapLocation;
    GEORPNavigationSettings *_navigationSettings;
    NSUInteger _originatingAuxiliaryControlIndex;
    GEORPSearchCommonContext *_searchCommon;
    GEORPSourceInfo *_sourceInfo;
    NSMutableArray *_visibleTileSets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _deviceGmtOffset;
    int _pinType;
    struct {
        unsigned int has_clientCreatedAt:1;
        unsigned int has_originatingAuxiliaryControlIndex:1;
        unsigned int has_deviceGmtOffset:1;
        unsigned int has_pinType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_userPaths:1;
        unsigned int read_auxiliaryControls:1;
        unsigned int read_currentAbAssignmentResponse:1;
        unsigned int read_currentEnvironmentManifestUrls:1;
        unsigned int read_mapLocation:1;
        unsigned int read_navigationSettings:1;
        unsigned int read_searchCommon:1;
        unsigned int read_sourceInfo:1;
        unsigned int read_visibleTileSets:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_userPaths:1;
        unsigned int wrote_auxiliaryControls:1;
        unsigned int wrote_clientCreatedAt:1;
        unsigned int wrote_currentAbAssignmentResponse:1;
        unsigned int wrote_currentEnvironmentManifestUrls:1;
        unsigned int wrote_mapLocation:1;
        unsigned int wrote_navigationSettings:1;
        unsigned int wrote_originatingAuxiliaryControlIndex:1;
        unsigned int wrote_searchCommon:1;
        unsigned int wrote_sourceInfo:1;
        unsigned int wrote_visibleTileSets:1;
        unsigned int wrote_deviceGmtOffset:1;
        unsigned int wrote_pinType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)auxiliaryControlType;
+ (Class)visibleTileSetType;
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
@property(retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property(readonly, nonatomic) BOOL hasCurrentAbAssignmentResponse;
- (void)_readCurrentAbAssignmentResponse;
@property(retain, nonatomic) GEORPSearchCommonContext *searchCommon;
@property(readonly, nonatomic) BOOL hasSearchCommon;
- (void)_readSearchCommon;
@property(retain, nonatomic) GEORPSourceInfo *sourceInfo;
@property(readonly, nonatomic) BOOL hasSourceInfo;
- (void)_readSourceInfo;
@property(retain, nonatomic) GEORPNavigationSettings *navigationSettings;
@property(readonly, nonatomic) BOOL hasNavigationSettings;
- (void)_readNavigationSettings;
@property(retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property(readonly, nonatomic) BOOL hasCurrentEnvironmentManifestUrls;
- (void)_readCurrentEnvironmentManifestUrls;
@property(nonatomic) BOOL hasDeviceGmtOffset;
@property(nonatomic) int deviceGmtOffset;
@property(nonatomic) BOOL hasOriginatingAuxiliaryControlIndex;
@property(nonatomic) NSUInteger originatingAuxiliaryControlIndex;
- (id)auxiliaryControlAtIndex:(NSUInteger)arg1;
- (NSUInteger)auxiliaryControlsCount;
- (void)_addNoFlagsAuxiliaryControl:(id)arg1;
- (void)addAuxiliaryControl:(id)arg1;
- (void)clearAuxiliaryControls;
@property(retain, nonatomic) NSMutableArray *auxiliaryControls;
- (void)_readAuxiliaryControls;
@property(nonatomic) BOOL hasClientCreatedAt;
@property(nonatomic) double clientCreatedAt;
- (int)StringAsUserPaths:(id)arg1;
- (id)userPathsAsString:(int)arg1;
- (void)setUserPaths:(int )arg1 count:(NSUInteger)arg2;
- (int)userPathAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsUserPath:(int)arg1;
- (void)addUserPath:(int)arg1;
- (void)clearUserPaths;
@property(readonly, nonatomic) int userPaths;
@property(readonly, nonatomic) NSUInteger userPathsCount;
- (void)_readUserPaths;
- (id)visibleTileSetAtIndex:(NSUInteger)arg1;
- (NSUInteger)visibleTileSetsCount;
- (void)_addNoFlagsVisibleTileSet:(id)arg1;
- (void)addVisibleTileSet:(id)arg1;
- (void)clearVisibleTileSets;
@property(retain, nonatomic) NSMutableArray *visibleTileSets;
- (void)_readVisibleTileSets;
@property(retain, nonatomic) GEORPMapLocation *mapLocation;
@property(readonly, nonatomic) BOOL hasMapLocation;
- (void)_readMapLocation;
- (int)StringAsPinType:(id)arg1;
- (id)pinTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPinType;
@property(nonatomic) int pinType;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end


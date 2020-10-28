//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying>
{
    double _expirationDate;
    NSMutableArray *_searchAdsSettingsParams;
    struct {
        unsigned int expirationDate:1;
    } _has;
}

+ (Class)searchAdsSettingsParamsType;
@property(retain, nonatomic) NSMutableArray *searchAdsSettingsParams; // @synthesize searchAdsSettingsParams=_searchAdsSettingsParams;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)searchAdsSettingsParamsAtIndex:(NSUInteger)arg1;
- (NSUInteger)searchAdsSettingsParamsCount;
- (void)addSearchAdsSettingsParams:(id)arg1;
- (void)clearSearchAdsSettingsParams;
@property(nonatomic) BOOL hasExpirationDate;

@end


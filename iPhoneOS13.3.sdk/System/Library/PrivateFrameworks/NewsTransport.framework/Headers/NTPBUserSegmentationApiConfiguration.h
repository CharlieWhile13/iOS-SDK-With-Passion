//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBUserSegmentationApiConfiguration : PBCodable <NSCopying>
{
    NSString *_userSegmentationApiModMax;
    NSString *_userSegmentationApiModThreshold;
    NSString *_userSegmentationRefreshRate;
}

@property(retain, nonatomic) NSString *userSegmentationRefreshRate; // @synthesize userSegmentationRefreshRate=_userSegmentationRefreshRate;
@property(retain, nonatomic) NSString *userSegmentationApiModMax; // @synthesize userSegmentationApiModMax=_userSegmentationApiModMax;
@property(retain, nonatomic) NSString *userSegmentationApiModThreshold; // @synthesize userSegmentationApiModThreshold=_userSegmentationApiModThreshold;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUserSegmentationRefreshRate;
@property(readonly, nonatomic) BOOL hasUserSegmentationApiModMax;
@property(readonly, nonatomic) BOOL hasUserSegmentationApiModThreshold;

@end


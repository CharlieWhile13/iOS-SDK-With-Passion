//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString, NTPBIssueData, NTPBIssueViewData;

@interface NTPBArticleEngagement : PBCodable <NSCopying>
{
    long long _articleOpenedAtTimestamp;
    long long _eventTimestamp;
    int _articleEngagementType;
    NSString *_articleId;
    NSString *_channelId;
    NSString *_countryCode;
    NSString *_deviceModel;
    NTPBIssueData *_issueData;
    NTPBIssueViewData *_issueViewData;
    NSData *_sessionId;
    NSString *_userId;
    int _utcOffset;
    BOOL _isPaidSubscriber;
    struct {
        unsigned int articleOpenedAtTimestamp:1;
        unsigned int eventTimestamp:1;
        unsigned int articleEngagementType:1;
        unsigned int utcOffset:1;
        unsigned int isPaidSubscriber:1;
    } _has;
}

@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(nonatomic) BOOL isPaidSubscriber; // @synthesize isPaidSubscriber=_isPaidSubscriber;
@property(nonatomic) long long articleOpenedAtTimestamp; // @synthesize articleOpenedAtTimestamp=_articleOpenedAtTimestamp;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) int utcOffset; // @synthesize utcOffset=_utcOffset;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(nonatomic) long long eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDeviceModel;
@property(readonly, nonatomic) BOOL hasIssueViewData;
@property(readonly, nonatomic) BOOL hasIssueData;
@property(nonatomic) BOOL hasIsPaidSubscriber;
@property(nonatomic) BOOL hasArticleOpenedAtTimestamp;
@property(readonly, nonatomic) BOOL hasCountryCode;
@property(nonatomic) BOOL hasUtcOffset;
@property(readonly, nonatomic) BOOL hasChannelId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(nonatomic) BOOL hasEventTimestamp;
@property(readonly, nonatomic) BOOL hasUserId;
@property(readonly, nonatomic) BOOL hasSessionId;
@property(nonatomic) BOOL hasArticleEngagementType;
@property(nonatomic) int articleEngagementType; // @synthesize articleEngagementType=_articleEngagementType;

@end

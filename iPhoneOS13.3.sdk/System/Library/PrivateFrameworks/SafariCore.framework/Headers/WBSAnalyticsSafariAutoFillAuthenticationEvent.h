//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface WBSAnalyticsSafariAutoFillAuthenticationEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _category;
    int _client;
    NSString *_errorCode;
    NSString *_errorDomain;
    int _status;
    BOOL _onPageLoad;
    struct {
        unsigned int timestamp:1;
        unsigned int category:1;
        unsigned int client:1;
        unsigned int status:1;
        unsigned int onPageLoad:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) BOOL onPageLoad; // @synthesize onPageLoad=_onPageLoad;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasOnPageLoad;
- (int)StringAsClient:(id)arg1;
- (id)clientAsString:(int)arg1;
@property(nonatomic) BOOL hasClient;
@property(nonatomic) int client; // @synthesize client=_client;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (int)StringAsCategory:(id)arg1;
- (id)categoryAsString:(int)arg1;
@property(nonatomic) BOOL hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
@property(nonatomic) BOOL hasTimestamp;

@end


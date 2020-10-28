//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface AWDMailSearchSessionReport : PBCodable <NSCopying>
{
    NSUInteger _messagesLeftToIndex;
    NSUInteger _percentOfMessagesIndexed;
    NSUInteger _timestamp;
    int _emailProvider;
    NSMutableArray *_engagements;
    struct {
        unsigned int messagesLeftToIndex:1;
        unsigned int percentOfMessagesIndexed:1;
        unsigned int timestamp:1;
        unsigned int emailProvider:1;
    } _has;
}

+ (Class)engagementsType;
@property(nonatomic) NSUInteger percentOfMessagesIndexed; // @synthesize percentOfMessagesIndexed=_percentOfMessagesIndexed;
@property(nonatomic) NSUInteger messagesLeftToIndex; // @synthesize messagesLeftToIndex=_messagesLeftToIndex;
@property(retain, nonatomic) NSMutableArray *engagements; // @synthesize engagements=_engagements;
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
- (int)StringAsEmailProvider:(id)arg1;
- (id)emailProviderAsString:(int)arg1;
@property(nonatomic) BOOL hasEmailProvider;
@property(nonatomic) int emailProvider; // @synthesize emailProvider=_emailProvider;
@property(nonatomic) BOOL hasPercentOfMessagesIndexed;
@property(nonatomic) BOOL hasMessagesLeftToIndex;
- (id)engagementsAtIndex:(NSUInteger)arg1;
- (NSUInteger)engagementsCount;
- (void)addEngagements:(id)arg1;
- (void)clearEngagements;
@property(nonatomic) BOOL hasTimestamp;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class EDPETQuotaReachedEvent, EDPETSubmittedEvent, NSData;

@interface EDPETBatchedWrapper : PBCodable <NSCopying>
{
    EDPETQuotaReachedEvent *_quotaEvent;
    NSData *_rawData;
    EDPETSubmittedEvent *_submittedEvent;
}

@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) EDPETSubmittedEvent *submittedEvent; // @synthesize submittedEvent=_submittedEvent;
@property(retain, nonatomic) EDPETQuotaReachedEvent *quotaEvent; // @synthesize quotaEvent=_quotaEvent;
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
@property(readonly, nonatomic) BOOL hasRawData;
@property(readonly, nonatomic) BOOL hasSubmittedEvent;
@property(readonly, nonatomic) BOOL hasQuotaEvent;

@end


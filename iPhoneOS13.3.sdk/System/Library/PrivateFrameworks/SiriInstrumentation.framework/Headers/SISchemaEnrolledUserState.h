//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaPersonalization;

@interface SISchemaEnrolledUserState : PBCodable
{
    NSString *_siriLinkedSpeechID;
    SISchemaPersonalization *_personalization;
}

@property(retain, nonatomic) SISchemaPersonalization *personalization; // @synthesize personalization=_personalization;
@property(copy, nonatomic) NSString *siriLinkedSpeechID; // @synthesize siriLinkedSpeechID=_siriLinkedSpeechID;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end


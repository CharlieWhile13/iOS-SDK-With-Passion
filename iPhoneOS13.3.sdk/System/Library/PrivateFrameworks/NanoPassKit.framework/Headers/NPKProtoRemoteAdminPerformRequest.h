//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSData, NSString;

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying>
{
    NSString *_command;
    NSData *_infoDictionary;
    NSString *_seid;
    NSData *_url;
}

@property(retain, nonatomic) NSData *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(retain, nonatomic) NSString *seid; // @synthesize seid=_seid;
@property(retain, nonatomic) NSData *url; // @synthesize url=_url;
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
@property(readonly, nonatomic) BOOL hasInfoDictionary;

@end


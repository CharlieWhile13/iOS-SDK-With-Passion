//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString, SYErrorInfo, SYMessageHeader;

@interface SYStartSyncSessionResponse : PBCodable <NSCopying>
{
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSData *_metadata;
    NSString *_sessionID;
    BOOL _accepted;
    BOOL _supportsRestart;
    BOOL _supportsRollback;
}

@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL supportsRestart; // @synthesize supportsRestart=_supportsRestart;
@property(nonatomic) BOOL supportsRollback; // @synthesize supportsRollback=_supportsRollback;
@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) BOOL accepted; // @synthesize accepted=_accepted;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
@property(readonly, nonatomic) BOOL hasMetadata;
@property(readonly, nonatomic) BOOL hasError;

@end


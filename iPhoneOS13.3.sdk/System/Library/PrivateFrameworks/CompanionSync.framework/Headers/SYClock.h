//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class SYPeer;

@interface SYClock : PBCodable <NSCopying>
{
    NSUInteger _version;
    SYPeer *_peer;
}

+ (void)initialize;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
@property(retain, nonatomic) SYPeer *peer; // @synthesize peer=_peer;
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
- (id)_myDescription;
- (NSUInteger)increment;
- (NSUInteger)increaseBy:(NSUInteger)arg1;

@end


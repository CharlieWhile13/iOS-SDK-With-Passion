//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface WBSAnalyticsSafariUnableToSilentlyMigrateToCKBookmarksEvent : PBCodable <NSCopying>
{
    struct {
        int list;
        NSUInteger count;
        NSUInteger size;
    } _reasons;
    NSUInteger _timestamp;
    CDStruct_b5306035 _has;
}

@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsReasons:(id)arg1;
- (id)reasonsAsString:(int)arg1;
- (void)setReasons:(int )arg1 count:(NSUInteger)arg2;
- (int)reasonAtIndex:(NSUInteger)arg1;
- (void)addReason:(int)arg1;
- (void)clearReasons;
@property(readonly, nonatomic) int reasons;
@property(readonly, nonatomic) NSUInteger reasonsCount;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end


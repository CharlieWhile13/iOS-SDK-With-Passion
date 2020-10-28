//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, TPPBDictionaryMatchingRuleFieldExists, TPPBDictionaryMatchingRuleFieldRegexMatch;

@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying>
{
    NSMutableArray *_ands;
    TPPBDictionaryMatchingRuleFieldExists *_exists;
    TPPBDictionaryMatchingRuleFieldRegexMatch *_match;
    TPPBDictionaryMatchingRule *_not;
    NSMutableArray *_ors;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

+ (Class)orType;
+ (Class)andType;
@property(retain, nonatomic) TPPBDictionaryMatchingRuleFieldExists *exists; // @synthesize exists=_exists;
@property(retain, nonatomic) TPPBDictionaryMatchingRuleFieldRegexMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) TPPBDictionaryMatchingRule *not; // @synthesize not=_not;
@property(retain, nonatomic) NSMutableArray *ors; // @synthesize ors=_ors;
@property(retain, nonatomic) NSMutableArray *ands; // @synthesize ands=_ands;
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
@property(readonly, nonatomic) BOOL hasExists;
@property(readonly, nonatomic) BOOL hasMatch;
@property(readonly, nonatomic) BOOL hasNot;
- (id)orAtIndex:(NSUInteger)arg1;
- (NSUInteger)orsCount;
- (void)addOr:(id)arg1;
- (void)clearOrs;
- (id)andAtIndex:(NSUInteger)arg1;
- (NSUInteger)andsCount;
- (void)addAnd:(id)arg1;
- (void)clearAnds;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (BOOL)invertMatch:(id)arg1 error:(id )arg2;
- (BOOL)performOrMatch:(id)arg1 error:(id )arg2;
- (BOOL)performAndMatch:(id)arg1 error:(id )arg2;
- (BOOL)matches:(id)arg1 error:(id )arg2;

@end


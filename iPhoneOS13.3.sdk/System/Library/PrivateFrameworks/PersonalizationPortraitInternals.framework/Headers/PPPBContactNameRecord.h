//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface PPPBContactNameRecord : PBCodable <NSCopying>
{
    double _score;
    unsigned char _changeType;
    NSMutableArray *_cityNames;
    NSString *_firstName;
    NSString *_identifier;
    NSString *_jobTitle;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_nickname;
    NSString *_organizationName;
    NSString *_phoneticFirstName;
    NSString *_phoneticLastName;
    NSString *_phoneticMiddleName;
    NSMutableArray *_relatedNames;
    unsigned char _source;
    NSString *_sourceIdentifier;
    NSMutableArray *_streetNames;
    struct {
        unsigned int score:1;
        unsigned int changeType:1;
        unsigned int source:1;
    } _has;
}

+ (Class)cityNamesType;
+ (Class)streetNamesType;
+ (Class)relatedNamesType;
@property(retain, nonatomic) NSMutableArray *cityNames; // @synthesize cityNames=_cityNames;
@property(retain, nonatomic) NSMutableArray *streetNames; // @synthesize streetNames=_streetNames;
@property(retain, nonatomic) NSMutableArray *relatedNames; // @synthesize relatedNames=_relatedNames;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *phoneticLastName; // @synthesize phoneticLastName=_phoneticLastName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property(nonatomic) unsigned char source; // @synthesize source=_source;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
- (id)cityNamesAtIndex:(NSUInteger)arg1;
- (NSUInteger)cityNamesCount;
- (void)addCityNames:(id)arg1;
- (void)clearCityNames;
- (id)streetNamesAtIndex:(NSUInteger)arg1;
- (NSUInteger)streetNamesCount;
- (void)addStreetNames:(id)arg1;
- (void)clearStreetNames;
- (id)relatedNamesAtIndex:(NSUInteger)arg1;
- (NSUInteger)relatedNamesCount;
- (void)addRelatedNames:(id)arg1;
- (void)clearRelatedNames;
@property(readonly, nonatomic) BOOL hasNickname;
@property(readonly, nonatomic) BOOL hasJobTitle;
@property(readonly, nonatomic) BOOL hasOrganizationName;
@property(readonly, nonatomic) BOOL hasPhoneticLastName;
@property(readonly, nonatomic) BOOL hasLastName;
@property(readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property(readonly, nonatomic) BOOL hasMiddleName;
@property(readonly, nonatomic) BOOL hasPhoneticFirstName;
@property(readonly, nonatomic) BOOL hasFirstName;
@property(readonly, nonatomic) BOOL hasSourceIdentifier;
- (unsigned char)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(unsigned char)arg1;
@property(nonatomic) BOOL hasChangeType;
- (unsigned char)StringAsSource:(id)arg1;
- (id)sourceAsString:(unsigned char)arg1;
@property(nonatomic) BOOL hasSource;
@property(nonatomic) BOOL hasScore;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end


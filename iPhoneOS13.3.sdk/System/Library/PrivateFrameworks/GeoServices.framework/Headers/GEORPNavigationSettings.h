//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface GEORPNavigationSettings : PBCodable <NSCopying>
{
    NSUInteger _distanceUnits;
    NSUInteger _maxAlternateRouteCount;
    NSString *_voiceLanguage;
    NSUInteger _voiceVolume;
    int _userPreferredTransportType;
    BOOL _beepBeforeInstruction;
    BOOL _muteSpeechOverride;
    BOOL _pauseSpokenAudio;
    BOOL _shouldUseGuidanceEventManager;
    BOOL _speechEnabled;
    struct {
        unsigned int has_distanceUnits:1;
        unsigned int has_maxAlternateRouteCount:1;
        unsigned int has_voiceVolume:1;
        unsigned int has_userPreferredTransportType:1;
        unsigned int has_beepBeforeInstruction:1;
        unsigned int has_muteSpeechOverride:1;
        unsigned int has_pauseSpokenAudio:1;
        unsigned int has_shouldUseGuidanceEventManager:1;
        unsigned int has_speechEnabled:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsUserPreferredTransportType:(id)arg1;
- (id)userPreferredTransportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasUserPreferredTransportType;
@property(nonatomic) int userPreferredTransportType;
@property(nonatomic) BOOL hasShouldUseGuidanceEventManager;
@property(nonatomic) BOOL shouldUseGuidanceEventManager;
@property(retain, nonatomic) NSString *voiceLanguage;
@property(readonly, nonatomic) BOOL hasVoiceLanguage;
@property(nonatomic) BOOL hasBeepBeforeInstruction;
@property(nonatomic) BOOL beepBeforeInstruction;
@property(nonatomic) BOOL hasMaxAlternateRouteCount;
@property(nonatomic) NSUInteger maxAlternateRouteCount;
@property(nonatomic) BOOL hasSpeechEnabled;
@property(nonatomic) BOOL speechEnabled;
@property(nonatomic) BOOL hasMuteSpeechOverride;
@property(nonatomic) BOOL muteSpeechOverride;
@property(nonatomic) BOOL hasPauseSpokenAudio;
@property(nonatomic) BOOL pauseSpokenAudio;
@property(nonatomic) BOOL hasDistanceUnits;
@property(nonatomic) NSUInteger distanceUnits;
@property(nonatomic) BOOL hasVoiceVolume;
@property(nonatomic) NSUInteger voiceVolume;

@end


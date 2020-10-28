//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKGameDescriptor.h>

@class GKStoreItemInternal, NSDictionary, NSString;

@interface GKGameInternal : GKGameDescriptor
{
    NSString *_name;
    NSDictionary *_icons;
    NSString *_defaultLeaderboardIdentifier;
    GKStoreItemInternal *_storeItem;
    union {
        struct {
            unsigned int _platform_unused:8;
            unsigned int _prerendered:1;
            unsigned int _supportsLeaderboards:1;
            unsigned int _supportsLeaderboardSets:1;
            unsigned int _hasAggregateLeaderboard:1;
            unsigned int _supportsAchievements:1;
            unsigned int _supportsMultiplayer:1;
            unsigned int _valid:1;
            unsigned int _unused:1;
            unsigned int _supportsTurnBasedMultiplayer:1;
            unsigned int _reserved:15;
        } ;
        unsigned int _value;
    } _flags;
    unsigned short _numberOfLeaderboards;
    unsigned short _numberOfLeaderboardSets;
    unsigned short _numberOfAchievements;
    unsigned short _maxAchievementPoints;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(nonatomic) unsigned short maxAchievementPoints; // @synthesize maxAchievementPoints=_maxAchievementPoints;
@property(nonatomic) unsigned short numberOfAchievements; // @synthesize numberOfAchievements=_numberOfAchievements;
@property(nonatomic) unsigned short numberOfLeaderboardSets; // @synthesize numberOfLeaderboardSets=_numberOfLeaderboardSets;
@property(nonatomic) unsigned short numberOfLeaderboards; // @synthesize numberOfLeaderboards=_numberOfLeaderboards;
@property(retain, nonatomic) NSString *defaultLeaderboardIdentifier; // @synthesize defaultLeaderboardIdentifier=_defaultLeaderboardIdentifier;
@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(nonatomic) BOOL supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;
@property(nonatomic, getter=isValid) BOOL valid; // @dynamic valid;
@property(readonly, nonatomic) BOOL canBeIndexed;
@property(nonatomic) BOOL supportsMultiplayer; // @dynamic supportsMultiplayer;
@property(nonatomic) BOOL supportsAchievements; // @dynamic supportsAchievements;
@property(nonatomic) BOOL hasAggregateLeaderboard;
@property(nonatomic) BOOL supportsLeaderboardSets; // @dynamic supportsLeaderboardSets;
@property(nonatomic) BOOL supportsLeaderboards; // @dynamic supportsLeaderboards;
@property(nonatomic, getter=isPrerendered) BOOL prerendered; // @dynamic prerendered;
- (id)description;
- (id)serverRepresentation;
- (void)dealloc;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)defaultCategory;
- (unsigned short)numberOfCategories;

@end


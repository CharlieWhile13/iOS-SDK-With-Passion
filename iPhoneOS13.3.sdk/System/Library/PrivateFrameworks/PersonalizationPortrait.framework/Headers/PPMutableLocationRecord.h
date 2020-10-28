//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPLocationRecord.h>

@class NSArray, NSString, NSUUID, PPLocation, PPSource;

@interface PPMutableLocationRecord : PPLocationRecord
{
}

+ (id)new;
@property(nonatomic) double sentimentScore; // @dynamic sentimentScore;
@property(nonatomic) NSUInteger extractionAssetVersion; // @dynamic extractionAssetVersion;
@property(retain, nonatomic) NSString *extractionOsBuild; // @dynamic extractionOsBuild;
@property(retain, nonatomic) NSArray *contextualNamedEntities; // @dynamic contextualNamedEntities;
@property(nonatomic) double decayRate; // @dynamic decayRate;
@property(nonatomic) double initialScore; // @dynamic initialScore;
@property(nonatomic) unsigned short algorithm; // @dynamic algorithm;
@property(retain, nonatomic) PPSource *source; // @dynamic source;
@property(retain, nonatomic) PPLocation *location; // @dynamic location;
@property(retain, nonatomic) NSUUID *uuid; // @dynamic uuid;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end


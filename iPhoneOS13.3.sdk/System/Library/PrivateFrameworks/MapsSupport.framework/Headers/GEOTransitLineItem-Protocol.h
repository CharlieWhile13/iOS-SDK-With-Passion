//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/GEOTransitLine-Protocol.h>

@class GEOMapRegion, NSArray;
@protocol GEOEncyclopedicInfo, GEOTransitAttribution;

@protocol GEOTransitLineItem <GEOTransitLine>
@property(readonly, nonatomic) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic) BOOL hasEncyclopedicInfo;
@property(readonly, nonatomic) BOOL hasIncidentComponent;
@property(readonly, nonatomic) BOOL isIncidentsTTLExpired;
@property(readonly, nonatomic) NSArray *incidents;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) id <GEOTransitAttribution> attribution;
@property(readonly, nonatomic) NSArray *labelItems;
@end


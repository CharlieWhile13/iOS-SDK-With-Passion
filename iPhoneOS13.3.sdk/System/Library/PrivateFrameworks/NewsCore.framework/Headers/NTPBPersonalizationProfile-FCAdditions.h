//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsTransport/NTPBPersonalizationProfile.h>

@class NSDictionary;

@interface NTPBPersonalizationProfile (FCAdditions)
- (NSUInteger)lastChangeNumberForInstanceIdentifier:(id)arg1;
- (id)historyForInstanceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *historiesByInstanceIdentifier;
@property(readonly, nonatomic) NSDictionary *aggregatesByFeatureKey;
@end


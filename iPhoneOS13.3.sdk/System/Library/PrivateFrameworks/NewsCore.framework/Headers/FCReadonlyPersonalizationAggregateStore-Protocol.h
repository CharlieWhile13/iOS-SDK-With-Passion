//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FCPersonalizationTreatment, NSArray, NSDictionary;
@protocol FCPersonalizationAggregate;

@protocol FCReadonlyPersonalizationAggregateStore <NSObject>
- (void)processTodayPersonalizationUpdates:(NSArray *)arg1 withConfigurableValues:(FCPersonalizationTreatment *)arg2;
- (NSDictionary *)aggregatesForFeatures:(NSArray *)arg1;
- (id <FCPersonalizationAggregate>)baselineAggregateWithConfigurableValues:(FCPersonalizationTreatment *)arg1;
@end

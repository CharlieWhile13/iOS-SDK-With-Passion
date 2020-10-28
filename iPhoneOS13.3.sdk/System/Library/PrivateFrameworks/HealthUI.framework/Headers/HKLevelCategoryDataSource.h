//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSArray;

@interface HKLevelCategoryDataSource : HKHealthQueryChartCacheDataSource
{
    HKSampleType *_sampleType;
    id /* CDUnknownBlockType */ _userInfoCreationBlock;
    id /* CDUnknownBlockType */ _pointStyleBlock;
    NSArray *_valueOrder;
}

@property(retain, nonatomic) NSArray *valueOrder; // @synthesize valueOrder=_valueOrder;
@property(copy, nonatomic) id /* CDUnknownBlockType */ pointStyleBlock; // @synthesize pointStyleBlock=_pointStyleBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(retain, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
// - (void).cxx_destruct;
- (void)_handleSamples:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKObject, HKQuantity, _HDDemoDataModule;

@protocol _HDDemoDataModuleDelegate <NSObject>
@property(readonly, nonatomic) HKQuantity *speed;
@property(readonly, nonatomic) long long activityType;
- (void)demoDataModule:(_HDDemoDataModule *)arg1 didProduceDataObject:(HKObject *)arg2;
@end


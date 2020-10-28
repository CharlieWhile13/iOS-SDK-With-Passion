//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKDisplayTypeController, HKHealthStore, HKSample, HKSampleType, HKUnitPreferenceController, NSPredicate, NSString, UIViewController;

@protocol HKDataMetadataViewControllerDelegate <NSObject>
@property(readonly, nonatomic) HKHealthStore *healthStore;

@optional
- (BOOL)shareDocumentUsingSample:(HKSample *)arg1;
- (UIViewController *)accessViewControllerForSample:(HKSample *)arg1 healthStore:(HKHealthStore *)arg2;
- (UIViewController *)viewControllerForSampleType:(HKSampleType *)arg1 subSamplePredicate:(NSPredicate *)arg2 title:(NSString *)arg3;
- (NSPredicate *)defaultPredicateForSampleType:(HKSampleType *)arg1;
- (HKUnitPreferenceController *)unitController;
- (HKDisplayTypeController *)displayTypeController;
@end


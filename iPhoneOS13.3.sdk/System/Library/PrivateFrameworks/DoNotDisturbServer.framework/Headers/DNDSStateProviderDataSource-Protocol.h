//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDModeAssertion, DNDSStateProvider, NSArray, NSDateInterval;

@protocol DNDSStateProviderDataSource <NSObject>
- (NSUInteger)currentLostModeStateForStateProvider:(DNDSStateProvider *)arg1;
- (NSUInteger)currentInterruptionBehaviorSettingForStateProvider:(DNDSStateProvider *)arg1;
- (NSDateInterval *)stateProvider:(DNDSStateProvider *)arg1 activeDateIntervalForModeAssertion:(DNDModeAssertion *)arg2;
- (NSArray *)currentlyActiveModeAssertionsForStateProvider:(DNDSStateProvider *)arg1;
@end


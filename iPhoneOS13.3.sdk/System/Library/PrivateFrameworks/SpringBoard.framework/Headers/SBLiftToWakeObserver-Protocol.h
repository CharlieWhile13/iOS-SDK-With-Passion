//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBLiftToWakeController;

@protocol SBLiftToWakeObserver <NSObject>

@optional
- (void)liftToWakeController:(SBLiftToWakeController *)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;
- (void)liftToWakeControllerEnablementDidChange:(SBLiftToWakeController *)arg1;
@end


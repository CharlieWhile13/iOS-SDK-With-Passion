//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSProcessHandle, ITIdleTimerConfiguration, NSString;

@protocol ITIdleTimerStateServerDelegate <NSObject>
- (void)clientDidDisconnect:(BSProcessHandle *)arg1;
- (void)removeIdleTimerConfigurationFromProcess:(BSProcessHandle *)arg1 forReason:(NSString *)arg2;
- (BOOL)addIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 fromProcess:(BSProcessHandle *)arg2 forReason:(NSString *)arg3;
- (BOOL)isIdleTimerServiceAvailable;
@end


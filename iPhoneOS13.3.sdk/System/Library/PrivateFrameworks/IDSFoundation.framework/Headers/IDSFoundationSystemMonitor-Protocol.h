//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol IMSystemMonitorListener;

@protocol IDSFoundationSystemMonitor <NSObject>
- (void)removeListener:(id <IMSystemMonitorListener>)arg1;
- (void)addListener:(id <IMSystemMonitorListener>)arg1;
- (BOOL)isUnderFirstDataProtectionLock;
- (BOOL)isSetup;
@end


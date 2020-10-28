//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor
{
    int _notifyToken;
    BOOL _isSoftwareUpdateCheckingRunning;
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(BOOL)arg2;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)arg1;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)arg1;
- (BOOL)isSoftwareUpdateCheckingRunning;
- (unsigned char)_softwareUpdateCheckingState;
- (BOOL)_checkSoftwareUpdateCheckingState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

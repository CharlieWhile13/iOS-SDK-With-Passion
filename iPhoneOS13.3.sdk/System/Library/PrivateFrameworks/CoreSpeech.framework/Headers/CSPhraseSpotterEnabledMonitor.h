//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor
{
    int _notifyToken;
    BOOL _isPhraseSpotterEnabled;
}

+ (id)sharedInstance;
- (void)_phraseSpotterEnabledDidChange;
- (BOOL)_checkPhraseSpotterEnabled;
- (BOOL)isEnabled;
- (void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2;
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(BOOL)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

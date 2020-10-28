//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAlarmMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSmartSiriVolumeDelegate-Protocol.h>
#import <CoreSpeech/CSTimerMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVolumeMonitorDelegate-Protocol.h>

@class CSXPCClient;
@protocol CSSmartSiriVolumeControllerDelegate, OS_dispatch_queue;

@interface CSSmartSiriVolumeController : NSObject <CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate, CSSmartSiriVolumeDelegate>
{
    id <CSSmartSiriVolumeControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSXPCClient *_xpcClient;
}

@property(retain, nonatomic) CSXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSSmartSiriVolumeControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_createXPCClientConnectionIfNeeded;
- (void)CSSmartSiriVolumeDidReceiveTimerChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveAlarmChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1;
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (float)getEstimatedTTSVolume;
- (id)init;

@end

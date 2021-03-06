//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSVoiceTriggerAssetHandler.h>

#import <CoreSpeech/CSFirstUnlockMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerAssetDownloadMonitorDelegate-Protocol.h>

@class CSAsset;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    CSAsset *_cachedAsset;
}

@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
// - (void).cxx_destruct;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2;
- (void)_checkNewAssetAvailablity;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* CDUnknownBlockType */)arg1;
- (void)getVoiceTriggerAsset:(id /* CDUnknownBlockType */)arg1;
- (void)start;
- (id)init;

@end


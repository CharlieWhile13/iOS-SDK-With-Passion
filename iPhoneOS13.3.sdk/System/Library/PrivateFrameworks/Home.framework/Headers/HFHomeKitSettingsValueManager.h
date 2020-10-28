//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMHome, HMSettings, NSMutableDictionary, NSSet;

@interface HFHomeKitSettingsValueManager : NSObject
{
    HMHome *_home;
    HMSettings *_settings;
    NSMutableDictionary *_transactionStacks;
}

@property(retain, nonatomic) NSMutableDictionary *transactionStacks; // @synthesize transactionStacks=_transactionStacks;
@property(retain, nonatomic) HMSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)_clearTransaction:(id)arg1;
@property(readonly, nonatomic) NSSet *pendingWrites;
- (id)valueForSettingAtKeyPath:(id)arg1;
- (id)_valueForSetting:(id)arg1 logRead:(BOOL)arg2;
- (id)valueForSetting:(id)arg1;
- (void)_executeNextPendingWriteForSetting:(id)arg1;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2 changeType:(NSUInteger)arg3;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2;
- (id)initWithSettings:(id)arg1 home:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreTransactionOptions.h>

@class HMDBackingStore;

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions
{
    BOOL _local;
    BOOL _changed;
    BOOL _saveToAssistant;
    BOOL _saveToSharedUserAccount;
    HMDBackingStore *_backingStore;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) BOOL saveToSharedUserAccount; // @synthesize saveToSharedUserAccount=_saveToSharedUserAccount;
@property(readonly, nonatomic) BOOL saveToAssistant; // @synthesize saveToAssistant=_saveToAssistant;
@property(readonly, nonatomic) BOOL changed; // @synthesize changed=_changed;
@property(readonly, nonatomic) BOOL local; // @synthesize local=_local;
// - (void).cxx_destruct;
- (id)description;
- (id)logIdentifier;
- (void)markSaveToSharedUserAccount;
- (void)markSaveToAssistant;
- (void)markChanged;
- (void)markLocalChanged;
- (id)initWithBackingStore:(id)arg1 options:(id)arg2;

@end

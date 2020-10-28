//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMDAccessoryPairingEventRetryMap : NSObject
{
    NSMutableDictionary *_retryCountMap;
    HMFUnfairLock *_accessoryPairingRetryMapLock;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) HMFUnfairLock *accessoryPairingRetryMapLock; // @synthesize accessoryPairingRetryMapLock=_accessoryPairingRetryMapLock;
@property(readonly, nonatomic) NSMutableDictionary *retryCountMap; // @synthesize retryCountMap=_retryCountMap;
// - (void).cxx_destruct;
- (void)incrementRetryCount:(id)arg1;
- (void)clearRetryCountMap;
- (NSUInteger)retryCountForIdentifier:(id)arg1;
- (id)init;

@end


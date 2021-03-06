//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, _HMFNetManagerWoWAssertion;
@protocol OS_dispatch_queue;

@interface HMFNetManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HMFNetManagerWoWAssertion *_wowAssertion;
}

+ (id)sharedManager;
+ (void)initialize;
@property __weak _HMFNetManagerWoWAssertion *wowAssertion; // @synthesize wowAssertion=_wowAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
// - (void).cxx_destruct;
- (void)deregisterWoWAssertionForObject:(id)arg1;
- (void)registerWoWAssertionForObject:(id)arg1;
- (void)deregisterObject:(id)arg1;
- (id)init;

@end


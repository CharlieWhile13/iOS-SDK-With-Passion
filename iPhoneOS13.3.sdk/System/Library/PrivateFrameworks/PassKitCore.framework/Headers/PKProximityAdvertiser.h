//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKProximityAdvertiser : NSObject
{
    SFService *_nearbyInfoSharingService;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_advertiserQueue;
    BOOL _isAdvertising;
}

@property(readonly, nonatomic) BOOL isAdvertising; // @synthesize isAdvertising=_isAdvertising;
// - (void).cxx_destruct;
- (void)endAdvertising;
- (void)_queue_endAdvertising;
- (id /* CDUnknownBlockType */)_createAdvertisingActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)startAdvertisingForDuration:(double)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)init;

@end


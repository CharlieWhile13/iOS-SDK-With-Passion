//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MXMSampleFilter;
@protocol MXMProbeDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MXMProbe : NSObject
{
    id /* CDUnknownBlockType */ _updateHandler;
    id /* CDUnknownBlockType */ _stopHandler;
    NSObject<OS_dispatch_semaphore> *_stopWaiter;
    BOOL __updating;
    BOOL __shouldStop;
    MXMSampleFilter *_filter;
    NSObject<OS_dispatch_queue> *_updateQueue;
    id <MXMProbeDelegate> _delegate;
}

+ (id)probe;
@property BOOL _shouldStop; // @synthesize _shouldStop=__shouldStop;
@property BOOL _updating; // @synthesize _updating=__updating;
@property(nonatomic) __weak id <MXMProbeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(copy, nonatomic) MXMSampleFilter *filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
- (BOOL)performPreIterationActions;
- (id)sampleWithTimeout:(double)arg1 stopReason:(NSUInteger )arg2;
- (id)sampleWithTimeout:(double)arg1;
- (BOOL)waitUntilStoppedWithTimeout:(double)arg1;
- (void)waitForeverUntilStopped;
- (BOOL)_setupWaitSemaphore;
- (void)_stopUpdates;
- (void)_handleIncomingData:(id)arg1;
- (void)_beginUpdates;
- (void)stopUpdates;
- (void)updateNowUntilTimeout:(double)arg1 updateHandler:(id /* CDUnknownBlockType */)arg2 stopHandler:(id /* CDUnknownBlockType */)arg3;
- (void)updateNowUntilTimeout:(double)arg1 updateHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updateNowUntilTimeout:(double)arg1;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* CDUnknownBlockType */)arg1 stopHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* CDUnknownBlockType */)arg1;
- (void)updateNowUntilStopped;
- (id)init;
@property(readonly) BOOL updating;

@end


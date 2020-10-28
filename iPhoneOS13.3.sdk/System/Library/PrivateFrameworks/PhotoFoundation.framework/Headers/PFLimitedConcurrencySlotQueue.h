//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PFLimitedConcurrencyQueueClass;
@protocol OS_dispatch_queue;

@interface PFLimitedConcurrencySlotQueue : NSObject
{
    _Atomic NSUInteger _blockCount;
    NSObject<OS_dispatch_queue> *_slotQueue;
    PFLimitedConcurrencyQueueClass *_concurrentQueue;
    NSUInteger _slotIndex;
}

+ (id)currentSlotQueue;
@property(readonly) NSUInteger slotIndex; // @synthesize slotIndex=_slotIndex;
@property(readonly) __weak PFLimitedConcurrencyQueueClass *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
// - (void).cxx_destruct;
- (const char )label;
- (void)resume;
- (void)suspend;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)dispatchAsync:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)slotUseCount;
- (NSUInteger)decrementSlotUseCount;
- (NSUInteger)incrementSlotUseCount;
- (id)initWithConcurrentQueue:(id)arg1 targetQueue:(id)arg2 slotIndex:(NSUInteger)arg3;

@end

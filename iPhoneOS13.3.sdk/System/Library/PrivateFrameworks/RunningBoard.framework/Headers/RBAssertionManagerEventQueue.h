//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSString, RBEventQueue, RBProcessMap;
@protocol OS_dispatch_queue, RBAssertionManagerQueueDelegate;

@interface RBAssertionManagerEventQueue : NSObject <BSDescriptionProviding>
{
//     struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    RBEventQueue *_eventQueue;
    RBProcessMap *_expirationWarningEvents;
    id <RBAssertionManagerQueueDelegate> _delegate;
}

@property(nonatomic) __weak id <RBAssertionManagerQueueDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_queue_enqueueProcessExpirationEventsForProcesses:(id)arg1;
- (void)_queue_enqueueInvalidationEventForAssertion:(id)arg1 startTime:(double)arg2;
- (void)_queue_enqueueWarningEventForAssertion:(id)arg1 startTime:(double)arg2;
- (void)_queue_enqueueEventsForAssertion:(id)arg1;
- (void)_queue_removeEventsForContext:(id)arg1;
- (void)_queue_updateEventsForAssertion:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger count;
- (void)updateEventsForAssertions:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTTransitionScheduler-Protocol.h>

@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler>
{
    id /* CDUnknownBlockType */ _eventHandler;
    NSTimer *_transitionTimer;
    double _delay;
}

@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(retain, nonatomic) NSTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ eventHandler; // @synthesize eventHandler=_eventHandler;
// - (void).cxx_destruct;
- (void)scheduleTransitionTimer;
- (void)didCompleteEvent;
- (void)stop;
- (void)scheduleEvent;
- (id)initWithEventHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithEventHandler:(id /* CDUnknownBlockType */)arg1 delay:(double)arg2;

@end


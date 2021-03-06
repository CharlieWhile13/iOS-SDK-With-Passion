//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUProgressObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _handler;
    double _lastHandledValue;
    BOOL _lastHandledIndeterminate;
    double _valueInterval;
}

@property(readonly, nonatomic) double valueInterval; // @synthesize valueInterval=_valueInterval;
// - (void).cxx_destruct;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;

@end


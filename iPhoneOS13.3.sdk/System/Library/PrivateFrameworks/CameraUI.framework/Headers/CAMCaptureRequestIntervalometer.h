//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMCaptureRequest, CAMPreciseTimer;
@protocol CAMCaptureRequestIntervalometerDelegate;

@interface CAMCaptureRequestIntervalometer : NSObject
{
    CAMCaptureRequest *_prototypeRequest;
    id <CAMCaptureRequestIntervalometerDelegate> _delegate;
    double _interval;
    double _delay;
    long long _maximumCount;
    long long _remaining;
    CAMPreciseTimer *__timer;
}

@property(readonly, nonatomic) CAMPreciseTimer *_timer; // @synthesize _timer=__timer;
@property(nonatomic) long long remaining; // @synthesize remaining=_remaining;
@property(readonly, nonatomic) long long maximumCount; // @synthesize maximumCount=_maximumCount;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) __weak id <CAMCaptureRequestIntervalometerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CAMCaptureRequest *prototypeRequest; // @synthesize prototypeRequest=_prototypeRequest;
// - (void).cxx_destruct;
- (void)manuallyGenerateRequest;
- (void)stopGeneratingRequests;
- (void)startGeneratingRequests;
- (void)_generateRequestForDelegate;
- (id)initWithDelegate:(id)arg1 interval:(double)arg2 delay:(double)arg3 maximumCount:(long long)arg4;
- (id)init;

@end


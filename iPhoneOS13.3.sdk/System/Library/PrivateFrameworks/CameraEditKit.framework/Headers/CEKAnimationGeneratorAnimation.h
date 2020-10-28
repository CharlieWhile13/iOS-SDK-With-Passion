//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CEKAnimationGeneratorAnimation : NSObject
{
    double _startTime;
    double _duration;
    id /* CDUnknownBlockType */ _updateHandler;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
// - (void).cxx_destruct;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2 updateHandler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;

@end


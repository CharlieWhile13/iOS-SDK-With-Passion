//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _IMTimingInstance : NSObject
{
    double _startTiming;
    double _stopTiming;
    double _totalTime;
    BOOL _isRunning;
}

+ (id)createTimingInstanceWithStartTime:(float)arg1;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
- (id)description;
- (void)stopUsingTime:(double)arg1;
- (void)startUsingTime:(double)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUVelocitySample : NSObject
{
    double _startTime;
    double _endTime;
    CGPoint _start;
    CGPoint _end;
}

+ (id)sampleWithStart:(CGPoint)arg1 end:(CGPoint)arg2 startTime:(double)arg3 endTime:(double)arg4;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CGPoint end; // @synthesize end=_end;
@property(nonatomic) CGPoint start; // @synthesize start=_start;
- (BOOL)isSampleDistinctFromPoint:(CGPoint)arg1;
@property(readonly, nonatomic) CGVector velocity;
@property(readonly, nonatomic) double dt;
@property(readonly, nonatomic) CGVector translation;

@end


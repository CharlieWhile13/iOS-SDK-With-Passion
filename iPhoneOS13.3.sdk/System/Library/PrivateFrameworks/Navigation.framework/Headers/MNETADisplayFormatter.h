//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNWeakTimer, NSDate, NSTimeZone;
@protocol MNETADisplayFormatterDelegate;

@interface MNETADisplayFormatter : NSObject
{
    id <MNETADisplayFormatterDelegate> _delegate;
    double _remainingTime;
    NSTimeZone *_timeZone;
    MNWeakTimer *_updateTimer;
    double _displayRemainingTime;
    NSDate *_displayETA;
}

@property(readonly, nonatomic) NSDate *displayETA; // @synthesize displayETA=_displayETA;
@property(readonly, nonatomic) double displayRemainingTime; // @synthesize displayRemainingTime=_displayRemainingTime;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) __weak id <MNETADisplayFormatterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_displayDateWithRemainingTime:(double)arg1;
- (double)_displayTimeIntervalForTimeInterval:(double)arg1;
- (void)_updateTimerFired;
- (void)_scheduleUpdateTimer;
- (void)_updateDisplayETA;
- (void)dealloc;
- (id)initWithTimeZone:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIQuantityTimeSlice, HKQuantity, HKQuantityType, NSDate;

@interface FIIntervalQuantityTrigger : NSObject
{
    FIQuantityTimeSlice *_slice;
    HKQuantity *_threshold;
    BOOL _finalized;
    id /* CDUnknownBlockType */ _completion;
    NSDate *_triggeredDate;
}

@property(readonly, nonatomic) NSDate *triggeredDate; // @synthesize triggeredDate=_triggeredDate;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) HKQuantityType *quantityType; // @dynamic quantityType;
@property(readonly, nonatomic) BOOL triggered; // @dynamic triggered;
- (id)settingTimeSlice:(id)arg1;
- (id)_finalizedTriggerByAddingSample:(id)arg1 toSlice:(id)arg2 withPreviousTotal:(id)arg3 threshold:(id)arg4;
- (id)addingSample:(id)arg1 error:(id )arg2;
- (id)initWithQuantityTimeslice:(id)arg1 threshold:(id)arg2 triggeredDate:(id)arg3;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 threshold:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKNumberFormatter-Protocol.h>

@interface HKTimePeriodNumberFormatter : NSObject <HKNumberFormatter>
{
    BOOL _shouldRoundToHours;
}

@property(nonatomic) BOOL shouldRoundToHours; // @synthesize shouldRoundToHours=_shouldRoundToHours;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (BOOL)returnsUnitWithValueForDisplay;

@end


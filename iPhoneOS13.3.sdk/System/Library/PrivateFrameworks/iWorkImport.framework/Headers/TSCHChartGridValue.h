//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHChartGridValue : NSObject
{
}

+ (id)NSDateConvertedFromGridValue:(id)arg1;
+ (id)NSDateFromGridValue:(id)arg1;
+ (id)durationValueWithDouble:(double)arg1;
+ (id)dateValueWithNSDate:(id)arg1;
+ (id)dateValueWithDouble:(double)arg1;
+ (id)numberValueWithDouble:(double)arg1;
+ (void)saveGridValue:(id)arg1 toArchive:(struct GridValue )arg2;
+ (id)instanceWithArchive:(const struct GridValue )arg1;
- (id)initWithArchive:(const struct GridValue )arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate;

@interface FCDateRange : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)dateRangeWithEarlierDate:(id)arg1 laterDate:(id)arg2;
+ (id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)intersectionWithDateRange:(id)arg1;
- (long long)sliceIndexForDate:(id)arg1 withInterval:(double)arg2;
- (id)sliceForDate:(id)arg1 withInterval:(double)arg2;
- (id)slicesWithTimeInterval:(double)arg1;
- (BOOL)startsLaterThanDateRange:(id)arg1;
- (BOOL)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2;
- (long long)compare:(id)arg1;
- (BOOL)containsDate:(id)arg1;
@property(readonly, nonatomic) NSUInteger maxMillisecondsTimeIntervalSince1970;
@property(readonly, nonatomic) NSUInteger minMillisecondsTimeIntervalSince1970;
@property(readonly, nonatomic) double absoluteTimeInterval;
@property(readonly, nonatomic) double timeInterval;
@property(readonly, nonatomic) BOOL isToInfinity;
@property(readonly, nonatomic) BOOL isFromInfinity;
@property(readonly, nonatomic) BOOL isFinite;
@property(readonly, nonatomic) NSDate *laterDate;
@property(readonly, nonatomic) NSDate *earlierDate;
- (id)initWithStartDate:(id)arg1 timeInterval:(double)arg2;
- (id)initWithEarlierDate:(id)arg1 laterDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;

@end


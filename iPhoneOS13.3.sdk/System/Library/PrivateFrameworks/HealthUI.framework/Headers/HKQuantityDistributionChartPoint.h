//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKQuantityDistributionChartPoint : NSObject <HKChartPoint>
{
    double _minimumBucketValue;
    double _bucketIncrement;
    NSArray *_bucketCounts;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    NSDate *_bucketDate;
    NSNumber *_minimumY;
    NSNumber *_maximumY;
}

@property(readonly, nonatomic) NSNumber *maximumY; // @synthesize maximumY=_maximumY;
@property(readonly, nonatomic) NSNumber *minimumY; // @synthesize minimumY=_minimumY;
@property(readonly, nonatomic) NSDate *bucketDate; // @synthesize bucketDate=_bucketDate;
@property(retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSArray *bucketCounts; // @synthesize bucketCounts=_bucketCounts;
@property(readonly, nonatomic) double bucketIncrement; // @synthesize bucketIncrement=_bucketIncrement;
@property(readonly, nonatomic) double minimumBucketValue; // @synthesize minimumBucketValue=_minimumBucketValue;
// - (void).cxx_destruct;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)yValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
@property(readonly, copy) NSString *description;
- (id)_quickDate:(id)arg1;
- (id)initWithHistogramData:(id)arg1 unit:(id)arg2;
- (id)initWithHistogramData:(id)arg1 bucketIncrement:(double)arg2 unit:(id)arg3;

@end

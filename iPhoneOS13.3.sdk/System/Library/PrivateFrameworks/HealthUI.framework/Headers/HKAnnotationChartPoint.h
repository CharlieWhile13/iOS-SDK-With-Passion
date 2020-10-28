//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSDate, NSNumber;

@interface HKAnnotationChartPoint : NSObject <HKChartPoint>
{
    NSDate *_date;
    NSNumber *_value;
    long long _pointType;
}

@property(readonly, nonatomic) long long pointType; // @synthesize pointType=_pointType;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (id)userInfo;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)yValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (id)initWithPoint:(CGPoint)arg1 pointType:(long long)arg2;

@end


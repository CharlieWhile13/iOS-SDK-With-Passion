//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFNaming-Protocol.h>
#import <ActionKit/WFStatisticsSampleProvider-Protocol.h>

@class HKQuantitySample, HKUnit, NSArray, NSString;

@interface WFHKQuantitySampleContainer : NSObject <NSSecureCoding, WFNaming, WFStatisticsSampleProvider>
{
    BOOL _canProvideDataSamples;
    HKUnit *_unit;
    double _value;
    NSArray *_subsamples;
    HKQuantitySample *_quantitySample;
    NSArray *_subcontainers;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *subcontainers; // @synthesize subcontainers=_subcontainers;
@property(retain, nonatomic) HKQuantitySample *quantitySample; // @synthesize quantitySample=_quantitySample;
@property(retain, nonatomic) NSArray *subsamples; // @synthesize subsamples=_subsamples;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) BOOL canProvideDataSamples; // @synthesize canProvideDataSamples=_canProvideDataSamples;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
// - (void).cxx_destruct;
- (void)updateValue:(id)arg1 fromStatisticsOperation:(long long)arg2;
@property(readonly, nonatomic) NSArray *dataSamples;
@property(readonly, copy, nonatomic) NSString *wfName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasSubsamples;
- (double)normalizedValue;
@property(readonly, nonatomic) BOOL hasValue;
- (id)initWithSubsamples:(id)arg1 unit:(id)arg2;
- (id)initWithSample:(id)arg1 unit:(id)arg2;

@end


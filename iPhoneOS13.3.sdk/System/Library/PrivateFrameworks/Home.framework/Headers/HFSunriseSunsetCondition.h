//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTimeCondition.h>

#import <Home/HFPrimitiveTimeCondition-Protocol.h>

@class NSDateComponents, NSString;

@interface HFSunriseSunsetCondition : HFTimeCondition <HFPrimitiveTimeCondition>
{
    NSUInteger _comparisonType;
    NSString *_significantEvent;
    NSDateComponents *_offset;
}

@property(readonly, nonatomic) NSDateComponents *offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
@property(readonly, nonatomic) NSUInteger comparisonType; // @synthesize comparisonType=_comparisonType;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2 comparisonType:(NSUInteger)arg3;
- (id)initWithSignificantEvent:(id)arg1 comparisonType:(NSUInteger)arg2;
- (id)initWithPredicate:(id)arg1;

@end


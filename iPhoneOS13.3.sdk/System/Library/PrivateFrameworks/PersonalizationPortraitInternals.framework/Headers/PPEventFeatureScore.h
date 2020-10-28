//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface PPEventFeatureScore : NSObject <NSCopying>
{
    NSUInteger _ocnt_precomputedHash;
    NSArray *_featureValues;
    double _weightedScore;
    NSUInteger _prominentFeature;
}

+ (id)eventFeatureScoreWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(NSUInteger)arg3;
@property(readonly, nonatomic) NSUInteger prominentFeature; // @synthesize prominentFeature=_prominentFeature;
@property(readonly, nonatomic) double weightedScore; // @synthesize weightedScore=_weightedScore;
@property(readonly, nonatomic) NSArray *featureValues; // @synthesize featureValues=_featureValues;
// - (void).cxx_destruct;
- (id)init;
- (NSUInteger)hash;
- (NSUInteger)_hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEventFeatureScore:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(NSUInteger)arg3;

@end


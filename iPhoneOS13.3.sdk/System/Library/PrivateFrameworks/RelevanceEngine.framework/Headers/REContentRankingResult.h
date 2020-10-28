//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REContentRankingResult : NSObject
{
    BOOL _valid;
    int _unknownCount;
    double _positivePolarity;
    double _negativePolarity;
    double _unbiasedPositivePolarity;
    double _unbiasedNegativePolarity;
}

@property(nonatomic) double unbiasedNegativePolarity; // @synthesize unbiasedNegativePolarity=_unbiasedNegativePolarity;
@property(nonatomic) double unbiasedPositivePolarity; // @synthesize unbiasedPositivePolarity=_unbiasedPositivePolarity;
@property(nonatomic) int unknownCount; // @synthesize unknownCount=_unknownCount;
@property(nonatomic) double negativePolarity; // @synthesize negativePolarity=_negativePolarity;
@property(nonatomic) double positivePolarity; // @synthesize positivePolarity=_positivePolarity;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;

@end


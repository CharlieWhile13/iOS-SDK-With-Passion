//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDBucket : NSObject
{
    BOOL _hasInclusiveUpperBound;
    double _lowerInclusiveBound;
    double _upperBound;
    NSUInteger _count;
    NSString *_label;
}

@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) NSUInteger count; // @synthesize count=_count;
@property(nonatomic) BOOL hasInclusiveUpperBound; // @synthesize hasInclusiveUpperBound=_hasInclusiveUpperBound;
@property(nonatomic) double upperBound; // @synthesize upperBound=_upperBound;
@property(nonatomic) double lowerInclusiveBound; // @synthesize lowerInclusiveBound=_lowerInclusiveBound;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id )arg2;

@end


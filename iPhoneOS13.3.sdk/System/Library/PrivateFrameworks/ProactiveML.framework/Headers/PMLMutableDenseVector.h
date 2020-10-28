//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLDenseVector.h>


@class NSMutableData;

@interface PMLMutableDenseVector : PMLDenseVector <NSCopying, NSMutableCopying>
{
    NSMutableData *_mutableData;
}

@property(readonly, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
// - (void).cxx_destruct;
- (void)sumInPlaceWithVector:(id)arg1;
- (void)scaleInPlaceWithFactor:(float)arg1;
- (void)scaleInPlaceWithInversedFactor:(float)arg1;
- (void)processValuesInPlaceWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)append:(const float )arg1 count:(NSUInteger)arg2;
- (void)append:(float)arg1;
- (id)initWithMutableData:(id)arg1;
@property(readonly, nonatomic) float mutablePtr;

@end


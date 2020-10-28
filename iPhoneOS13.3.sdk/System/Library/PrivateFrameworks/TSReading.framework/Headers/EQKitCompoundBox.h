//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@class NSArray;

@interface EQKitCompoundBox : EQKitBox
{
    NSArray *mChildBoxes;
    double mHeight;
    double mDepth;
    double mWidth;
    BOOL mDimensionsValid;
    CGRect mErasableBounds;
    BOOL mErasableBoundsValid;
}

@property(readonly, nonatomic) NSArray *childBoxes; // @synthesize childBoxes=mChildBoxes;
- (CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensionsForHeight:(double )arg1 depth:(double )arg2 width:(double )arg3;
- (id)description;
- (CGRect)erasableBounds;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
@property(readonly, nonatomic) double height;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
- (id)initWithChildBoxes:(id)arg1;

@end


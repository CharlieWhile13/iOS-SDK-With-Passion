//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColorCurve.h>

@class MISSING_TYPE, NTKCubicSpline;

@interface NTKCubicColorCurve : NTKColorCurve
{
    NTKCubicSpline *_spline;
    MISSING_TYPE *_colors;
    float _fractions;
    NSUInteger _count;
}

// - (void).cxx_destruct;
- (id)colorForFraction:(float)arg1;
- (void)dealloc;
- (id)initWithColorCurveElements:(id)arg1;

@end


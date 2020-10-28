//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKAxisLabelStyle, HKStrokeStyle;

@interface HKQuantityDistributionSeries : HKGraphSeries
{
    BOOL _excludeDistribution;
    HKStrokeStyle *_inactiveStrokeStyle;
    HKStrokeStyle *_unselectedStrokeStyle;
    HKStrokeStyle *_selectedStrokeStyle;
    HKAxisLabelStyle *_minMaxLabelStyle;
    HKAxisLabelStyle *_minMaxValueStyle;
    HKStrokeStyle *_minMaxPointStyle;
}

@property(nonatomic) BOOL excludeDistribution; // @synthesize excludeDistribution=_excludeDistribution;
@property(copy, nonatomic) HKStrokeStyle *minMaxPointStyle; // @synthesize minMaxPointStyle=_minMaxPointStyle;
@property(copy, nonatomic) HKAxisLabelStyle *minMaxValueStyle; // @synthesize minMaxValueStyle=_minMaxValueStyle;
@property(copy, nonatomic) HKAxisLabelStyle *minMaxLabelStyle; // @synthesize minMaxLabelStyle=_minMaxLabelStyle;
@property(copy, nonatomic) HKStrokeStyle *selectedStrokeStyle; // @synthesize selectedStrokeStyle=_selectedStrokeStyle;
@property(copy, nonatomic) HKStrokeStyle *unselectedStrokeStyle; // @synthesize unselectedStrokeStyle=_unselectedStrokeStyle;
@property(copy, nonatomic) HKStrokeStyle *inactiveStrokeStyle; // @synthesize inactiveStrokeStyle=_inactiveStrokeStyle;
// - (void).cxx_destruct;
- (BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (CGRect)_textRectForSize:(CGSize)arg1 location:(CGPoint)arg2 screenRect:(CGRect)arg3 yOffset:(double)arg4;
- (void)_drawMinMaxLabelsForMin:(CGPoint)arg1 max:(CGPoint)arg2 pointTransform:(CGAffineTransform)arg3 axisRect:(CGRect)arg4 context:(CGContext )arg5;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContext )arg5 secondaryRenderContext:(id)arg6;
- (id)marginsForYAxis:(id)arg1 chartRect:(CGRect)arg2;
- (BOOL)supportsMultiTouchSelection;
- (id)_quickDate:(id)arg1;

@end


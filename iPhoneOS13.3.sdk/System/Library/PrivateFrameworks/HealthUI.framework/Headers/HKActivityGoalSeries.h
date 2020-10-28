//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKFillStyle, HKStrokeStyle;

@interface HKActivityGoalSeries : HKGraphSeries
{
    HKStrokeStyle *_strokeStyle;
    HKFillStyle *_fillStyle;
}

// - (void).cxx_destruct;
- (BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2;
- (double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (BOOL)supportsMultiTouchSelection;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(CGRect)arg4 block:(id /* CDUnknownBlockType */)arg5;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(CGRect)arg4 block:(id /* CDUnknownBlockType */)arg5;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContext )arg5 secondaryRenderContext:(id)arg6;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)initWithStrokeStyle:(id)arg1 fillStyle:(id)arg2;

@end

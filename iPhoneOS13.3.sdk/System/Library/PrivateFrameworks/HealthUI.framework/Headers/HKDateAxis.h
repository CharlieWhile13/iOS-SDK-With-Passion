//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAxis.h>

@class HKDateIntervalCache, NSArray;

@interface HKDateAxis : HKAxis
{
    HKDateIntervalCache *_intervalCache;
    NSArray *_cachedAxisLabels;
    long long _dayScopeType;
}

@property(nonatomic) long long dayScopeType; // @synthesize dayScopeType=_dayScopeType;
// - (void).cxx_destruct;
- (void)_clearCachedAxisLabels;
- (void)_updateIntervalCacheWithModelRange:(id)arg1 zoomScale:(double)arg2;
- (BOOL)_labelsOutsideStartDate:(id)arg1 endDate:(id)arg2;
- (void)_enumerateCachedCoordinatesInModelRange:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (id)extendedModelRangeWithRange:(id)arg1 timeScope:(long long)arg2;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)_dateRangeForChartRange:(struct HKRange)arg1 zoomScale:(double)arg2;
- (void)offsetForValueRange:(id)arg1 chartRect:(CGRect)arg2 zoomScaleOut:(double )arg3 contentOffsetOut:(CGPoint )arg4;
- (id)rangeForChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3;
- (id)_axisLabelsWithModelRange:(id)arg1 zoom:(long long)arg2;
- (long long)dateZoomForZoomScale:(double)arg1;
- (id)zoomScaleEngine;
- (NSUInteger)_anchorUnitForZoom:(long long)arg1;
- (void)_setRangeForDateRange:(id)arg1;
- (id)stringForDate:(id)arg1 zoom:(long long)arg2 labelType:(long long)arg3;
- (id)_formattedStringForDate:(id)arg1 zoom:(long long)arg2;
- (id)init;

@end


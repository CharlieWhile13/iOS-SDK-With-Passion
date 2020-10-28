//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FIUIChartDataSet, NSDate, NSNumber;
@protocol FIUIChartSeriesDataSource;

@interface FIUIChartSeries : UIView
{
    NSDate *_minXValue;
    NSDate *_maxXValue;
    BOOL _displayAboveAxisLabels;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    id <FIUIChartSeriesDataSource> _dataSource;
    FIUIChartDataSet *_dataSet;
    UIEdgeInsets _edgeInsets;
}

@property(nonatomic) BOOL displayAboveAxisLabels; // @synthesize displayAboveAxisLabels=_displayAboveAxisLabels;
@property(retain, nonatomic) FIUIChartDataSet *dataSet; // @synthesize dataSet=_dataSet;
@property(nonatomic) __weak id <FIUIChartSeriesDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) NSNumber *maxYValue; // @synthesize maxYValue=_maxYValue;
@property(retain, nonatomic) NSNumber *minYValue; // @synthesize minYValue=_minYValue;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGRect insetBounds;
- (double)yValueForPointFromChartPointValue:(id)arg1;
- (double)xValueForPointFromChartPoint:(id)arg1;
- (float)_relativePositionForYPlaneValue:(id)arg1;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (void)_reloadMinMaxValues;
- (id)labelsFromDataSet;
- (void)layoutSubviews;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKGraphViewDelegate-Protocol.h>
#import <HealthUI/HKHistogramChartDataSourceDataFetchObserver-Protocol.h>
#import <HealthUI/HKLollipopDelegate-Protocol.h>

@class HKDisplayType, HKHealthStore, HKHistogramAnnotationViewDataSource, HKHistogramBarSeries, HKHistogramChartDataFormatter, HKHistogramChartDataSource, HKLollipopController, HKScalarGraphViewController, UILabel;

@interface HKHistogramChartViewController : HKViewController <HKGraphViewDelegate, HKLollipopDelegate, HKHistogramChartDataSourceDataFetchObserver>
{
    HKHealthStore *_healthStore;
    double _minimumGraphViewHeight;
    UILabel *_headerLabel;
    HKScalarGraphViewController *_graphViewController;
    HKHistogramBarSeries *_histogramSeries;
    HKHistogramChartDataSource *_dataSource;
    HKHistogramChartDataFormatter *_dataFormatter;
    HKDisplayType *_displayType;
    HKHistogramAnnotationViewDataSource *_annotationViewDataSource;
    HKLollipopController *_lollipopController;
}

+ (id)defaultVerticalAxis;
@property(retain, nonatomic) HKLollipopController *lollipopController; // @synthesize lollipopController=_lollipopController;
@property(retain, nonatomic) HKHistogramAnnotationViewDataSource *annotationViewDataSource; // @synthesize annotationViewDataSource=_annotationViewDataSource;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) HKHistogramChartDataFormatter *dataFormatter; // @synthesize dataFormatter=_dataFormatter;
@property(retain, nonatomic) HKHistogramChartDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) HKHistogramBarSeries *histogramSeries; // @synthesize histogramSeries=_histogramSeries;
@property(retain, nonatomic) HKScalarGraphViewController *graphViewController; // @synthesize graphViewController=_graphViewController;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) double minimumGraphViewHeight; // @synthesize minimumGraphViewHeight=_minimumGraphViewHeight;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
// - (void).cxx_destruct;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(CGRect)arg2;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (void)graphViewSizeChanged:(id)arg1;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphViewDidBeginSelection:(id)arg1;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (long long)stackCountForGraphView:(id)arg1;
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;
- (void)didCompleteFetchForDataSource:(id)arg1;
- (id)_displayDescriptionForDataSource:(id)arg1;
- (id)_descriptionDateFormatter;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (void)viewDidLoad;
- (id)initWithHealthStore:(id)arg1 dataSource:(id)arg2 dataFormatter:(id)arg3 minimumGraphViewHeight:(double)arg4;

@end


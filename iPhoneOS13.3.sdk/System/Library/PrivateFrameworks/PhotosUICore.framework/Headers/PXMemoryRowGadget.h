//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXForYouMemoriesViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>

@class NSMutableDictionary, NSString, PXGadgetSpec, PXMemoriesFeedWidgetDataSourceManager;
@protocol PXGadgetDelegate, PXUIViewControllerZoomTransitionEndPoint;

@interface PXMemoryRowGadget : UIViewController <PXSectionedDataSourceManagerObserver, PXForYouMemoriesViewControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXGadget>
{
    CDStruct_d97c9657 _updateFlags;
    BOOL _hasAppeared;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXMemoriesFeedWidgetDataSourceManager *_dataSourceManager;
    NSMutableDictionary *_viewControllerEntries;
    long long _currentVisibility;
    id <PXUIViewControllerZoomTransitionEndPoint> _currentTransitionEndPoint;
    NSUInteger _currentNumberOfColumns;
}

+ (NSUInteger)numberOfColumnsForCurrentVisibility:(long long)arg1 rowType:(NSUInteger)arg2 numberOfMemories:(NSUInteger)arg3;
+ (long long)visibilityForGadgetSpec:(id)arg1 numberOfMemories:(NSUInteger)arg2;
+ (NSRange)dataSourceRangeForRowType:(NSUInteger)arg1 currentVisibility:(long long)arg2;
@property(nonatomic) BOOL hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) NSUInteger currentNumberOfColumns; // @synthesize currentNumberOfColumns=_currentNumberOfColumns;
@property(retain, nonatomic) id <PXUIViewControllerZoomTransitionEndPoint> currentTransitionEndPoint; // @synthesize currentTransitionEndPoint=_currentTransitionEndPoint;
@property(nonatomic) long long currentVisibility; // @synthesize currentVisibility=_currentVisibility;
@property(retain, nonatomic) NSMutableDictionary *viewControllerEntries; // @synthesize viewControllerEntries=_viewControllerEntries;
@property(readonly, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
// - (void).cxx_destruct;
- (id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (long long)_columnSpanForRowType:(NSUInteger)arg1;
- (CGRect)_frameForRowType:(NSUInteger)arg1 inRect:(CGRect)arg2;
- (BOOL)_shouldPageForRowType:(NSUInteger)arg1;
- (void)_updateScrollingBehaviorForRowType:(NSUInteger)arg1;
- (void)_removeViewControllerEntryForRowType:(NSUInteger)arg1;
- (void)_refreshViewControllerForRowType:(NSUInteger)arg1 visibility:(long long)arg2;
- (void)_fillViewControllerEntryForRowType:(NSUInteger)arg1;
- (void)_transitionFromCurrentVisibility:(long long)arg1 toNewVisibility:(long long)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_configureMetricsForMultiRow:(id)arg1 dataSourceRange:(NSRange)arg2;
- (void)_configureMetricsForSingleRow:(id)arg1 dataSourceRange:(NSRange)arg2;
- (void)forYouMemoriesViewController:(id)arg1 configureMetrics:(id)arg2;
- (void)forYouMemoriesViewController:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3;
- (id)showAllMemoriesFeedAnimated:(BOOL)arg1;
- (void)userDidSelectAccessoryButton:(NSObject )arg1;
- (void)gadgetControllerHasDisappeared;
- (void)gadgetControllerHasAppeared;
- (NSObject )contentViewController;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSUInteger gadgetType;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) NSUInteger accessoryButtonType;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) BOOL hasContentToDisplay;
- (void)_updateScrollingBehaviorIfNeeded;
- (void)_updateNumberOfColumnsIfNeeded;
- (void)_updateVisibilityIfNeeded;
- (void)_dismissIfNeeded;
- (void)_updateIfNeeded;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)arg1;

@end


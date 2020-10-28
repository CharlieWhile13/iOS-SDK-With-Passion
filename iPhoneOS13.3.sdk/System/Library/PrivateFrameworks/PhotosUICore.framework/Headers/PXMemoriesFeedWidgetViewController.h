//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMemoriesFeedViewControllerHelperDelegate-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>

@class NSMutableSet, PHCachingImageManager, PHImageRequestOptions, PXBasicUIViewTileAnimator, PXMemoriesFeedViewControllerHelper, PXMemoriesFeedWidgetLayoutMetrics, PXMemoriesUITileSource, PXUIScrollViewController, PXUITapGestureRecognizer;
@protocol PXMemoriesFeedWidgetViewControllerDelegate;

@interface PXMemoriesFeedWidgetViewController : UIViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXUserInterfaceFeatureViewController, PXMemoriesFeedViewControllerHelperDelegate>
{
    NSMutableSet *_checkedOutTiles;
    id /* CDUnknownBlockType */ _refreshMemoriesCompletionHandler;
    long long _waitForDataSourceChangeRequestDismissalID;
    BOOL _hasAppeared;
    BOOL _hasAnyMemories;
    id <PXMemoriesFeedWidgetViewControllerDelegate> _delegate;
    NSUInteger _availableNumberOfRows;
    PXMemoriesFeedViewControllerHelper *__helper;
    PXMemoriesUITileSource *__tileSource;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXUIScrollViewController *__scrollViewController;
    PHCachingImageManager *__imageManager;
    PXUITapGestureRecognizer *__tapRecognizer;
    PHImageRequestOptions *__assetImageRequestOptions;
    long long __requestDismissalID;
    PXMemoriesFeedWidgetLayoutMetrics *__metrics;
}

@property(copy, nonatomic, setter=_setMetrics:) PXMemoriesFeedWidgetLayoutMetrics *_metrics; // @synthesize _metrics=__metrics;
@property(nonatomic) BOOL hasAnyMemories; // @synthesize hasAnyMemories=_hasAnyMemories;
@property(nonatomic, setter=_setRequestDismissalID:) long long _requestDismissalID; // @synthesize _requestDismissalID=__requestDismissalID;
@property(readonly, nonatomic) PHImageRequestOptions *_assetImageRequestOptions; // @synthesize _assetImageRequestOptions=__assetImageRequestOptions;
@property(readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // @synthesize _tapRecognizer=__tapRecognizer;
@property(readonly, nonatomic) PHCachingImageManager *_imageManager; // @synthesize _imageManager=__imageManager;
@property(readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property(readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXMemoriesUITileSource *_tileSource; // @synthesize _tileSource=__tileSource;
@property(readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper; // @synthesize _helper=__helper;
@property(nonatomic, setter=_setAvailableNumberOfRows:) NSUInteger availableNumberOfRows; // @synthesize availableNumberOfRows=_availableNumberOfRows;
@property(nonatomic) __weak id <PXMemoriesFeedWidgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handleSpecChange;
- (void)_handleDataSourceChange;
- (void)_updateAvailableNumberOfRows;
- (void)_handleNewMemoriesRequestFinishedWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_handleNewMemoriesRequestTimeoutWithRequestDismissalID:(long long)arg1;
- (void)_callRefreshMemoriesCompletionHandlerWithResult:(NSUInteger)arg1;
- (long long)_incrementRequestDismissalID;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (id)_dataSourceManager;
- (void)refreshMemoriesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)invalidateNumberOfRowsVisible;
- (void)invalidateReferenceSize;
- (void)_updatePreferredContentSize;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)memoriesFeedViewControllerHelper:(id)arg1 configureMetrics:(id)arg2;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
- (BOOL)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1;
@property(readonly, nonatomic) long long userInterfaceFeature;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


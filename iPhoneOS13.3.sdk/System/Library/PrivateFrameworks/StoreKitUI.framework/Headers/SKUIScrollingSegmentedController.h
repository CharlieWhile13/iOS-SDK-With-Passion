//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIProxyScrollViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingSegmentedControllerCollectionViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingSegmentedControllerItemContextDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabAppearanceStatusObserver-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabNestedPagedScrolling-Protocol.h>
#import <StoreKitUI/SKUIViewControllerWithFocusedViewController-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, SKUIInteractiveSegmentedControl, SKUIProxyScrollView, SKUIScrollingSegmentedControllerCollectionView, SKUIScrollingSegmentedControllerNavigationBarTitleView, UIScrollView, UIViewController;
@protocol SKUIScrollingSegmentedControllerDelegate;

@interface SKUIScrollingSegmentedController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollingSegmentedControllerCollectionViewDelegate, SKUIScrollingSegmentedControllerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIViewControllerWithFocusedViewController>
{
    CGSize _contentCollectionViewItemSize;
    SKUIScrollingSegmentedControllerCollectionView *_contentCollectionView;
    SKUIScrollingSegmentedControllerNavigationBarTitleView *_navigationBarTitleView;
    SKUIProxyScrollView *_proxyScrollView;
    UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    CDStruct_19149c72 _scrollingTabAppearanceStatus;
    NSMutableArray *_titleObservingViewControllers;
    SKUIInteractiveSegmentedControl *_titlesSegmentedControl;
    BOOL _viewBackgroundIsWhite;
    NSMapTable *_viewControllerToItemContext;
    BOOL _scrollEnabled;
    BOOL _wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
    BOOL _wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
    id <SKUIScrollingSegmentedControllerDelegate> _delegate;
    double _maximumContentWidth;
    NSArray *_viewControllers;
    NSUInteger _focusedViewControllerIndex;
}

@property(readonly, nonatomic, getter=_titlesSegmentedControl) SKUIInteractiveSegmentedControl *titlesSegmentedControl; // @synthesize titlesSegmentedControl=_titlesSegmentedControl;
@property(nonatomic) BOOL wantsWhiteBackgroundBeyondRightEdgeWhenBouncing; // @synthesize wantsWhiteBackgroundBeyondRightEdgeWhenBouncing=_wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
@property(nonatomic) BOOL wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing; // @synthesize wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing=_wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
@property(readonly, nonatomic) SKUIScrollingSegmentedControllerNavigationBarTitleView *navigationBarTitleView; // @synthesize navigationBarTitleView=_navigationBarTitleView;
@property(readonly, nonatomic) NSUInteger focusedViewControllerIndex; // @synthesize focusedViewControllerIndex=_focusedViewControllerIndex;
@property(nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) __weak id <SKUIScrollingSegmentedControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_viewControllerNeedsContentScrollViewUpdates:(id)arg1;
- (UIEdgeInsets)_viewControllerContentScrollViewContentInset;
- (void)_updateViewBackgroundColor;
- (void)_updateTitleValueObservation;
- (void)_updateTitlesSelectionProgress;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)_setViewControllers:(id)arg1 viewUpdatesHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_scrollToTitlesSelectionProgress:(double)arg1 animated:(BOOL)arg2;
- (void)_reloadTitleSegments;
- (id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(BOOL)arg1;
- (BOOL)_configureSegment:(id)arg1 forViewController:(id)arg2;
- (void)_titlesSegmentedControlValueChangeAction:(id)arg1;
- (void)selectViewControllerAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)replaceViewControllerAtIndex:(NSUInteger)arg1 withViewController:(id)arg2;
@property(nonatomic) long long segmentedControlLayoutStyle;
@property(nonatomic) double segmentedControlHeight;
@property(nonatomic) UIEdgeInsets segmentedControlContentEdgeInsets;
@property(readonly, nonatomic) UIViewController *focusedViewController;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;
- (void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)arg1;
- (void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)arg1;
- (void)scrollViewDidMoveToWindow:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setClientContext:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)contentScrollView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


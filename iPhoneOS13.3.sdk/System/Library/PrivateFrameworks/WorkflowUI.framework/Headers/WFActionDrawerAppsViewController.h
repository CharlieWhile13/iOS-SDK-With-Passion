//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>

@class NSArray, UICollectionView, WFActionDrawerResultsController;
@protocol WFActionDrawerAppsViewControllerDelegate;

@interface WFActionDrawerAppsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WFActionDrawerStateConfigurable>
{
    id <WFActionDrawerAppsViewControllerDelegate> _delegate;
    WFActionDrawerResultsController *_resultsController;
    NSArray *_appItems;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *appItems; // @synthesize appItems=_appItems;
@property(retain, nonatomic) WFActionDrawerResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) __weak id <WFActionDrawerAppsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)moveToState:(id)arg1 animated:(BOOL)arg2;
- (id)state;
- (double)expectedCollectionViewWidth;
- (void)fetchBundleIdentifiersFromRecentDonationsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)fetchBundleIdentifiersFromActionRegistryWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)updateAppItems;
- (double)insetForCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3 spacing:(double)arg4;
- (double)insetForEqualSpacingWithCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3;
- (long long)numberOfItemsWithWidth:(double)arg1 totalWidth:(double)arg2 minimumSpacing:(double)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithActionDrawerResultsController:(id)arg1;

@end


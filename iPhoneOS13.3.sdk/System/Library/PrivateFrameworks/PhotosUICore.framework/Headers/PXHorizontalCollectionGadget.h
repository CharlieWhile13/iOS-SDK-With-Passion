//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetUIViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXMutableHorizontalCollectionGadget-Protocol.h>

@class NSDictionary, NSString, PXGadgetOrbContext, PXGadgetSpec;
@protocol PXGadgetDelegate, PXHorizontalCollectionGadgetDelegate;

@interface PXHorizontalCollectionGadget : PXGadgetUIViewController <PXMutableHorizontalCollectionGadget, PXGadget>
{
    BOOL _isFixedHeight;
    BOOL _visibleGadgetsLoaded;
    BOOL _isPerformingChanges;
    BOOL _isResourceLoaded;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    id <PXHorizontalCollectionGadgetDelegate> _horizontalGadgetDelegate;
    NSString *_collectionTitle;
    NSUInteger _collectionAccessoryButtonType;
    NSString *_collectionAccessoryButtonTitle;
    double _collectionHeight;
    long long _defaultColumnSpan;
    NSDictionary *_columnSpans;
    NSUInteger _gadgetType;
    NSUInteger _headerStyle;
    id /* CDUnknownBlockType */ _accessoryButtonAction;
    PXGadgetOrbContext *_previewOrbContext;
    long long _currentColumnSpan;
    CGSize _cachedMaxHeightForColumnWidth;
    CGRect _visibleContentRect;
}

@property(nonatomic) CGSize cachedMaxHeightForColumnWidth; // @synthesize cachedMaxHeightForColumnWidth=_cachedMaxHeightForColumnWidth;
@property(nonatomic) long long currentColumnSpan; // @synthesize currentColumnSpan=_currentColumnSpan;
@property(retain, nonatomic) PXGadgetOrbContext *previewOrbContext; // @synthesize previewOrbContext=_previewOrbContext;
@property(nonatomic) BOOL isResourceLoaded; // @synthesize isResourceLoaded=_isResourceLoaded;
@property(nonatomic) BOOL isPerformingChanges; // @synthesize isPerformingChanges=_isPerformingChanges;
@property(nonatomic) BOOL visibleGadgetsLoaded; // @synthesize visibleGadgetsLoaded=_visibleGadgetsLoaded;
@property(copy, nonatomic) id /* CDUnknownBlockType */ accessoryButtonAction; // @synthesize accessoryButtonAction=_accessoryButtonAction;
@property(nonatomic) NSUInteger headerStyle; // @synthesize headerStyle=_headerStyle;
@property(nonatomic) NSUInteger gadgetType; // @synthesize gadgetType=_gadgetType;
@property(copy, nonatomic) NSDictionary *columnSpans; // @synthesize columnSpans=_columnSpans;
@property(nonatomic) long long defaultColumnSpan; // @synthesize defaultColumnSpan=_defaultColumnSpan;
@property(nonatomic) BOOL isFixedHeight; // @synthesize isFixedHeight=_isFixedHeight;
@property(readonly, nonatomic) double collectionHeight; // @synthesize collectionHeight=_collectionHeight;
@property(readonly, copy, nonatomic) NSString *collectionAccessoryButtonTitle; // @synthesize collectionAccessoryButtonTitle=_collectionAccessoryButtonTitle;
@property(readonly, nonatomic) NSUInteger collectionAccessoryButtonType; // @synthesize collectionAccessoryButtonType=_collectionAccessoryButtonType;
@property(readonly, copy, nonatomic) NSString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property(nonatomic) __weak id <PXHorizontalCollectionGadgetDelegate> horizontalGadgetDelegate; // @synthesize horizontalGadgetDelegate=_horizontalGadgetDelegate;
@property(nonatomic) CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
// - (void).cxx_destruct;
- (void)updateIfNeeded;
- (void)_updateColumnSettings;
- (long long)_columnSpanForTraitCollection:(id)arg1;
- (CGSize)_ensureCachedHeightForColumnWidth:(double)arg1;
- (void)_extendedTraitCollectionDidChange:(NSUInteger)arg1;
- (CGRect)visibleBounds;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (BOOL)gadget:(id)arg1 transitionToViewController:(NSObject )arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)gadget:(id)arg1 didChange:(NSUInteger)arg2;
- (BOOL)navigateToGadget:(id)arg1 animated:(BOOL)arg2;
- (void)prefetchDuringScrollingForWidth:(double)arg1;
- (NSObject )targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (NSObject )previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(NSObject )arg2;
- (void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg1;
- (void)gadgetControllerHasDisappeared;
- (void)gadgetControllerHasAppeared;
- (id)rootNavigationHelper;
- (id)gadgetTransition;
- (void)_updateCollectionViewPaging;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (NSObject )contentViewController;
@property(readonly, nonatomic) BOOL hasContentToDisplay;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)userDidSelectAccessoryButton:(NSObject )arg1;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) NSUInteger accessoryButtonType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (void)setLayout:(id)arg1;
- (BOOL)isRootGadgetViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithProviders:(id)arg1;

@end


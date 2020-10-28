//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AssetExplorer/AEMessagesShelfLayoutDelegate-Protocol.h>
#import <AssetExplorer/AEPluginEntryViewController-Protocol.h>
#import <AssetExplorer/CKPluginEntryViewController-Protocol.h>
#import <AssetExplorer/PUAssetExplorerReviewScreenViewControllerDelegate-Protocol.h>
#import <AssetExplorer/PXAssetsSceneDelegate-Protocol.h>
#import <AssetExplorer/PXChangeObserver-Protocol.h>
#import <AssetExplorer/PXReusableObjectPoolDelegate-Protocol.h>
#import <AssetExplorer/PXTileSource-Protocol.h>
#import <AssetExplorer/PXTilingControllerScrollDelegate-Protocol.h>
#import <AssetExplorer/PXTilingControllerTransitionDelegate-Protocol.h>

@class AEPackageTransport, AEWrappedDataSourceManager, NSMutableSet, PUAssetExplorerReviewScreenViewController, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, PUReviewDataSource, PXAssetsScene, PXBasicUIViewTileAnimator, PXScrollViewController, PXTilingController, UIColor;
@protocol CKPluginEntryViewControllerDelegate;

@interface AEMessagesShelfViewController : UIViewController <AEPluginEntryViewController, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTileSource, PXChangeObserver, PUAssetExplorerReviewScreenViewControllerDelegate, UIGestureRecognizerDelegate, CKPluginEntryViewController, AEMessagesShelfLayoutDelegate>
{
    id <CKPluginEntryViewControllerDelegate> _entryViewDelegate;
    PXTilingController *__tilingController;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXAssetsScene *__sceneController;
    PXScrollViewController *__scrollViewController;
    PUReviewDataSource *__dataSource;
    PUReviewAssetsDataSourceManager *__internalReviewDataSourceManager;
    PUReviewAssetsMediaProvider *__internalReviewMediaProvider;
    AEWrappedDataSourceManager *__wrappedDataSourceManager;
    AEPackageTransport *__packageTransport;
    NSMutableSet *__tilesInUse;
    long long __indexToScrollTo;
    UIColor *__roundedCornerOverlayFillColor;
    PUAssetExplorerReviewScreenViewController *_presentedReviewController;
}

@property(retain, nonatomic) PUAssetExplorerReviewScreenViewController *presentedReviewController; // @synthesize presentedReviewController=_presentedReviewController;
@property(retain, nonatomic) UIColor *_roundedCornerOverlayFillColor; // @synthesize _roundedCornerOverlayFillColor=__roundedCornerOverlayFillColor;
@property(nonatomic, setter=_setIndexToScrollTo:) long long _indexToScrollTo; // @synthesize _indexToScrollTo=__indexToScrollTo;
@property(readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property(readonly, nonatomic) AEPackageTransport *_packageTransport; // @synthesize _packageTransport=__packageTransport;
@property(readonly, nonatomic) AEWrappedDataSourceManager *_wrappedDataSourceManager; // @synthesize _wrappedDataSourceManager=__wrappedDataSourceManager;
@property(readonly, nonatomic) PUReviewAssetsMediaProvider *_internalReviewMediaProvider; // @synthesize _internalReviewMediaProvider=__internalReviewMediaProvider;
@property(readonly, nonatomic) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager; // @synthesize _internalReviewDataSourceManager=__internalReviewDataSourceManager;
@property(readonly, nonatomic) PUReviewDataSource *_dataSource; // @synthesize _dataSource=__dataSource;
@property(readonly, nonatomic) PXScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property(readonly, nonatomic) PXAssetsScene *_sceneController; // @synthesize _sceneController=__sceneController;
@property(readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(nonatomic) __weak id <CKPluginEntryViewControllerDelegate> entryViewDelegate;
// - (void).cxx_destruct;
- (id)_currentAssetsDataSource;
- (void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg1 suppressLivePhoto:(BOOL)arg2 mediaOrigin:(long long)arg3;
- (id)_traverseHierarchyForFillColorStartingWithView:(id)arg1;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(NSUInteger)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(NSUInteger)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (id)contentAssetReferenceAtPoint:(CGPoint)arg1;
- (void)_presentReviewForAssetReference:(id)arg1;
- (void)handleTap:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)checkInTile:(void )arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void )checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)_toggleIris:(id)arg1;
- (void)_removeFromShelf:(id)arg1;
- (id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (id)framesOfVisibleContentViewInCoordinateSpace:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly) BOOL wantsEdgeToEdgeLayout;
- (BOOL)layoutShouldShowVideoDuration:(id)arg1;
- (double)layout:(id)arg1 itemAtIndexPathDuration:(struct PXSimpleIndexPath)arg2;
- (BOOL)layout:(id)arg1 itemAtIndexPathIsAnimatedImage:(struct PXSimpleIndexPath)arg2;
- (BOOL)layout:(id)arg1 itemAtIndexPathIsLoop:(struct PXSimpleIndexPath)arg2;
- (BOOL)layout:(id)arg1 itemAtIndexPathIsVideo:(struct PXSimpleIndexPath)arg2;
- (long long)layout:(id)arg1 irisToggleStateForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_transportStagingStateDidChange;
- (void)viewDidLoad;
- (void)loadView;
- (void)_dismissPresentedReviewController:(id)arg1 animated:(BOOL)arg2;
- (void)_presentReviewViewController:(id)arg1;
- (void)dealloc;
- (id)initWithPackageTransport:(id)arg1;

@end


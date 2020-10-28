//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>

@class NSString, PXFetchResultBasedMemoriesDataSourceManager, PXMemoriesFeedUIViewController, PXMemoriesUIViewController, UIBarButtonItem;

@interface PXTogglingMemoriesViewController : UIViewController <PXSectionedDataSourceManagerObserver, PXUIViewControllerZoomTransitionEndPoint>
{
    BOOL _onlyShowFavorites;
    BOOL _hasAnyMemories;
    PXFetchResultBasedMemoriesDataSourceManager *_favoriteMemoriesDataSourceManager;
    PXMemoriesUIViewController *_favoriteMemoriesViewController;
    UIBarButtonItem *_toggleButton;
    PXMemoriesFeedUIViewController *_memoriesViewController;
}

@property(readonly, nonatomic) PXMemoriesFeedUIViewController *memoriesViewController; // @synthesize memoriesViewController=_memoriesViewController;
@property(nonatomic) BOOL hasAnyMemories; // @synthesize hasAnyMemories=_hasAnyMemories;
@property(readonly, nonatomic) UIBarButtonItem *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(nonatomic, setter=setShouldOnlyShowFavorites:) BOOL onlyShowFavorites; // @synthesize onlyShowFavorites=_onlyShowFavorites;
@property(retain, nonatomic) PXMemoriesUIViewController *favoriteMemoriesViewController; // @synthesize favoriteMemoriesViewController=_favoriteMemoriesViewController;
@property(retain, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager; // @synthesize favoriteMemoriesDataSourceManager=_favoriteMemoriesDataSourceManager;
// - (void).cxx_destruct;
- (void)_reloadCurrentViewController;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (void)prepareForInteractiveTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_configureTitleInset;
- (void)_configureTitle;
- (void)_configureBarButton;
- (void)_configureMemoryViewControllers;
@property(readonly, nonatomic) NSString *currentBarButtonTitle;
@property(readonly, nonatomic) PXMemoriesFeedUIViewController *currentViewController;
- (void)toggle;
- (void)viewDidLoad;
- (id)init;

@end


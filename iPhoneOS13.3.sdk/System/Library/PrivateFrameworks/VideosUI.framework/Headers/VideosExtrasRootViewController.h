//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/IKAppContextDelegate-Protocol.h>
#import <VideosUI/IKAppDeviceConfig-Protocol.h>
#import <VideosUI/IKApplication-Protocol.h>
#import <VideosUI/MPVideoOverlayDelegate-Protocol.h>

@class IKAppContext, NSArray, NSLayoutConstraint, NSObject, UIButton, UINavigationController, UIStackView, UIView, VideosExtrasArtworkDataSource, VideosExtrasContext, VideosExtrasFeatureContainerViewController, VideosExtrasMainTemplateViewController, VideosExtrasNavigationController;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring, OS_dispatch_queue, VideosExtrasRootViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasRootViewController : UIViewController <IKApplication, IKAppContextDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, IKAppDeviceConfig, MPVideoOverlayDelegate>
{
    NSLayoutConstraint *_bottomConstraint;
    VideosExtrasNavigationController *_navigationController;
    NSObject<OS_dispatch_queue> *_imageRequestQueue;
    BOOL _didAttemptRestartAfterAppContextFailure;
    BOOL _showsMenuBar;
    BOOL _showsBuiltInNavigationControls;
    VideosExtrasMainTemplateViewController *_mainTemplateViewController;
    UIView *_extrasMenuBarView;
    VideosExtrasContext *_context;
    id <VideosExtrasRootViewControllerDelegate> _delegate;
    VideosExtrasFeatureContainerViewController *_featureContainer;
    IKAppContext *_applicationContext;
    NSArray *_lastSelectedSnapshotViewControllers;
    UIStackView *_extrasMenuButtonsStackView;
    UIButton *_backButton;
    NSLayoutConstraint *_extrasScrollViewLeadingConstraint;
    id <IKAppDataStoring> _localStorage;
    id <IKAppDataStoring> _vendorStorage;
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;
    VideosExtrasArtworkDataSource *_artworkDataSource;
    CGSize _initialPresentationSize;
}

+ (id)currentController;
@property(retain, nonatomic) VideosExtrasArtworkDataSource *artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(retain, nonatomic) id <IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
@property(retain, nonatomic) id <IKAppDataStoring> vendorStorage; // @synthesize vendorStorage=_vendorStorage;
@property(retain, nonatomic) id <IKAppDataStoring> localStorage; // @synthesize localStorage=_localStorage;
@property(retain, nonatomic) NSLayoutConstraint *extrasScrollViewLeadingConstraint; // @synthesize extrasScrollViewLeadingConstraint=_extrasScrollViewLeadingConstraint;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIStackView *extrasMenuButtonsStackView; // @synthesize extrasMenuButtonsStackView=_extrasMenuButtonsStackView;
@property(retain, nonatomic) NSArray *lastSelectedSnapshotViewControllers; // @synthesize lastSelectedSnapshotViewControllers=_lastSelectedSnapshotViewControllers;
@property(retain, nonatomic) IKAppContext *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(retain, nonatomic) VideosExtrasFeatureContainerViewController *featureContainer; // @synthesize featureContainer=_featureContainer;
@property(nonatomic) BOOL showsBuiltInNavigationControls; // @synthesize showsBuiltInNavigationControls=_showsBuiltInNavigationControls;
@property(nonatomic) BOOL showsMenuBar; // @synthesize showsMenuBar=_showsMenuBar;
@property(nonatomic) __weak id <VideosExtrasRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CGSize initialPresentationSize; // @synthesize initialPresentationSize=_initialPresentationSize;
@property(readonly, nonatomic) __weak VideosExtrasContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIView *extrasMenuBarView; // @synthesize extrasMenuBarView=_extrasMenuBarView;
@property(retain, nonatomic) VideosExtrasMainTemplateViewController *mainTemplateViewController; // @synthesize mainTemplateViewController=_mainTemplateViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
// - (void).cxx_destruct;
- (void)_showExtrasBar:(BOOL)arg1;
- (BOOL)shouldExtrasBeVisibleForViewSize:(CGSize)arg1;
- (void)_playbackWillEndNotification:(id)arg1;
- (BOOL)_areExtrasVisible;
- (void)_adjustExtrasVisibilityForViewSize:(CGSize)arg1;
- (void)overlayTappedBackButton:(id)arg1;
@property(readonly, nonatomic) UIView *mainMenuBar;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)detectMainDocument:(id)arg1;
- (BOOL)_setMainDocumentWithViewController:(id)arg1;
- (void)_extrasMenuItemSelected:(id)arg1;
- (void)_backButtonPressed:(id)arg1;
- (id)_extrasMenuBarViewForElements:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (BOOL)shouldAutorotate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (id)timeZone;
- (BOOL)isTimeZoneSet;
- (CGSize)screenSize;
- (NSUInteger)preferredVideoPreviewFormat;
- (NSUInteger)preferredVideoFormat;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)_attemptRestart;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)navigationControllerForContext:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)viewElementRegistry;
- (BOOL)appUsesDefaultStyleSheets;
- (id)appLaunchParams;
- (id)vendorIdentifier;
- (id)appIdentifier;
- (BOOL)shouldIgnoreJSValidation;
- (id)appJSURL;
- (BOOL)appIsTrusted;
- (void)showExtrasMenuBarInFrame:(CGRect)arg1;
- (void)updateMenuButtonForSelectionAtIndex:(NSUInteger)arg1 deselectedIndex:(NSUInteger)arg2;
- (void)setClearsStackOnNextPush;
@property(readonly, nonatomic) NSArray *mainMenuItemElements;
- (void)popToFeatureOrMain;
- (void)start;
- (void)_stopOldContextIfNeeded;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)_setUpForApplication;

@end


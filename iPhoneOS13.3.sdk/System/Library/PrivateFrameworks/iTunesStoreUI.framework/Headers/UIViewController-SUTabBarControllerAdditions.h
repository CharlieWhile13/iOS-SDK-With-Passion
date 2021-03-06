//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SUStorePageProtocol, SUViewControllerFactory;

@interface UIViewController (SUTabBarControllerAdditions)
+ (id)transitionSafetyDelegate;
+ (id)transitionSafePerformer:(id)arg1;
+ (void)endTransitionSafety;
+ (void)beginTransitionSafety;
+ (void)_iTunesStoreUI_timeoutTransitionSafety;
+ (void)_iTunesStoreUI_enqueueTransitionSafeInvocation:(id)arg1;
+ (void)_iTunesStoreUI_dequeueTransitionSafeInvocations;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
@property(readonly, nonatomic) long long ITunesStoreUIBarStyle;
- (id)su_closestNavigationController;
@property(readonly, nonatomic) SUViewControllerFactory *viewControllerFactory;
@property(readonly, nonatomic) BOOL shouldInvalidateForMemoryPurge;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
- (id)section;
- (id)_sectionForViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)resetRestoredContext;
- (void)parentViewControllerHierarchyDidChange;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardDidShowWithInfo:(id)arg1;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (BOOL)isRootViewController;
@property(readonly, nonatomic, getter=isSkLoading) BOOL skLoading;
@property(readonly, nonatomic, getter=isSkLoaded) BOOL skLoaded;
- (BOOL)isInMoreList;
- (BOOL)isDescendantOfViewController:(id)arg1;
- (void)iTunesStoreUI_dismissAction:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)copyArchivableJetsamContext;
- (id)copyArchivableContext;
- (BOOL)reloadWithURLRequestProperties:(id)arg1;
- (BOOL)pushStorePage:(id)arg1 withTarget:(long long)arg2 animated:(BOOL)arg3;
- (BOOL)loadMoreWithURL:(id)arg1;
- (BOOL)hasDisplayableContent;
- (void)handleStoreFailureWithError:(id)arg1;
- (BOOL)viewIsReady;
- (void)storePageProtocolDidChange;
@property(retain, nonatomic) SUStorePageProtocol *storePageProtocol;
- (void)storePageCleanupBeforeTearDown;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
@property(readonly, nonatomic) CGRect documentBounds;
- (id)displayedURL;
- (id)setDisplayedSectionGroup:(id)arg1;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (BOOL)canDisplaySectionGroup:(id)arg1;
- (void)transitionSafePresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptViewController;
- (BOOL)showsBackgroundShadow;
- (void)setShowsBackgroundShadow:(BOOL)arg1;
- (BOOL)presentViewController:(id)arg1 inOverlayWithConfiguration:(id)arg2;
- (BOOL)presentOverlayViewController:(id)arg1 withTransition:(id)arg2;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (id)overlayBackgroundViewController;
- (void)dismissOverlayBackgroundViewController;
- (id)scriptWindowContext;
- (id)overlayViewController;
- (id)storeSplitViewController;
- (CGSize)minimumViewSize;
- (CGSize)maximumViewSize;
- (id)navigationItemForScriptInterface;
- (id)iTunesStoreUI_searchFieldController;
@end


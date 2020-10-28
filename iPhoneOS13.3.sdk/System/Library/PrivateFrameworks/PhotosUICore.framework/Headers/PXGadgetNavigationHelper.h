//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, PXGadgetNavigationItem;
@protocol PXGadgetNavigationHelperDelegate;

@interface PXGadgetNavigationHelper : NSObject
{
    id <PXGadgetNavigationHelperDelegate> _delegate;
    PXGadgetNavigationItem *_pendingNavigationItem;
    NSTimer *_navigationInvalidationTimer;
}

@property(nonatomic) __weak NSTimer *navigationInvalidationTimer; // @synthesize navigationInvalidationTimer=_navigationInvalidationTimer;
@property(retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem; // @synthesize pendingNavigationItem=_pendingNavigationItem;
@property(nonatomic) __weak id <PXGadgetNavigationHelperDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_pendingNavigationInvalidationTimerFired:(id)arg1;
- (void)_stopPendingNavigationTimer;
- (BOOL)_navigateToGadget:(id)arg1 animated:(BOOL)arg2 navigationBlock:(id /* CDUnknownBlockType */)arg3;
- (void)invalidateAnyPendingNavigation;
- (void)startPendingNavigationTimer;
- (void)navigateIfNeeded;
- (BOOL)navigateToGadgetDeferIfNeeded:(id)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)navigateToGadgetWithIdDeferIfNeeded:(id)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)navigateToFirstGadgetWithTypeDeferIfNeeded:(NSUInteger)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) BOOL hasPendingNavigation;
- (void)navigateToGadgetForCMMSuggestions;
- (void)navigateToGadgetForCMMInvitationWithIdentifier:(id)arg1;
- (void)navigateToSuggestionGadget:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToInvitationCMMWithUUID:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToSuggestedCMMWithUUID:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg1;
- (void)navigateToSharedAlbumInviteWithUUID:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToSharedAlbumInvitesAnimated:(BOOL)arg1;

@end


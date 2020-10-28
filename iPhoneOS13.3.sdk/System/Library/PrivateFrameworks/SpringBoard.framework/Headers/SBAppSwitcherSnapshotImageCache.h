//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIActiveOrientationObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SBAppSwitcherSettings, SBApplicationController, SBIconController, SBOrientationLockManager;
@protocol BSInvalidatable, OS_dispatch_queue, SBAppSwitcherSnapshotImageCacheDelegate;

@interface SBAppSwitcherSnapshotImageCache : NSObject <SBUIActiveOrientationObserver>
{
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableDictionary *_cachedSnapshots;
    NSMutableDictionary *_cacheEntryUpdateObservers;
    NSMutableDictionary *_snapshotRequestsCurrentlyBeingLoaded;
    NSUInteger _snapshotRequestSequenceID;
    NSArray *_appLayoutsInPriorityOrder;
    NSArray *_appLayoutsRequiringFullSizeSnapshots;
    NSArray *_defaultAppLayouts;
    long long _lastKnownInterfaceOrientation;
    long long _lastKnownUserInterfaceStyle;
    SBAppSwitcherSettings *_settings;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    NSRange _lastVisibleRange;
    NSArray *_lastHighPriorityAppLayouts;
    NSArray *_lastAllAppLayouts;
    BOOL _lastPriorityBiasedForward;
    BOOL _shouldPurgeNilEntries;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBOrientationLockManager *_orientationLockManager;
    BOOL _cachingEnabled;
    BOOL _reloadsSnapshotsForActiveInterfaceOrientationChange;
    id <SBAppSwitcherSnapshotImageCacheDelegate> _delegate;
    NSString *_debugName;
    NSUInteger _atomicNumberOfAppLayoutsToCache;
}

@property NSUInteger atomicNumberOfAppLayoutsToCache; // @synthesize atomicNumberOfAppLayoutsToCache=_atomicNumberOfAppLayoutsToCache;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property(nonatomic) BOOL reloadsSnapshotsForActiveInterfaceOrientationChange; // @synthesize reloadsSnapshotsForActiveInterfaceOrientationChange=_reloadsSnapshotsForActiveInterfaceOrientationChange;
@property(readonly, nonatomic) BOOL cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(nonatomic) __weak id <SBAppSwitcherSnapshotImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_uiImageForCGImage:(CGImage )arg1 forSnapshotRequest:(id)arg2;
- (void)_asynchronouslyLoadSnapshotFromRequest:(id)arg1;
- (BOOL)_keepGoingForRequest:(id)arg1;
- (CGImage )_createDecodedImageIfPossible:(CGImage )arg1;
- (void)_addCacheEntryForImage:(id)arg1 fromRequest:(id)arg2;
- (void)_snapshotImage:(id)arg1 finishedLoadingForRequest:(id)arg2;
- (BOOL)_isLoadingForDefaultDisplayItem:(id)arg1;
- (id)_cachableAppLayoutsRequiringFullSizeSnapshots;
- (id)_cachableAppLayouts;
- (BOOL)_isValidSnapshotRequest:(id)arg1;
- (id)_createSnapshotRequestWithDisplayItem:(id)arg1 inAppLayout:(id)arg2 forFullSizeSnapshot:(BOOL)arg3;
- (void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)arg1 forFullSizeSnapshots:(BOOL)arg2;
- (void)_enqueueNextSnapshotRequestIfNecessary;
- (void)_purgeAllSnapshots;
- (void)_purgeAllSnapshotRequests;
- (BOOL)_isValidAppLayout:(id)arg1 withSnapshot:(id)arg2 givenCachableAppLayouts:(id)arg3;
- (void)_setSnapshotNeedsUpdateForDisplayItem:(id)arg1;
- (void)_purgeLowPriorityFullSizeSnapshots;
- (void)_purgeLowPriorityFullSizeSnapshotRequests;
- (void)_purgeLowPrioritySnapshots;
- (void)_purgeLowPrioritySnapshotRequests;
- (void)_purgeSnapshotsForDisplayItem:(id)arg1;
- (void)_purgeSnapshotRequestsForDisplayItem:(id)arg1 withReason:(id)arg2;
- (void)_purgeSnapshotRequest:(id)arg1 withReason:(id)arg2;
- (void)_addObserver:(id)arg1 forDisplayItem:(id)arg2;
- (id)_defaultAppLayouts;
- (id)_fullSizeSnapshotAppLayouts;
- (double)_scaleForDownscaledSnapshots;
- (long long)_orientationForAppLayout:(id)arg1;
- (id)_highPriorityAppLayouts;
- (BOOL)_biasForwardLoading;
- (NSRange)_visibleAppLayoutRange;
- (id)_allAppLayouts;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_updateActiveOrientationObservingIfNeeded;
- (void)_createDownscaledVariantForRequest:(id)arg1 snapshot:(id)arg2 displayItem:(id)arg3 sceneHandle:(id)arg4 application:(id)arg5;
- (void)_loadSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)_cacheSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)_updateObserversForDisplayItem:(id)arg1 withCacheEntry:(id)arg2;
- (void)_updateAppLayoutPriorityList;
- (void)_snapshotChanged:(id)arg1;
- (void)_setCachingEnabled:(BOOL)arg1 numberOfAppLayoutsToCache:(NSUInteger)arg2;
- (void)reloadSnapshotsForInterfaceStyleChange:(long long)arg1;
- (void)_setShouldPurgeNilEntry:(BOOL)arg1;
- (id)_representedApplicationSceneEntityForDisplayItem:(id)arg1;
- (id)_cachableAppLayoutsForTesting;
- (id)_appLayoutsInPriorityOrder;
@property(readonly, copy) NSString *description;
- (void)removeSnapshotObserver:(id)arg1;
- (void)addSnapshotUpdateObserver:(id)arg1 forDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)_updateCacheForDisplayItem:(id)arg1;
- (void)updateCacheWithMaximumNumberOfAppLayoutsToCache:(NSUInteger)arg1;
- (void)disableCaching;
- (void)enableCachingWithMaximumNumberOfAppLayoutsToCache:(NSUInteger)arg1;
- (void)_resetLastCachedValues;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)_initWithDelegate:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 orientationLockManager:(id)arg4 settings:(id)arg5;

@end


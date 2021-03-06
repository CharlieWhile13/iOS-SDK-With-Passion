//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSceneManager.h>

#import <SpringBoard/SBIdleTimerCoordinating-Protocol.h>
#import <SpringBoard/SBIdleTimerProviding-Protocol.h>
#import <SpringBoard/SBSuspendedUnderLockManagerDelegate-Protocol.h>

@class FBSSceneClientSettingsDiffInspector, NSArray, NSHashTable, NSMutableSet, SBFaceContactExpectationManager, SBMainDisplayPolicyAggregator, SBMedusaHostedKeyboardWindow, SBSuspendedUnderLockManager, UIApplicationSceneClientSettingsDiffInspector, UIWindow;
@protocol SBIdleTimerCoordinating;

@interface SBMainDisplaySceneManager : SBSceneManager <SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, SBIdleTimerProviding>
{
    SBMainDisplayPolicyAggregator *_policyAggregator;
    UIApplicationSceneClientSettingsDiffInspector *_internalClientSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_externalClientSettingsDiffInspector;
    long long _validInterfaceOrientation;
    NSUInteger _validInterfaceOrientationChangeCount;
    NSUInteger _processedValidInterfaceOrientationChangeCount;
    SBFaceContactExpectationManager *_faceContactExpectationManager;
    SBMedusaHostedKeyboardWindow *_medusaHostedKeyboardWindow;
    NSMutableSet *_requiredContextIdentifiersForMedusaDraggingDestination;
    BOOL _didAddSceneLayoutViewControllerWindowContextIdentifier;
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
    NSHashTable *_preventAdditionalMedusaSnapshotsAssertions;
    BOOL _isUsingMedusaHostedKeyboardWindow;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
}

+ (Class)_sceneLayoutWindowClass;
+ (Class)_applicationSceneHandleClass;
+ (Class)_layoutStateManagerClass;
@property(readonly, nonatomic, getter=_isUsingMedusaHostedKeyboardWindow) BOOL _isUsingMedusaHostedKeyboardWindow; // @synthesize _isUsingMedusaHostedKeyboardWindow;
@property(readonly, nonatomic) UIWindow *_medusaHostedKeyboardWindow; // @synthesize _medusaHostedKeyboardWindow;
@property(nonatomic) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
// - (void).cxx_destruct;
- (void)_userInterfaceStyleArbiterStyleChanged:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)_proposeIdleTimerBehaviorForReason:(id)arg1;
- (void)_updateLevelAndBackgroundSettingsForScene:(id)arg1 transitionContext:(id)arg2;
- (void)_updateMedusaHostedKeyboardWindowForScene:(id)arg1 isForeground:(BOOL )arg2;
- (void)_updateMedusaHostedKeyboardWindow;
- (void)_updateValidInterfaceOrientationForTransitionContext:(id)arg1;
- (void)_updateDeviceOrientation:(long long)arg1 ifNeededForScene:(id)arg2;
- (BOOL)_animateGeometryChangesForExternalForegroundApplicationScenes;
- (void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(BOOL)arg2 prefersTouchCancellationDisabled:(BOOL)arg3;
- (void)_attemptAutorotationOfExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6;
- (id)_externalClientSettingsDiffInspector;
- (id)_appClientSettingsDiffInspector;
- (id)_internalClientSettingsDiffInspector;
- (BOOL)_isExternalForegroundScene:(id)arg1;
- (void)_removeMedusaDraggingDestinationWindow:(id)arg1;
- (void)_addMedusaDraggingDestinationWindow:(id)arg1;
@property(readonly, nonatomic) NSArray *_requiredContextIdentifiersForMedusaDraggingDestination;
- (id)_sceneIdentifierForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)_newSceneIdentifierForApplication:(id)arg1;
- (id)_newSceneIdentifierForBundleIdentifier:(id)arg1;
- (id)_identifierForApplication:(id)arg1;
- (id)newSceneIdentityForApplication:(id)arg1;
- (id)_sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 allowCanMatches:(BOOL)arg4 preferNewScene:(BOOL)arg5 visibleIdentifiers:(id)arg6 excludingIdentifiers:(id)arg7;
- (id)_sceneIdentityForApplication:(id)arg1 createPrimaryIfRequired:(BOOL)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(BOOL)arg3 preferNewScene:(BOOL)arg4 visibleIdentifiers:(id)arg5;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2;
- (id)suspendedUnderLockManagerVisibleScenesInLayoutState:(id)arg1;
- (id)runningApplicationScenes:(id)arg1;
- (id)suspendedUnderLockManager:(id)arg1 sceneHandleForScene:(id)arg2;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)arg1;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (BOOL)_shouldRequestSnapshotActionsForScene:(id)arg1;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteDidChangeToVisibility:(NSUInteger)arg1 previouslyExisted:(BOOL)arg2 forScene:(id)arg3;
- (id)window;
- (id)_newSceneLayoutViewController;
- (BOOL)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3;
- (void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2;
- (id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2;
- (BOOL)_handleAction:(id)arg1 forScene:(id)arg2;
- (BOOL)_shouldTrackScenesForDeactivation;
- (BOOL)_shouldAutoHostScene:(id)arg1;
- (id)_createRootWindowScenePresentationBinder;
- (id)preventTakingAdditionalMedusaSnapshotsForBackgroundingScenesWithReason:(id)arg1;
- (void)createSceneForApplication:(id)arg1 withOptions:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)existingSceneHandleForPersistenceIdentifier:(id)arg1;
- (id)existingSceneHandleForSceneIdentity:(id)arg1;
- (id)existingSceneHandleForScene:(id)arg1;
- (id)externalForegroundApplicationSceneHandles;
- (id)externalApplicationSceneHandles;
@property(readonly, nonatomic) SBMainDisplayPolicyAggregator *policyAggregator;
- (void)dealloc;
- (id)initWithReference:(id)arg1;

@end


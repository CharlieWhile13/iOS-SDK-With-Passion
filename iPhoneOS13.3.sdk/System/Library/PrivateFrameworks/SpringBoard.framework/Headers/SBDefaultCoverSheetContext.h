//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSAuthenticationManaging-Protocol.h>
#import <SpringBoard/CSCarPlayStatusProviding-Protocol.h>
#import <SpringBoard/CSCoverSheetContextProviding-Protocol.h>
#import <SpringBoard/CSMediaControlling-Protocol.h>
#import <SpringBoard/CSReachabilityControlling-Protocol.h>
#import <SpringBoard/CSResetRestoreStatusProviding-Protocol.h>
#import <SpringBoard/CSTelephonyStatusProviding-Protocol.h>
#import <SpringBoard/CSTodayOverlayProviding-Protocol.h>
#import <SpringBoard/CSTouchEnvironmentStatusProviding-Protocol.h>
#import <SpringBoard/CSUnlockRequesting-Protocol.h>
#import <SpringBoard/CSUserSessionControlling-Protocol.h>
#import <SpringBoard/CSWallpaperLogging-Protocol.h>

@class NSArray, NSString, SBDashBoardNotificationPresenter, SBSyncController, SBWallpaperAggdLogger;
@protocol CSApplicationInforming, CSAuthenticationManaging, CSCarPlayStatusProviding, CSHomeAffordanceControlling, CSLegibilityProviding, CSMediaControlling, CSModalHomeAffordanceControlling, CSNotificationPresenting, CSPowerStatusProviding, CSReachabilityControlling, CSResetRestoreStatusProviding, CSScreenStateProviding, CSStatusBarControlling, CSTelephonyStatusProviding, CSThermalStatusProviding, CSTodayOverlayProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSWallpaperViewProviding, SBFActionProviding, SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFDateProviding, SBFLockOutStatusProvider, SBFPasscodeFieldChangeObserver, SBFScreenWakeAnimationControlling, SBUIBiometricResource;

@interface SBDefaultCoverSheetContext : NSObject <CSAuthenticationManaging, CSCarPlayStatusProviding, CSMediaControlling, CSReachabilityControlling, CSResetRestoreStatusProviding, CSTelephonyStatusProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSTodayOverlayProviding, CSCoverSheetContextProviding>
{
    SBSyncController *_syncController;
    SBWallpaperAggdLogger *_wallpaperAggdLogger;
    SBDashBoardNotificationPresenter *_notificationPresenter;
    id <SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
    id <SBFAuthenticationStatusProvider> _authenticationStatusProvider;
    id <SBFPasscodeFieldChangeObserver> _passcodeFieldChangeObserver;
    id <SBFDateProviding> _dateProvider;
    id <SBFLockOutStatusProvider> _lockOutStatusProvider;
    id <CSLegibilityProviding> _legibilityProvider;
    id <CSPowerStatusProviding> _powerStatusProvider;
    NSString *_powerStatusChangeNotificationName;
    id <CSThermalStatusProviding> _thermalStatusProvider;
    id <SBUIBiometricResource> _biometricResource;
    id <CSScreenStateProviding> _screenStateProvider;
    id <SBFScreenWakeAnimationControlling> _screenWakeAnimationController;
    id <CSHomeAffordanceControlling> _homeAffordanceController;
    id <CSModalHomeAffordanceControlling> _modalHomeAffordanceController;
    id <CSStatusBarControlling> _statusBarController;
    id <CSWallpaperViewProviding> _wallpaperViewProvider;
    id <SBFActionProviding> _contentActionProvider;
    id <CSApplicationInforming> _applicationInformer;
}

@property(readonly, nonatomic) id <CSApplicationInforming> applicationInformer; // @synthesize applicationInformer=_applicationInformer;
@property(readonly, nonatomic) id <SBFActionProviding> contentActionProvider; // @synthesize contentActionProvider=_contentActionProvider;
@property(readonly, nonatomic) id <CSWallpaperViewProviding> wallpaperViewProvider; // @synthesize wallpaperViewProvider=_wallpaperViewProvider;
@property(readonly, nonatomic) id <CSStatusBarControlling> statusBarController; // @synthesize statusBarController=_statusBarController;
@property(readonly, nonatomic) id <CSModalHomeAffordanceControlling> modalHomeAffordanceController; // @synthesize modalHomeAffordanceController=_modalHomeAffordanceController;
@property(readonly, nonatomic) id <CSHomeAffordanceControlling> homeAffordanceController; // @synthesize homeAffordanceController=_homeAffordanceController;
@property(readonly, nonatomic) id <SBFScreenWakeAnimationControlling> screenWakeAnimationController; // @synthesize screenWakeAnimationController=_screenWakeAnimationController;
@property(readonly, nonatomic) id <CSScreenStateProviding> screenStateProvider; // @synthesize screenStateProvider=_screenStateProvider;
@property(readonly, nonatomic) id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(readonly, nonatomic) id <CSThermalStatusProviding> thermalStatusProvider; // @synthesize thermalStatusProvider=_thermalStatusProvider;
@property(readonly, copy, nonatomic) NSString *powerStatusChangeNotificationName; // @synthesize powerStatusChangeNotificationName=_powerStatusChangeNotificationName;
@property(readonly, nonatomic) id <CSPowerStatusProviding> powerStatusProvider; // @synthesize powerStatusProvider=_powerStatusProvider;
@property(readonly, nonatomic) id <CSLegibilityProviding> legibilityProvider; // @synthesize legibilityProvider=_legibilityProvider;
@property(readonly, nonatomic) id <SBFLockOutStatusProvider> lockOutStatusProvider; // @synthesize lockOutStatusProvider=_lockOutStatusProvider;
@property(readonly, nonatomic) id <SBFDateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <SBFPasscodeFieldChangeObserver> passcodeFieldChangeObserver; // @synthesize passcodeFieldChangeObserver=_passcodeFieldChangeObserver;
@property(readonly, nonatomic) id <SBFAuthenticationStatusProvider> authenticationStatusProvider; // @synthesize authenticationStatusProvider=_authenticationStatusProvider;
@property(readonly, nonatomic) id <SBFAuthenticationAssertionProviding> authenticationAssertionProvider; // @synthesize authenticationAssertionProvider=_authenticationAssertionProvider;
// - (void).cxx_destruct;
- (id)newTodayOverlayController;
@property(readonly, nonatomic) BOOL wantsTodayOverlay;
- (void)incrementIrisPlayCount;
- (void)logout;
@property(readonly, nonatomic, getter=isLogoutSupported) BOOL logoutSupported;
- (void)unlockWithRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)createUnlockRequestForActionContext:(id)arg1;
- (id)createUnlockRequest;
@property(readonly, nonatomic) BOOL expectsPocketTouches;
- (BOOL)isEmergencyCallSupported;
@property(readonly, nonatomic) long long restoreState;
@property(readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property(readonly, nonatomic) long long resetState;
@property(readonly, nonatomic, getter=isResetting) BOOL resetting;
- (void)deactivateReachability;
- (void)stopMediaPlaybackForSource:(long long)arg1;
@property(readonly, nonatomic, getter=isCarPlayActiveForNotifications) BOOL carPlayActiveForNotifications;
- (void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) id <CSTodayOverlayProviding> todayOverlayProvider;
@property(readonly, nonatomic) id <CSCarPlayStatusProviding> carPlayStatusProvider;
@property(readonly, nonatomic) id <CSReachabilityControlling> reachabilityController;
@property(readonly, nonatomic) id <CSUserSessionControlling> userSessionController;
@property(readonly, nonatomic) id <CSTouchEnvironmentStatusProviding> touchEnvironmentStatusProvider;
@property(readonly, nonatomic) id <CSNotificationPresenting> notificationPresenter;
@property(readonly, nonatomic) id <CSWallpaperLogging> wallpaperLogger;
@property(readonly, nonatomic) id <CSUnlockRequesting> unlockRequester;
@property(readonly, nonatomic) id <CSMediaControlling> mediaController;
@property(readonly, nonatomic) id <CSAuthenticationManaging> authenticationManager;
@property(readonly, nonatomic) id <CSTelephonyStatusProviding> telephonyStatusProvider;
@property(readonly, nonatomic) id <CSResetRestoreStatusProviding> resetRestoreStatusProvider;
@property(readonly, copy, nonatomic) NSArray *dismissableOverlays;
- (id)init;

@end


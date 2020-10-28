//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HRProfile, WDClinicalGatewayProxy, WDClinicalOnboardingOAuthNavigationViewController;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingManager : NSObject
{
    HRProfile *_profile;
    WDClinicalGatewayProxy *_pendingOnboardingGateway;
    WDClinicalOnboardingOAuthNavigationViewController *_inFlightLoginViewController;
}

+ (id)sharedInstance;
@property(nonatomic) __weak WDClinicalOnboardingOAuthNavigationViewController *inFlightLoginViewController; // @synthesize inFlightLoginViewController=_inFlightLoginViewController;
@property(retain, nonatomic) WDClinicalGatewayProxy *pendingOnboardingGateway; // @synthesize pendingOnboardingGateway=_pendingOnboardingGateway;
@property(retain, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (void)_didDismissLoginViewController:(id)arg1;
- (void)_dismissInFlightLoginViewControllerIfExistsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_startLoginWithLoginViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)_startOrReplaceLoginWithLoginViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)_onboardAsNewGateway:(id)arg1 presentingViewController:(id)arg2;
- (void)_createOnboardingViewControllerForGatewayProxy:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)createOnboardingViewControllerForPendingOnboardingGatewayWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)registerInflightOnboardingViewController:(id)arg1;
- (void)onboardWithActivity:(id)arg1 presentingViewController:(id)arg2;
- (void)didHandlePendingOnboardingGateway;
@property(readonly, nonatomic) BOOL hasPendingOnboardingGateway;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)init;

@end


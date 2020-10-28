//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HMHome, HUPersonalRequestsEditorItemManager, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_setupButton;
    OBLinkTrayButton *_notNowButton;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
}

@property(retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // @synthesize prEditorItemManager=_prEditorItemManager;
@property(retain, nonatomic) OBLinkTrayButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(retain, nonatomic) OBTrayButton *setupButton; // @synthesize setupButton=_setupButton;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dismissSetup;
- (void)showLearnMore;
- (void)continueSetup;
- (void)skipSetup;
- (void)userTappedCancelFromWarning;
- (void)userTappedContinueFromWarning;
- (id)hu_preloadContent;
- (void)_turnOffPersonalRequests;
- (void)_turnOffVoiceRecognition;
- (void)_resetVoiceProfileSetup;
- (void)_setupVoiceProfile:(id)arg1;
- (void)_dontSetupVoiceProfile;
- (void)_dontSetupVoiceProfileWithWarning:(id)arg1;
- (void)_setupPersonalRequestsItemInfrastructure;
- (id)initWithHome:(id)arg1;

@end


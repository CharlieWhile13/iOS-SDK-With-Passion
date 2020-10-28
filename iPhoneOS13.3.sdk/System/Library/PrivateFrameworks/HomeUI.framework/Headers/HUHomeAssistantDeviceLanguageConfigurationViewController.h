//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class NAFuture, NSArray, NSLayoutConstraint, NSTimer, OBLinkTrayButton, OBTrayButton, UIActivityIndicatorView;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDeviceLanguageConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    OBTrayButton *_changeLanguageButton;
    OBLinkTrayButton *_cancelButton;
    NSArray *_supportedMultiUserLanguages;
    NSArray *_languageMismatchedHomeAssistantDevices;
    long long _selectedLanguageIndex;
    NSLayoutConstraint *_heightAnchor;
    UIActivityIndicatorView *_spinner;
    NAFuture *_changeLanguageFuture;
    NSTimer *_changeLanguageTimer;
}

@property(retain, nonatomic) NSTimer *changeLanguageTimer; // @synthesize changeLanguageTimer=_changeLanguageTimer;
@property(retain, nonatomic) NAFuture *changeLanguageFuture; // @synthesize changeLanguageFuture=_changeLanguageFuture;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(nonatomic) long long selectedLanguageIndex; // @synthesize selectedLanguageIndex=_selectedLanguageIndex;
@property(retain, nonatomic) NSArray *languageMismatchedHomeAssistantDevices; // @synthesize languageMismatchedHomeAssistantDevices=_languageMismatchedHomeAssistantDevices;
@property(retain, nonatomic) NSArray *supportedMultiUserLanguages; // @synthesize supportedMultiUserLanguages=_supportedMultiUserLanguages;
@property(retain, nonatomic) OBLinkTrayButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) OBTrayButton *changeLanguageButton; // @synthesize changeLanguageButton=_changeLanguageButton;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)_configureTitleDescriptionContentViewForCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)hu_preloadContent;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)_cancelLanguageChange;
- (void)_changeLanguage;
- (void)dealloc;
- (id)initWithSupportedMultiUserLanguages:(id)arg1 languageMismatchedHomeAssistantDevices:(id)arg2;

@end


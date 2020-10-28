//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSObject;
@protocol STContentPrivacyViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STContentPrivacyAllowedAppsDetailController : PSListController
{
    NSObject<STContentPrivacyViewModelCoordinator> *_coordinator;
}

@property(retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (void)_addBlacklistAppSpecifier:(id)arg1 bundleID:(id)arg2;
- (void)_addBooleanAppSpecifier:(id)arg1 configuration:(id)arg2 key:(id)arg3 bundleID:(id)arg4;
- (id)nameForInstalledSystemApp:(id)arg1;
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 fallbackLabel:(id)arg3 icon:(id)arg4;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)getItemSpecifierValue:(id)arg1;
- (id)specifiers;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STManageContactsGroupSpecifierProvider : STRootGroupSpecifierProvider
{
    PSSpecifier *_manageContactsRequestSpecifier;
}

@property(retain) PSSpecifier *manageContactsRequestSpecifier; // @synthesize manageContactsRequestSpecifier=_manageContactsRequestSpecifier;
// - (void).cxx_destruct;
- (void)_updateContactManagementState:(long long)arg1;
- (void)_showManageContactsRequestAlert:(id)arg1;
- (void)_communicationLimitsDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end


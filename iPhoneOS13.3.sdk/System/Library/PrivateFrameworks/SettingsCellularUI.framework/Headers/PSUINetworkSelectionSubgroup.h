//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>
#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class CoreTelephonyClient, NSMutableArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUINetworkSelectionSubgroup : NSObject <CoreTelephonyClientSubscriberDelegate, PSSpecifierGroup>
{
    PSListController *_listController;
    PSSpecifier *_parentSpecifier;
    CoreTelephonyClient *_ctClient;
    NSMutableArray *_bundleControllers;
}

@property(retain, nonatomic) NSMutableArray *bundleControllers; // @synthesize bundleControllers=_bundleControllers;
@property(retain, nonatomic) CoreTelephonyClient *ctClient; // @synthesize ctClient=_ctClient;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
// - (void).cxx_destruct;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3;
- (void)reloadCellularNetworkSpecifier;
- (id)localizedCellularNetworkName:(id)arg1;
- (void)updateShowsCarrierSettingsMenuVisibility;
- (void)setShowsCarrierSettingsMenu:(BOOL)arg1;
- (BOOL)_showCarrier;
- (id)specifiers;
- (void)willEnterForeground;
- (void)dealloc;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;

@end


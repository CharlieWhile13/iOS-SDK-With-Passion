//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <SettingsCellularUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>
#import <SettingsCellularUI/RadiosPreferencesDelegate-Protocol.h>

@class CoreTelephonyClient, PSSpecifier, PSUICarrierItemGroup, PSUICellularDataOptionsController, PSUICellularDataPlanDetailGroup, PSUICellularDataPlanListGroup, PSUICellularDataPlanSetupGroup, PSUICellularDataSpecifier, PSUICellularPlanListGroup, PSUICellularUsageSchedulingGroup, PSUISubscriptionContextMenusGroup, RadiosPreferences;

@interface PSUICellularController : PSListController <CoreTelephonyClientSubscriberDelegate, RadiosPreferencesDelegate>
{
    PSSpecifier *_viewAccount;
    PSSpecifier *_viewAccountGroup;
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    BOOL _disabled;
    BOOL _ignoreNextEntitlementStatusChange;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_fauxCardSpecifier;
    BOOL _shouldCalculateDataUsage;
    PSUICellularDataSpecifier *_cellularDataSpecifier;
    PSUICellularDataOptionsController *_cellularDataOptionsController;
    PSUICellularDataPlanSetupGroup *_cellularDataPlanSetupGroup;
    PSUICellularDataPlanListGroup *_cellularDataPlanListGroup;
    PSUICellularDataPlanDetailGroup *_cellularDataPlanDetailGroup;
    PSUICellularPlanListGroup *_cellularPlanListGroup;
    PSUICarrierItemGroup *_cellularNewNetworkGroup;
    PSUISubscriptionContextMenusGroup *_subscriptionContextMenus;
    PSUICellularUsageSchedulingGroup *_appUsageGroup;
    CoreTelephonyClient *_coreTelephonyClient;
    RadiosPreferences *_radioPreferences;
}

@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) PSUICellularUsageSchedulingGroup *appUsageGroup; // @synthesize appUsageGroup=_appUsageGroup;
@property(retain, nonatomic) PSUISubscriptionContextMenusGroup *subscriptionContextMenus; // @synthesize subscriptionContextMenus=_subscriptionContextMenus;
@property(retain, nonatomic) PSUICarrierItemGroup *cellularNewNetworkGroup; // @synthesize cellularNewNetworkGroup=_cellularNewNetworkGroup;
@property(retain, nonatomic) PSUICellularPlanListGroup *cellularPlanListGroup; // @synthesize cellularPlanListGroup=_cellularPlanListGroup;
@property(retain, nonatomic) PSUICellularDataPlanDetailGroup *cellularDataPlanDetailGroup; // @synthesize cellularDataPlanDetailGroup=_cellularDataPlanDetailGroup;
@property(retain, nonatomic) PSUICellularDataPlanListGroup *cellularDataPlanListGroup; // @synthesize cellularDataPlanListGroup=_cellularDataPlanListGroup;
@property(retain, nonatomic) PSUICellularDataPlanSetupGroup *cellularDataPlanSetupGroup; // @synthesize cellularDataPlanSetupGroup=_cellularDataPlanSetupGroup;
@property(retain, nonatomic) PSUICellularDataOptionsController *cellularDataOptionsController; // @synthesize cellularDataOptionsController=_cellularDataOptionsController;
@property(retain, nonatomic) PSUICellularDataSpecifier *cellularDataSpecifier; // @synthesize cellularDataSpecifier=_cellularDataSpecifier;
// - (void).cxx_destruct;
- (void)carrierItemsChanged;
- (void)wirelessDataUsageChangedNotification;
- (void)cellularPlanChanged:(id)arg1;
- (void)airplaneModeChanged;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)cellularDataSettingChanged;
- (void)newCarrierNotification;
- (void)setupCellularFaceTime:(id)arg1;
- (BOOL)shouldShowFaceTimeSetup;
- (void)viewAccountPressed:(id)arg1;
- (BOOL)shouldShowViewAccount;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)removePlanConfirmationTitle:(id)arg1;
- (id)removePlanConfirmationMessage:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)getTetheringStatus:(id)arg1;
- (id)cellularDataOptionsDetailText:(id)arg1;
- (BOOL)showDataPlanOnly;
- (void)updatePaneWithCellularDataState:(BOOL)arg1;
- (BOOL)isCellularDisabled;
- (void)entitlementStatusChanged;
- (void)handleURL:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)prefetchResourcesFor:(id)arg1;
- (id)activeDataPlanLabel;
- (id)appUsageGroupTitle;
- (id)specifiers;
- (void)turnOnLocationServicesPressed:(id)arg1;
- (void)retryCarrierListFetch:(id)arg1;
- (id)_deadTelephonySpecifiers;
- (void)learnMoreLinkTapped;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end


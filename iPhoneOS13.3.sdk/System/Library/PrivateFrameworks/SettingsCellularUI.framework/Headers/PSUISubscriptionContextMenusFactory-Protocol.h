//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTCellularPlanManager, PSListController, PSSimStatusCache, PSSpecifier, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUICellularPlanManagerCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyDataCache, PSUILowDataModeSubgroup, PSUIMyNumberSubgroup, PSUINetworkSelectionSubgroup, PSUINetworkSettingsSubgroup, PSUISIMSubgroup;

@protocol PSUISubscriptionContextMenusFactory
- (PSUILowDataModeSubgroup *)createLowDataModeSubgroup;
- (CTCellularPlanManager *)createCellularPlanManager;
- (PSUICellularPlanManagerCache *)createCellularPlanManagerCache;
- (PSUICoreTelephonyDataCache *)createDataCache;
- (PSUICoreTelephonyCarrierBundleCache *)createCarrierBundleCache;
- (PSSimStatusCache *)createSimStatusCache;
- (PSUISIMSubgroup *)createSimSubgroup;
- (PSUINetworkSettingsSubgroup *)createNetworkSettingsSubgroup;
- (PSUIMyNumberSubgroup *)createMyNumberSubgroup;
- (PSUINetworkSelectionSubgroup *)createNetworkSelectionSubgroup;
- (PSUICarrierSpaceGroup *)createCarrierSpaceSubgroup;
- (PSUICallingSubgroup *)createCallingSubgroup;
- (BOOL)shouldPopViewControllerOnPlanRemoval;
- (PSSpecifier *)parentSpecifier;
- (PSSpecifier *)groupSpecifier;
- (PSListController *)hostController;
@end


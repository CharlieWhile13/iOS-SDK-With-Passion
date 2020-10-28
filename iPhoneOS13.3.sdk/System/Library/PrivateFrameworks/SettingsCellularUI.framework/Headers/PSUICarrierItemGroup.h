//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class CTCellularPlanManager, PSListController, PSSpecifier, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUICarrierItemGroup : NSObject <PSSpecifierGroup>
{
    PSUICellularPlanManagerCache *_cellularPlanManager;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
}

@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
// - (void).cxx_destruct;
- (void)carrierItemPressed:(id)arg1;
- (id)specifiersForCarrierItems;
- (BOOL)hasCarrierItems;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)init;

@end


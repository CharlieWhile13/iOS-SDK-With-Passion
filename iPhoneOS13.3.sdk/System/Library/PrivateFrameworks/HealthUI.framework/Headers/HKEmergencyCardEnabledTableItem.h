//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class UISwitch, UITableViewCell;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem
{
    UITableViewCell *_cell;
    UISwitch *_switch;
}

// - (void).cxx_destruct;
- (id)titleForFooter;
- (id)titleForHeader;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (UIEdgeInsets)separatorInset;
- (void)_switchSwitched:(id)arg1;
- (id)_cell;
- (id)initInEditMode:(BOOL)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class UITableView;

@interface OBTableWelcomeController : OBWelcomeController
{
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (void)_updateDirectionalLayoutMarginsForTableView;
- (void)updateDirectionalLayoutMargins;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;

@end


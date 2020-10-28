//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HUInstructionsItem, UIViewController;

@interface HUInstructionsTableViewController : HUItemTableViewController
{
    HUInstructionsItem *_instructionsItem;
    UIViewController *_contentViewController;
}

@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) HUInstructionsItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
// - (void).cxx_destruct;
- (id)childViewControllersToPreload;
- (BOOL)shouldHideFooterBelowSection:(long long)arg1;
- (BOOL)shouldHideHeaderAboveSection:(long long)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (id)initWithItemManager:(id)arg1 instructionsItem:(id)arg2 contentViewController:(id)arg3;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

@end

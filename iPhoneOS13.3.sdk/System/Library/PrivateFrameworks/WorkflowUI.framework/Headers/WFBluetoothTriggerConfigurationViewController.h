//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/WFTriggerTableViewControllerDelegate-Protocol.h>

@class NSArray, UITableView;

@interface WFBluetoothTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_allDevices;
    UITableView *_tableView;
    NSArray *_sections;
}

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *allDevices; // @synthesize allDevices=_allDevices;
// - (void).cxx_destruct;
- (void)triggerTableViewControllerDidCancel:(id)arg1;
- (void)triggerTableViewController:(id)arg1 didFinishWithAnySelected:(BOOL)arg2 orSelectedOptions:(id)arg3;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)finishWithDevices:(id)arg1;
- (void)fetchBluetoothDevices;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(NSUInteger)arg3;

@end


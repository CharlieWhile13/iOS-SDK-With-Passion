//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/WFTimeOffsetPickerViewControllerDelegate-Protocol.h>

@class NSArray, UITableView;

@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate>
{
    BOOL _showingPicker;
    UITableView *_tableView;
    NSArray *_sections;
}

@property(nonatomic) BOOL showingPicker; // @synthesize showingPicker=_showingPicker;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (void)timeOffsetPickerViewControllerDidCancel:(id)arg1;
- (void)timeOffsetPickerViewController:(id)arg1 didSelectOffset:(NSUInteger)arg2;
- (void)timePickerUpdated:(id)arg1;
- (void)updateTriggerTimeFromDate:(id)arg1;
- (void)presentOffsetPickerViewControllerForEvent:(NSUInteger)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)titleForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(NSUInteger)arg3;

@end


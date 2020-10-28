//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSIndexPath, UITableView;

@protocol MPUActionTableViewDataSource <UITableViewDataSource>
+ (NSArray *)actionCellConfigurationClassesForLocation:(NSUInteger)arg1;
+ (NSArray *)actionCellConfigurationClasses;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (void)reloadActionRowsAnimated:(BOOL)arg1;
- (long long)numberOfBottomActionRowsInTableView:(UITableView *)arg1;
- (long long)numberOfTopActionRowsInTableView:(UITableView *)arg1;
- (long long)numberOfActionRowsInTableView:(UITableView *)arg1;
- (Class)cellConfigurationForIndexPath:(NSIndexPath *)arg1;
@end


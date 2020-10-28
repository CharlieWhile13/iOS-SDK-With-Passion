//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class NSLayoutConstraint, STCandyBarView, UILabel;

__attribute__((visibility("hidden")))
@interface STUsageCell : STTableCell
{
    UILabel *_itemNameLabel;
    STCandyBarView *_usageBarView;
    UILabel *_usageLabel;
    NSLayoutConstraint *_usageBarWidthConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *usageBarWidthConstraint; // @synthesize usageBarWidthConstraint=_usageBarWidthConstraint;
@property(readonly, nonatomic) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(readonly, nonatomic) STCandyBarView *usageBarView; // @synthesize usageBarView=_usageBarView;
@property(readonly, nonatomic) UILabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
// - (void).cxx_destruct;
- (void)_didFetchAppInfoOrIcon:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end


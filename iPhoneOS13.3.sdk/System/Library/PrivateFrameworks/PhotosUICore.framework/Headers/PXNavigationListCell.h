//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@protocol PXNavigationListItem;

@interface PXNavigationListCell : UITableViewCell
{
    BOOL _enabled;
    id <PXNavigationListItem> _listItem;
}

+ (id)_symbolConfigurationForFont:(id)arg1;
+ (id)cellFont;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <PXNavigationListItem> listItem; // @synthesize listItem=_listItem;
// - (void).cxx_destruct;
- (id)_currentCellColor;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)_updateFonts;
- (void)_updateCellStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


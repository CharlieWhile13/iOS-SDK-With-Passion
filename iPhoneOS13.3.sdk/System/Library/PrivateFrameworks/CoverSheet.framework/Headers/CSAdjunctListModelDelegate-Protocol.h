//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSAdjunctListModel;
@protocol CSAdjunctListItemProviding;

@protocol CSAdjunctListModelDelegate <NSObject>
- (void)adjunctListModel:(CSAdjunctListModel *)arg1 didRemoveItem:(id <CSAdjunctListItemProviding>)arg2;
- (void)adjunctListModel:(CSAdjunctListModel *)arg1 didAddItem:(id <CSAdjunctListItemProviding>)arg2;
@end


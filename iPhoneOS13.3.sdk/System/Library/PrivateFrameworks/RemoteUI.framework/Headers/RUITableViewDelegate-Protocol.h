//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSIndexPath, RUIElement, RUITableView;

@protocol RUITableViewDelegate
- (void)tableViewOM:(RUITableView *)arg1 elementDidChange:(RUIElement *)arg2 action:(int)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)tableViewOMSubmitForm:(RUITableView *)arg1;
- (void)tableViewOMDidChange:(RUITableView *)arg1;
- (BOOL)tableViewOM:(RUITableView *)arg1 deleteRowAtIndexPath:(NSIndexPath *)arg2;
@end


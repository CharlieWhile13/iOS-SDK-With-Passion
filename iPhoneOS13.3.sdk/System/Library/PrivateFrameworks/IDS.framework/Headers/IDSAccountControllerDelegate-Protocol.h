//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IDSAccount, IDSAccountController;

@protocol IDSAccountControllerDelegate <NSObject>

@optional
- (void)accountController:(IDSAccountController *)arg1 accountDisabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountEnabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountRemoved:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountUpdated:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountAdded:(IDSAccount *)arg2;
@end


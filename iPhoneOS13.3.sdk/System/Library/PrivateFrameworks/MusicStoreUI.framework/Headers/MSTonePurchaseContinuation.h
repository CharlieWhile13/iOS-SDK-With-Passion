//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUPurchaseContinuation.h>

#import <MusicStoreUI/CNContactPickerDelegate-Protocol.h>

@class CNContactPickerViewController, UIActionSheet, UIAlertView;

@interface MSTonePurchaseContinuation : SUPurchaseContinuation <CNContactPickerDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    CNContactPickerViewController *_contactPicker;
}

- (void)_showPeoplePicker;
- (void)_pickAssigneeToneStyle;
- (void)_dismissContactPicker;
- (void)_destroyAlertView;
- (void)_destroyActionSheet;
- (id)_copyAllowedToneStyles;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (id)initWithPurchase:(id)arg1;

@end

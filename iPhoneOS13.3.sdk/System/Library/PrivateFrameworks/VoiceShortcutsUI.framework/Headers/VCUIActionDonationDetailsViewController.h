//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceShortcutsUI/VCUIShortcutViewControllerDelegate-Protocol.h>

@protocol VCActionDonation;

@interface VCUIActionDonationDetailsViewController : UIViewController <VCUIShortcutViewControllerDelegate>
{
    id <VCActionDonation> _donation;
}

+ (void)initialize;
@property(readonly, nonatomic) id <VCActionDonation> donation; // @synthesize donation=_donation;
// - (void).cxx_destruct;
- (void)shortcutViewController:(id)arg1 didCreateShortcut:(id)arg2;
- (void)shortcutViewControllerDidCancel:(id)arg1;
- (void)createVoiceShortcut;
- (void)loadView;
- (id)initWithDonation:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFUISiriSetupViewController, NSURL;

@protocol AFUISiriSetupViewControllerDelegate <NSObject>
- (void)siriSetupViewControllerDidChangeVisibility:(AFUISiriSetupViewController *)arg1;
- (void)openSiriRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (void)disableSiriActivationRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (BOOL)siriSetupViewController:(AFUISiriSetupViewController *)arg1 openURL:(NSURL *)arg2;
- (void)dismissSiriSetupViewController:(AFUISiriSetupViewController *)arg1;
@end

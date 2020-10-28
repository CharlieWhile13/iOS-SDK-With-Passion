//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSString;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate>
{
    id <SearchUIFirstTimeExperienceDelegate> _delegate;
    NSUInteger _supportedDomains;
    NSString *_explanationText;
    NSString *_learnMoreText;
    NSString *_continueButtonTitle;
    NSString *_bundleIdentifier;
}

@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *continueButtonTitle; // @synthesize continueButtonTitle=_continueButtonTitle;
@property(retain, nonatomic) NSString *learnMoreText; // @synthesize learnMoreText=_learnMoreText;
@property(retain, nonatomic) NSString *explanationText; // @synthesize explanationText=_explanationText;
@property(nonatomic) NSUInteger supportedDomains; // @synthesize supportedDomains=_supportedDomains;
@property(nonatomic) __weak id <SearchUIFirstTimeExperienceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)showPrivacyView;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4;
- (void)continueButtonPressed;
- (void)makeViews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithSupportedDomains:(NSUInteger)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;
- (id)initWithStyle:(NSUInteger)arg1 supportedDomains:(NSUInteger)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5;

@end

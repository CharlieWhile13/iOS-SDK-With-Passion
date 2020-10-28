//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIUIStackView.h>

@class NSLayoutConstraint, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface VUIBuyButtonLockup : VUIUIStackView
{
    UILabel *_iAPLabel;
    UIButton *_button;
    NSLayoutConstraint *_buttonHeightConstraint;
    long long _lastOrientation;
    BOOL _hasIAP;
}

@property(nonatomic) BOOL hasIAP; // @synthesize hasIAP=_hasIAP;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
// - (void).cxx_destruct;
- (void)_updateForPreferredContentSize;
- (BOOL)_isLargeContentSize;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end


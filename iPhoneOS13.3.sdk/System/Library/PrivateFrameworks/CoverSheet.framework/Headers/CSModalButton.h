//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIVisualEffect, UIVisualEffectView;

@interface CSModalButton : UIButton
{
    UIColor *_backgroundColor;
    UIVisualEffectView *_effectView;
    BOOL _isPressed;
}

// - (void).cxx_destruct;
- (void)_buttonReleased:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(retain, nonatomic) UIVisualEffect *visualEffect;
- (id)initWithFrame:(CGRect)arg1;

@end


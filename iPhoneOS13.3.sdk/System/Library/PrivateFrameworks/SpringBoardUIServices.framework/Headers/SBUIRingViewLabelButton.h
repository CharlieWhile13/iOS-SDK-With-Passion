//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TPRevealingRingView, UILabel;

@interface SBUIRingViewLabelButton : UIControl
{
    TPRevealingRingView *_ringView;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) TPRevealingRingView *backgroundRing; // @synthesize backgroundRing=_ringView;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end


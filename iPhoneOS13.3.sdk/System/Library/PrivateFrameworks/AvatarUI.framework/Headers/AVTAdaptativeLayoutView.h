//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol AVTAdaptativeLayout;

@interface AVTAdaptativeLayoutView : UIView
{
    id <AVTAdaptativeLayout> _layout;
    UIView *_contentView;
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <AVTAdaptativeLayout> layout; // @synthesize layout=_layout;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 contentView:(id)arg2;

@end


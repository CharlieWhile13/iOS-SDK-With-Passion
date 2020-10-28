//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIStyledImageButton : UIControl
{
    BOOL _didInitialHighlightForTouch;
    SKUIImageView *_imageView;
    SKUIImageView *_additionalImageView;
    UIEdgeInsets _bigHitInsets;
    BOOL _useBigHitTarget;
    UIEdgeInsets _hitRectInsets;
}

@property(nonatomic) UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(readonly, nonatomic) SKUIImageView *additionalImageView; // @synthesize additionalImageView=_additionalImageView;
@property(nonatomic) BOOL useBigHitTarget; // @synthesize useBigHitTarget=_useBigHitTarget;
@property(readonly, nonatomic) SKUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) UIEdgeInsets bigHitInsets; // @synthesize bigHitInsets=_bigHitInsets;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (CGRect)hitRect;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end


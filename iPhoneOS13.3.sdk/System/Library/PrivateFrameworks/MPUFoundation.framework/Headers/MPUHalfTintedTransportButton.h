//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <MPUFoundation/MPUTransportButton-Protocol.h>

@class MPUTransportButtonEventHandler, UIButton, UIColor, UIImage, UIImageView;

@interface MPUHalfTintedTransportButton : UIControl <MPUTransportButton>
{
    UIButton *_regularButton;
    UIButton *_tintedButton;
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
    UIImage *_regularImage;
    UIColor *_regularImageColor;
    UIImage *_tintedImage;
}

+ (id)transportButton;
@property(retain, nonatomic) UIImage *tintedImage; // @synthesize tintedImage=_tintedImage;
@property(retain, nonatomic) UIColor *regularImageColor; // @synthesize regularImageColor=_regularImageColor;
@property(retain, nonatomic) UIImage *regularImage; // @synthesize regularImage=_regularImage;
// - (void).cxx_destruct;
- (void)_updateRegularImage;
@property(readonly, nonatomic, getter=_tintedButton) UIButton *tintedButton;
- (BOOL)_shouldForwardSelectedState;
@property(readonly, nonatomic, getter=_regularButton) UIButton *regularButton;
- (id)_newButton;
- (void)_applyImage:(id)arg1 toButton:(id)arg2;
@property(readonly, nonatomic) UIImageView *tintedImageView;
@property(retain, nonatomic) UIColor *tintedImageColor;
@property(nonatomic) double tintedImageAlpha;
@property(nonatomic) double regularImageAlpha;
@property(readonly, nonatomic) UIImageView *regularImageView;
@property(nonatomic) long long transportButtonImageViewContentMode;
@property(nonatomic) BOOL adjustsImageWhenHighlighted;
- (BOOL)wantsCustomHighlightAppearance;
- (void)prepareForReuse;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_b7523c42)arg1;
@property(readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
- (BOOL)shouldTrack;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end


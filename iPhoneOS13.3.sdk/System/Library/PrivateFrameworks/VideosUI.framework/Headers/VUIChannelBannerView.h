//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUIAppleTVChannelLogoView, VUIButton, VUIChannelBannerLayout, VUIFocusableTextView, VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUIChannelBannerView : UIView
{
    IKViewElement *_viewElement;
    VUIChannelBannerLayout *_layout;
    VUIAppleTVChannelLogoView *_appleTVChannelLogoView;
    VUIButton *_subscribeButton;
    VUILabel *_disclaimerTextLabel;
    VUIFocusableTextView *_descriptionTextView;
    NSArray *_textLabels;
    UIView *_bgColorView;
    VUISeparatorView *_separatorView;
}

@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *bgColorView; // @synthesize bgColorView=_bgColorView;
@property(retain, nonatomic) NSArray *textLabels; // @synthesize textLabels=_textLabels;
@property(retain, nonatomic) VUIFocusableTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) VUILabel *disclaimerTextLabel; // @synthesize disclaimerTextLabel=_disclaimerTextLabel;
@property(retain, nonatomic) VUIButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) VUIAppleTVChannelLogoView *appleTVChannelLogoView; // @synthesize appleTVChannelLogoView=_appleTVChannelLogoView;
@property(retain, nonatomic) VUIChannelBannerLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
- (void)_layoutLabels:(id)arg1 withOrigin:(CGPoint)arg2 maxWidth:(double)arg3;
- (CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2;
@property(readonly, nonatomic) double topThreshold;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

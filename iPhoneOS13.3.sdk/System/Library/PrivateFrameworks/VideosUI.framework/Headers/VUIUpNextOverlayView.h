//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/VUITextBadgeViewDelegate-Protocol.h>

@class CALayer, IKViewElement, NSNumber, VUICountDownProgressIndicator, VUILabel, VUITextBadgeView, VUIUpNextOverlayLayout, _TVImageView, _TVProgressView;

__attribute__((visibility("hidden")))
@interface VUIUpNextOverlayView : UIView <VUITextBadgeViewDelegate>
{
    BOOL _progressViewShowOnlyOnFocus;
    BOOL _appImageViewShowOnlyOnFocus;
    BOOL _logoImageViewShowOnlyOnFocus;
    BOOL _textLabelShowOnlyOnFocus;
    BOOL _subtitleLabelShowOnlyOnFocus;
    BOOL _badgeShowOnlyOnFocus;
    BOOL _isFocused;
    VUIUpNextOverlayLayout *_overlayLayout;
    CALayer *_gradientLayer;
    IKViewElement *_viewElement;
    _TVProgressView *_progressView;
    IKViewElement *_progressViewElement;
    _TVImageView *_appImageView;
    IKViewElement *_appImageElement;
    _TVImageView *_logoImageView;
    IKViewElement *_logoImageElement;
    VUILabel *_textLabel;
    IKViewElement *_textElement;
    VUILabel *_subtitleLabel;
    IKViewElement *_subtitleElement;
    _TVImageView *_badgeView;
    IKViewElement *_badgeElement;
    VUITextBadgeView *_textBadge;
    IKViewElement *_textBadgeElement;
    UIView *_gradientView;
    CALayer *_blurMaskLayer;
    NSNumber *_autoPlayDuration;
    VUICountDownProgressIndicator *_autoPlayIndicator;
}

+ (id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;
@property(retain, nonatomic) VUICountDownProgressIndicator *autoPlayIndicator; // @synthesize autoPlayIndicator=_autoPlayIndicator;
@property(retain, nonatomic) NSNumber *autoPlayDuration; // @synthesize autoPlayDuration=_autoPlayDuration;
@property(nonatomic) BOOL isFocused; // @synthesize isFocused=_isFocused;
@property(nonatomic) BOOL badgeShowOnlyOnFocus; // @synthesize badgeShowOnlyOnFocus=_badgeShowOnlyOnFocus;
@property(nonatomic) BOOL subtitleLabelShowOnlyOnFocus; // @synthesize subtitleLabelShowOnlyOnFocus=_subtitleLabelShowOnlyOnFocus;
@property(nonatomic) BOOL textLabelShowOnlyOnFocus; // @synthesize textLabelShowOnlyOnFocus=_textLabelShowOnlyOnFocus;
@property(nonatomic) BOOL logoImageViewShowOnlyOnFocus; // @synthesize logoImageViewShowOnlyOnFocus=_logoImageViewShowOnlyOnFocus;
@property(nonatomic) BOOL appImageViewShowOnlyOnFocus; // @synthesize appImageViewShowOnlyOnFocus=_appImageViewShowOnlyOnFocus;
@property(nonatomic) BOOL progressViewShowOnlyOnFocus; // @synthesize progressViewShowOnlyOnFocus=_progressViewShowOnlyOnFocus;
@property(retain, nonatomic) CALayer *blurMaskLayer; // @synthesize blurMaskLayer=_blurMaskLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) IKViewElement *textBadgeElement; // @synthesize textBadgeElement=_textBadgeElement;
@property(retain, nonatomic) VUITextBadgeView *textBadge; // @synthesize textBadge=_textBadge;
@property(retain, nonatomic) IKViewElement *badgeElement; // @synthesize badgeElement=_badgeElement;
@property(retain, nonatomic) _TVImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) IKViewElement *subtitleElement; // @synthesize subtitleElement=_subtitleElement;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) IKViewElement *textElement; // @synthesize textElement=_textElement;
@property(retain, nonatomic) VUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) IKViewElement *logoImageElement; // @synthesize logoImageElement=_logoImageElement;
@property(retain, nonatomic) _TVImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) IKViewElement *appImageElement; // @synthesize appImageElement=_appImageElement;
@property(retain, nonatomic) _TVImageView *appImageView; // @synthesize appImageView=_appImageView;
@property(retain, nonatomic) IKViewElement *progressViewElement; // @synthesize progressViewElement=_progressViewElement;
@property(retain, nonatomic) _TVProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) VUIUpNextOverlayLayout *overlayLayout; // @synthesize overlayLayout=_overlayLayout;
// - (void).cxx_destruct;
- (void)textBadgeViewContentsUpdated:(id)arg1;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;

@end


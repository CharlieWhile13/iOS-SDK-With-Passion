//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CLSNotificationBannerView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    double _preferredWidthPad;
    double _duration;
    id /* CDUnknownBlockType */ _completionHandler;
}

+ (id)bundle;
+ (id)bannerMessageAttributes;
+ (id)bannerTitleAttributes;
+ (BOOL)_preventsAppearanceProxyCustomization;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double preferredWidthPad; // @synthesize preferredWidthPad=_preferredWidthPad;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (void)callCompletionHandler;
- (void)hideBanner;
- (void)showWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3;

@end


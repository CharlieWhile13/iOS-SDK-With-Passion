//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/VUIRentalExpirationLabelDelegate-Protocol.h>

@class CAGradientLayer, IKViewElement, NSArray, VUIComingSoonBannerCardView, VUIFocusableTextView, VUILabel, VUIMediaTagsView, VUIProductBannerCastInfoView, VUIProductBannerLayout, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductBannerView : UIView <VUIRentalExpirationLabelDelegate>
{
    BOOL _prefersUberLayout;
    IKViewElement *_viewElement;
    VUIProductBannerLayout *_layout;
    _TVImageView *_logoImageView;
    VUILabel *_logoTextView;
    VUILabel *_subTextView;
    VUILabel *_episodeInfoView;
    _TVImageView *_coverArtImageView;
    _TVImageView *_decorationImageView;
    _TVImageView *_decorationImageGradientView;
    NSArray *_buttonViews;
    VUIComingSoonBannerCardView *_comingSoonView;
    VUIFocusableTextView *_descriptionTextView;
    VUIProductBannerCastInfoView *_castInfoView;
    VUIMediaTagsView *_tagsView;
    VUIMediaTagsView *_infoTagsView;
    VUILabel *_disclaimerTextView;
    VUILabel *_availabilityTextView;
    _TVImageView *_availabilityImageView;
    CAGradientLayer *_gradientLayer;
    VUISeparatorView *_separatorView;
    VUILabel *_descComputationLabel;
    VUILabel *_tagsComputationLabel;
    double _contentOffset;
}

@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) VUILabel *tagsComputationLabel; // @synthesize tagsComputationLabel=_tagsComputationLabel;
@property(retain, nonatomic) VUILabel *descComputationLabel; // @synthesize descComputationLabel=_descComputationLabel;
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) BOOL prefersUberLayout; // @synthesize prefersUberLayout=_prefersUberLayout;
@property(retain, nonatomic) _TVImageView *availabilityImageView; // @synthesize availabilityImageView=_availabilityImageView;
@property(retain, nonatomic) VUILabel *availabilityTextView; // @synthesize availabilityTextView=_availabilityTextView;
@property(retain, nonatomic) VUILabel *disclaimerTextView; // @synthesize disclaimerTextView=_disclaimerTextView;
@property(retain, nonatomic) VUIMediaTagsView *infoTagsView; // @synthesize infoTagsView=_infoTagsView;
@property(retain, nonatomic) VUIMediaTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) VUIProductBannerCastInfoView *castInfoView; // @synthesize castInfoView=_castInfoView;
@property(retain, nonatomic) VUIFocusableTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) VUIComingSoonBannerCardView *comingSoonView; // @synthesize comingSoonView=_comingSoonView;
@property(retain, nonatomic) NSArray *buttonViews; // @synthesize buttonViews=_buttonViews;
@property(retain, nonatomic) _TVImageView *decorationImageGradientView; // @synthesize decorationImageGradientView=_decorationImageGradientView;
@property(retain, nonatomic) _TVImageView *decorationImageView; // @synthesize decorationImageView=_decorationImageView;
@property(retain, nonatomic) _TVImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) VUILabel *episodeInfoView; // @synthesize episodeInfoView=_episodeInfoView;
@property(retain, nonatomic) VUILabel *subTextView; // @synthesize subTextView=_subTextView;
@property(retain, nonatomic) VUILabel *logoTextView; // @synthesize logoTextView=_logoTextView;
@property(retain, nonatomic) _TVImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) VUIProductBannerLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
- (CGSize)_iOS_layoutButtonViewsWithWidth:(double)arg1 origin:(CGPoint)arg2 isVerticalLayout:(BOOL)arg3 computationOnly:(BOOL)arg4;
- (CGSize)_iOS_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)setSemanticContentAttribute:(long long)arg1;
@property(readonly, nonatomic) double topThreshold;
- (id)initWithFrame:(CGRect)arg1;

@end


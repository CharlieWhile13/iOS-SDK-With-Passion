//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, SKUILinkButton, SKUIRoundedRectButton, UIButton, UIControl, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsView : UIView
{
    UILabel *_accountCreditsLabel;
    SKUIRoundedRectButton *_appleIDButton;
    SKUIClientContext *_clientContext;
    SKUILinkButton *_ecommerceButton;
    SKUIRoundedRectButton *_giftingButton;
    UIButton *_termsAndConditionsButton;
    SKUIRoundedRectButton *_usernameButton;
    BOOL _ecommerceVisibilityHidden;
    BOOL _giftingVisibilityHidden;
    UIButton *_redeemButton;
}

@property(readonly, nonatomic) UIButton *termsAndConditionsButton; // @synthesize termsAndConditionsButton=_termsAndConditionsButton;
@property(readonly, nonatomic) UIButton *redeemButton; // @synthesize redeemButton=_redeemButton;
@property(readonly, nonatomic) UIButton *giftingButton; // @synthesize giftingButton=_giftingButton;
@property(readonly, nonatomic) UIControl *ECommerceButton; // @synthesize ECommerceButton=_ecommerceButton;
@property(readonly, nonatomic) UIButton *appleIDButton; // @synthesize appleIDButton=_appleIDButton;
// - (void).cxx_destruct;
- (void)_reloadFonts;
- (id)_newLinkButtonWithTitle:(id)arg1;
- (void)_layoutTwoRows;
- (void)_layoutOneRow;
- (void)tintColorDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isTermsAndConditionsHidden) BOOL termsAndConditionsHidden;
@property(nonatomic, getter=isGiftingHidden) BOOL giftingHidden;
@property(copy, nonatomic) NSString *accountCredits;
- (BOOL)isRedeemHidden;
- (BOOL)isEcommerceHidden;
@property(copy, nonatomic) NSString *ECommerceLinkTitle;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

@end


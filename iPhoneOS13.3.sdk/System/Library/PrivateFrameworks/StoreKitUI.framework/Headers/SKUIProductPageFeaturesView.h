//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, SKUIClientContext, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageFeaturesView : UIView
{
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    long long _features;
    NSMutableArray *_featureViews;
    NSUInteger _gameCenterFeatures;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property(nonatomic) NSUInteger gameCenterFeatures; // @synthesize gameCenterFeatures=_gameCenterFeatures;
@property(nonatomic) long long features; // @synthesize features=_features;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
// - (void).cxx_destruct;
- (id)_gameCenterStringWithFeatures:(NSUInteger)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setFeatures:(long long)arg1 gameCenterFeatures:(NSUInteger)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end


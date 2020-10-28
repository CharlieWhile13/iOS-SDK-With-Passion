//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUGridCellProtocol-Protocol.h>

@class HFItem, HUGridCellBackgroundView, HUGridCellLayoutOptions, UIView, UIVisualEffect, UIVisualEffectView;

@interface HUGridCell : UICollectionViewCell <HUGridCellProtocol>
{
    BOOL _cellContentsHidden;
    BOOL _rearranging;
    HUGridCellLayoutOptions *_layoutOptions;
    long long _primaryState;
    UIVisualEffect *_contentEffect;
    UIVisualEffect *_secondaryContentEffect;
    double _secondaryContentDimmingFactor;
    HUGridCellBackgroundView *_gridBackgroundView;
    HFItem *_item;
    UIVisualEffectView *_gridForegroundView;
}

+ (id)_jitterTransformAnimationWithAspectRatio:(double)arg1;
+ (id)_jitterPositionAnimation;
+ (Class)layoutOptionsClass;
@property(retain, nonatomic) UIVisualEffectView *gridForegroundView; // @synthesize gridForegroundView=_gridForegroundView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(retain, nonatomic) HUGridCellBackgroundView *gridBackgroundView; // @synthesize gridBackgroundView=_gridBackgroundView;
@property(nonatomic) double secondaryContentDimmingFactor; // @synthesize secondaryContentDimmingFactor=_secondaryContentDimmingFactor;
@property(retain, nonatomic) UIVisualEffect *secondaryContentEffect; // @synthesize secondaryContentEffect=_secondaryContentEffect;
@property(retain, nonatomic) UIVisualEffect *contentEffect; // @synthesize contentEffect=_contentEffect;
@property(nonatomic) long long primaryState; // @synthesize primaryState=_primaryState;
@property(nonatomic, getter=isRearranging) BOOL rearranging; // @synthesize rearranging=_rearranging;
@property(retain, nonatomic) HUGridCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // @synthesize cellContentsHidden=_cellContentsHidden;
// - (void).cxx_destruct;
- (void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(NSUInteger)arg2;
- (void)updateUIWithAnimation:(BOOL)arg1;
@property(readonly, nonatomic) NSUInteger iconDisplayStyle;
- (void)_updateForegroundStyle;
- (void)layoutOptionsDidChange;
- (void)setHighlighted:(BOOL)arg1;
- (void)displayStyleDidChange;
@property(readonly, nonatomic) UIView *gridForegroundContentView;
@property(readonly, nonatomic) NSUInteger backgroundState;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupCommonCellAppearance;
- (void)applyLayoutAttributes:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


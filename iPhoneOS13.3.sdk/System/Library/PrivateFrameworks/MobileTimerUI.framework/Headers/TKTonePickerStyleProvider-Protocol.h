//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIFont, UIView;

@protocol TKTonePickerStyleProvider <NSObject>
@property(readonly, nonatomic) UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) UIOffset tonePickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property(readonly, nonatomic) BOOL wantsCustomTonePickerHeaderView;
@property(readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property(readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property(readonly, nonatomic) long long tonePickerTableViewSeparatorStyle;
@property(readonly, nonatomic) BOOL tonePickerUsesOpaqueBackground;
- (UIView *)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (UIView *)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1;

@optional
@property(readonly, nonatomic) BOOL tonePickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *tonePickerCustomTableSeparatorColor;
@end

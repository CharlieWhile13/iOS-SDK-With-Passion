//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIFont, UIView;

@protocol TKVibrationPickerStyleProvider <NSObject>
@property(readonly, nonatomic) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) UIOffset vibrationPickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property(readonly, nonatomic) BOOL wantsCustomVibrationPickerHeaderView;
@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property(readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;
@property(readonly, nonatomic) BOOL vibrationPickerUsesOpaqueBackground;
- (UIView *)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (UIView *)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;

@optional
@property(readonly, nonatomic) BOOL vibrationPickerHeaderTextShouldBeUppercase;
@property(readonly, nonatomic) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;
@property(readonly, nonatomic) UIColor *vibrationPickerCustomBackgroundColor;
@end


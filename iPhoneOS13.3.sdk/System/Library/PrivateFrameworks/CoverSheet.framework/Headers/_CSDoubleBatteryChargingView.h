//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSBatteryChargingView.h>

@class CSBatteryFillView, SBUILegibilityLabel, UIImageView, UIView, _UIBackdropView;

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView
{
    UIView *_batteryContainerView;
    UIView *_internalBatteryContainerView;
    UIView *_externalBatteryContainerView;
    _UIBackdropView *_internalBatteryBlurView;
    _UIBackdropView *_externalBatteryBlurView;
    CSBatteryFillView *_internalBatteryFillView;
    CSBatteryFillView *_externalBatteryFillView;
    SBUILegibilityLabel *_internalChargePercentLabel;
    SBUILegibilityLabel *_externalChargePercentLabel;
    SBUILegibilityLabel *_internalChargingNameLabel;
    SBUILegibilityLabel *_externalChargingNameLabel;
    UIImageView *_internalChargingIndicator;
    UIImageView *_externalChargingIndicator;
}

// - (void).cxx_destruct;
- (id)_chargePercentFont;
- (double)_deviceChargeBaselineOffset;
- (double)_deviceNameBaselineOffset;
- (double)_chargingBoltTopOffset;
- (double)_batteryTopPadding;
- (double)_spaceBetweenBatteryImages;
- (void)layoutSubviews;
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setLegibilitySettings:(id)arg1;
- (double)desiredVisibilityDuration;
- (long long)batteryCount;
- (void)setBatteryVisible:(BOOL)arg1;
- (BOOL)batteryVisible;
- (id)initWithFrame:(CGRect)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface _CSSingleBatteryChargingView : CSBatteryChargingView {
    _UIBackdropView * _batteryBlurView;
    NSArray * _batteryConstraints;
    UIView * _batteryContainerView;
    CSBatteryFillView * _batteryFillView;
    UIImage * _batteryImage;
    NSLayoutConstraint * _batteryTopOffset;
    SBUILegibilityLabel * _chargePercentLabel;
}

- (void).cxx_destruct;
- (double)_batteryNoseOffset;
- (id)_chargePercentFont;
- (void)_layoutBattery;
- (void)_layoutChargePercentLabel;
- (long long)batteryCount;
- (bool)batteryVisible;
- (double)desiredVisibilityDuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBatteryVisible:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;

@end
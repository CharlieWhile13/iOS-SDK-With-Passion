//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumberFormatter, UILabel, _UIBatteryView;

@interface HACCBatteryView : UIView
{
    UILabel *_sideLabel;
    UILabel *_valueLabel;
    _UIBatteryView *_batteryView;
    NSNumberFormatter *_numberFormatter;
}

// - (void).cxx_destruct;
- (void)setValue:(double)arg1 forEar:(int)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end


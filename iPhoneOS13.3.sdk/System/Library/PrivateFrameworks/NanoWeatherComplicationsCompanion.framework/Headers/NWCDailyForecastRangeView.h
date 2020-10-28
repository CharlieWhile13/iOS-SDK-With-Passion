//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface NWCDailyForecastRangeView : UIView
{
    UILabel *_highLabel;
    UILabel *_interpunctLabel;
    UILabel *_lowLabel;
}

@property(readonly, nonatomic) UILabel *lowLabel; // @synthesize lowLabel=_lowLabel;
@property(readonly, nonatomic) UILabel *interpunctLabel; // @synthesize interpunctLabel=_interpunctLabel;
@property(readonly, nonatomic) UILabel *highLabel; // @synthesize highLabel=_highLabel;
// - (void).cxx_destruct;
- (id)_rangeLabelWithFontSize:(double)arg1;
- (void)_applyConstraints:(CDStruct_d83abbfb)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end


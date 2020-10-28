//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularSmallRingComplicationView.h>

@class CLKProgressProvider, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (BOOL)supportsComplicationFamily:(long long)arg1;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
// - (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateRingWithProgressProvider:(id)arg1;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;

@end


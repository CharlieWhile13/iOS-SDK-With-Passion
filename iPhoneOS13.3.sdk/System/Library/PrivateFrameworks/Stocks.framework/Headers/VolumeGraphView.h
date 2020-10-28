//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class StockGraphImageSet, TintedView, UIImage;

@interface VolumeGraphView : UIView
{
    BOOL _showingTintedRegion;
    TintedView *_tintedVolumeView;
    UIView *_tintedRegionClipView;
    UIImage *_volumeImage;
    StockGraphImageSet *_graphImageSet;
}

@property(retain, nonatomic) StockGraphImageSet *graphImageSet; // @synthesize graphImageSet=_graphImageSet;
// - (void).cxx_destruct;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (void)setShowingSelectedRegion:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end


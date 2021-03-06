//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, DOCTagDotView;

@interface DOCTagCheckableDotView : UIView
{
    BOOL _checked;
    DOCTagDotView *_tagDotView;
    CAShapeLayer *_borderLayer;
}

@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) DOCTagDotView *tagDotView; // @synthesize tagDotView=_tagDotView;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
// - (void).cxx_destruct;
- (void)updateLayoutOfLayers;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long tagColor;
- (id)initWithFrame:(CGRect)arg1;

@end


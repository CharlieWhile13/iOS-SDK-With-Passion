//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/_CRKHitTestPassThroughView.h>

@class NSString, UIColor, UILabel;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView
{
    UILabel *_label;
    UIColor *_color;
    NSString *_debugText;
}

@property(copy, nonatomic) NSString *debugText; // @synthesize debugText=_debugText;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end


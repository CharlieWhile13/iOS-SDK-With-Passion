//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol EQKitLayout;

__attribute__((visibility("hidden")))
@interface EQKitiOSEquationView : UIView
{
    id <EQKitLayout> _equationLayout;
    double _viewScale;
    double _padding;
    CGPoint _offset;
}

@property(nonatomic) CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(retain, nonatomic) id <EQKitLayout> equationLayout; // @synthesize equationLayout=_equationLayout;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)drawRect:(CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end


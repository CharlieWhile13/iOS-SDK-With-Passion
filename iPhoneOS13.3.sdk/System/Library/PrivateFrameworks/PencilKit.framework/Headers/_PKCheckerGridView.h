//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface _PKCheckerGridView : UIView
{
    double _gridSize;
    UIColor *_colorA;
    UIColor *_colorB;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *colorB; // @synthesize colorB=_colorB;
@property(retain, nonatomic) UIColor *colorA; // @synthesize colorA=_colorA;
@property(nonatomic) double gridSize; // @synthesize gridSize=_gridSize;
// - (void).cxx_destruct;
- (id)gridTileImage;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end


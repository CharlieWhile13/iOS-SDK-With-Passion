//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface STStorageProgressView : UIView
{
    UIColor *_grayColor;
    UIColor *_blueColor;
    double _percent;
}

@property(nonatomic) double percent; // @synthesize percent=_percent;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateColors;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UISegmentedControl;

@interface PKPaletteErasingAttributesView : UIView
{
    UISegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
@property(nonatomic) long long eraserType;
- (BOOL)_canShowWhileLocked;
- (id)initWithFrame:(CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TKKeyPathObserver, UIScrollView;

@interface MCLContentSizingView : UIView
{
    TKKeyPathObserver *_observer;
    UIScrollView *_contentView;
}

@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;

@end


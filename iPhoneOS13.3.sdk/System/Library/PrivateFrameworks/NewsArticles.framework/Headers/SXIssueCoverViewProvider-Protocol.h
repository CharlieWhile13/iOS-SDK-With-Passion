//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXIssueCover, SXIssueCoverPresentationOptions, UIView;

@protocol SXIssueCoverViewProvider <NSObject>
- (void)presentIssueCover:(SXIssueCover *)arg1 onView:(UIView *)arg2 options:(SXIssueCoverPresentationOptions *)arg3;
- (UIView *)viewForIssueCover:(SXIssueCover *)arg1;
@end


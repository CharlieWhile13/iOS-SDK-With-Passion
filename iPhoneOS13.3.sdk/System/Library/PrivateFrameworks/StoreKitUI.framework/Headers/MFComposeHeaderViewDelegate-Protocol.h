//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MFComposeHeaderView;

@protocol MFComposeHeaderViewDelegate <NSObject>

@optional
- (void)composeHeaderView:(MFComposeHeaderView *)arg1 didChangeSize:(CGSize)arg2;
- (void)composeHeaderViewClicked:(MFComposeHeaderView *)arg1;
- (void)composeHeaderViewDidConfirmValue:(MFComposeHeaderView *)arg1;
- (void)composeHeaderViewDidChangeValue:(MFComposeHeaderView *)arg1;
@end


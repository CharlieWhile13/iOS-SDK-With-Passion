//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;

@interface HRContentStatusView : UIView
{
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *spinnerView;
    MISSING_TYPE *title;
    MISSING_TYPE *subtitle;
}

// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
@property(nonatomic, copy) NSString *subtitle;
@property(nonatomic, copy) NSString *title;

@end

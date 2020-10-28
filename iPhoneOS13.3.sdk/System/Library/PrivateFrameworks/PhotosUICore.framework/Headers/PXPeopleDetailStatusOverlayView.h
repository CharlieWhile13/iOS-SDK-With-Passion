//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, UILabel;

@interface PXPeopleDetailStatusOverlayView : UIView
{
    UIImageView *_keyAssetImageView;
    UILabel *_messageField;
    UILabel *_subtitleField;
    NSArray *_viewConstraints;
}

@property(copy, nonatomic) NSArray *viewConstraints; // @synthesize viewConstraints=_viewConstraints;
@property(readonly, nonatomic) UILabel *subtitleField; // @synthesize subtitleField=_subtitleField;
@property(readonly, nonatomic) UILabel *messageField; // @synthesize messageField=_messageField;
@property(readonly, nonatomic) UIImageView *keyAssetImageView; // @synthesize keyAssetImageView=_keyAssetImageView;
// - (void).cxx_destruct;
- (double)_imageHeightMultiplier;
- (void)updateConstraints;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1 keyImage:(id)arg2 message:(id)arg3 subtitleText:(id)arg4;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIImageView, UIView;

@interface GKDashboardMultiplayerPickerPlayWithFriendsReusableFooterView : UICollectionReusableView
{
    id /* CDUnknownBlockType */ _manageInSettingsHandler;
    UIView *_backgroundView;
    UIButton *_manageInSettingsButton;
    UIImageView *_chevronLeftImage;
    UIImageView *_chevronRightImage;
}

@property(retain, nonatomic) UIImageView *chevronRightImage; // @synthesize chevronRightImage=_chevronRightImage;
@property(retain, nonatomic) UIImageView *chevronLeftImage; // @synthesize chevronLeftImage=_chevronLeftImage;
@property(retain, nonatomic) UIButton *manageInSettingsButton; // @synthesize manageInSettingsButton=_manageInSettingsButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ manageInSettingsHandler; // @synthesize manageInSettingsHandler=_manageInSettingsHandler;
// - (void).cxx_destruct;
- (void)manageInSettingsTapped:(id)arg1;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MediaControlsContainerView, MediaControlsSeparatorView, MediaControlsTimeControl, MediaControlsTransportStackView;

__attribute__((visibility("hidden")))
@interface MediaControlsParentContainerView : UIView
{
    long long _style;
    long long _selectedMode;
    MediaControlsContainerView *_containerView;
    UIView *_routingView;
    MediaControlsSeparatorView *_topDividerView;
    MediaControlsSeparatorView *_bottomDividerView;
    UIView *_mediaControlsRoutingPickerView;
    long long _routingViewControllerAnimationCount;
}

@property(nonatomic) long long routingViewControllerAnimationCount; // @synthesize routingViewControllerAnimationCount=_routingViewControllerAnimationCount;
@property(retain, nonatomic) UIView *mediaControlsRoutingPickerView; // @synthesize mediaControlsRoutingPickerView=_mediaControlsRoutingPickerView;
@property(retain, nonatomic) MediaControlsSeparatorView *bottomDividerView; // @synthesize bottomDividerView=_bottomDividerView;
@property(retain, nonatomic) MediaControlsSeparatorView *topDividerView; // @synthesize topDividerView=_topDividerView;
@property(retain, nonatomic) UIView *routingView; // @synthesize routingView=_routingView;
@property(retain, nonatomic) MediaControlsContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)_setInitialFrameForRoutingView:(id)arg1;
- (void)_toggleRoutingPickerAnimated:(BOOL)arg1;
- (void)_updateTimeControlVisibility:(id)arg1;
- (void)_updateRoutingPickerVisibilityAnimated:(BOOL)arg1;
@property(retain, nonatomic) MediaControlsTimeControl *timeControl;
@property(retain, nonatomic) MediaControlsTransportStackView *transportStackView;
- (void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end


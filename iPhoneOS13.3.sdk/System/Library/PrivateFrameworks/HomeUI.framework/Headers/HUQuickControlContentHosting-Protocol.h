//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;
@protocol HUQuickControlAuxiliaryView, HUQuickControlInteractiveContentContaining;

@protocol HUQuickControlContentHosting <NSObject>
- (void)quickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1 requestDismissalOfType:(NSUInteger)arg2;
- (void)quickControlContentDidUpdateDesiredVisbilityState:(id <HUQuickControlInteractiveContentContaining>)arg1;

@optional
- (void)hideAuxiliaryViewForQuickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1;
- (void)quickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIGestureRecognizer;
@protocol HULayoutAnchorProviding, HUQuickControlContentHosting;

@protocol HUQuickControlInteractiveContentContaining <NSObject>
@property(retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(nonatomic) __weak id <HUQuickControlContentHosting> quickControlHost;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(UIGestureRecognizer *)arg1;

@optional
- (BOOL)shouldShowContentForReachabilityState:(BOOL)arg1;
@end


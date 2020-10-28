//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

#import <SpringBoard/SBHomeGestureDockSwitcherModifierDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureFinalDestinationSwitcherModifierDelegate-Protocol.h>

@class SBAppLayout, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBStackedFloatingSwitcherModifier;

@interface SBHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate>
{
    SBStackedFloatingSwitcherModifier *_stackedLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBAppLayout *_selectedAppLayout;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    CGPoint _translation;
    CGPoint _velocity;
    double _rubberbandedYTranslation;
    double _scaleProgress;
    double _multitaskingHintProgress;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
}

// - (void).cxx_destruct;
- (BOOL)wantsMinificationFilter;
- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (long long)sceneDeactivationReason;
- (BOOL)wantsResignActiveAssertion;
- (BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfAppLayoutsToCacheSnapshots;
- (id)topMostAppLayouts;
- (double)shadowOffsetForIndex:(NSUInteger)arg1;
- (double)shadowOpacityForIndex:(NSUInteger)arg1;
- (double)darkeningAlphaForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (UIRectCornerRadii)cardCornerRadiiForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)_actionForActivatingFinalDestination:(long long)arg1;
- (double)unconditionalDistanceThresholdForHome;
- (long long)currentFinalDestination;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 continuingGesture:(BOOL)arg3 lastGestureWasAnArcSwipe:(BOOL)arg4;

@end


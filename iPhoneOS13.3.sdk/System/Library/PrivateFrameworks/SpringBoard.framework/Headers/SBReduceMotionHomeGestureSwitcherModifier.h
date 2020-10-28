//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

#import <SpringBoard/SBHomeGestureDockSwitcherModifierDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureFinalDestinationSwitcherModifierDelegate-Protocol.h>

@class SBAppLayout, SBCoplanarSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier;

@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate>
{
    SBCoplanarSwitcherModifier *_coplanarLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    BOOL _scrunchInitiated;
    CGPoint _initialTouchLocation;
    CGPoint _lastTouchLocation;
    CGPoint _translation;
    CGPoint _velocity;
    CGPoint _translationAdjustmentForStartingFromHomeScreen;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    NSUInteger _reduceMotionAxis;
    BOOL _endingGestureForAppSwitcher;
    BOOL _didWarmupReduceMotionHaptic;
}

// - (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)arg1;
- (BOOL)shouldRubberbandHomeGrabberView;
- (BOOL)wantsMinificationFilter;
- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (long long)sceneDeactivationReason;
- (BOOL)wantsResignActiveAssertion;
- (NSRange)fullSizeSnapshotsRange;
- (NSUInteger)numberOfAppLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (UIRectCornerRadii)cardCornerRadiiForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)_actionForActivatingFinalDestination:(long long)arg1;
- (double)unconditionalDistanceThresholdForHome;
- (long long)currentFinalDestination;
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 continuingGesture:(BOOL)arg4 lastGestureWasAnArcSwipe:(BOOL)arg5;

@end


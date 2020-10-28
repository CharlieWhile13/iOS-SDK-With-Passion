//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_nonGestureInitiatedZoomModifier;
    long long _startingEnvironmentMode;
    CGPoint _liftOffVelocity;
}

// - (void).cxx_destruct;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;
- (id)scaleSettingsForIndex:(NSUInteger)arg1;
- (id)positionSettingsForIndex:(NSUInteger)arg1;
- (id)layoutSettings;
- (NSRange)fullSizeSnapshotsRange;
- (NSUInteger)numberOfAppLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (id)handleEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 nonGestureInitiatedZoomModifier:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 liftOffVelocity:(CGPoint)arg5;

@end


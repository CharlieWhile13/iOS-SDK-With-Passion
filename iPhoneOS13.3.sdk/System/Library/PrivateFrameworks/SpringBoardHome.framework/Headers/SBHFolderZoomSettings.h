//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHFolderZoomSettings : SBHScaleZoomSettings
{
    SBFAnimationSettings *_innerFolderFadeSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBFAnimationSettings *innerFolderFadeSettings; // @synthesize innerFolderFadeSettings=_innerFolderFadeSettings;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end


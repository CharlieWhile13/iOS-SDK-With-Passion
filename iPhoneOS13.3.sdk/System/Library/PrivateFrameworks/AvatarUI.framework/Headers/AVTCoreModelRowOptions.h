//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarPose, AVTCoreModelFramingModeOverrides, AVTCoreModelRowDisplayCondition, NSArray, NSString;

@interface AVTCoreModelRowOptions : NSObject
{
    BOOL _separator;
    NSString *_framingMode;
    NSArray *_presetOverrides;
    AVTCoreModelFramingModeOverrides *_framingModeOverrides;
    AVTAvatarPose *_poseOverride;
    AVTCoreModelRowDisplayCondition *_displayCondition;
    NSUInteger _displayMode;
}

+ (NSUInteger)displayModeFromString:(id)arg1;
@property(readonly, nonatomic) NSUInteger displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) AVTCoreModelRowDisplayCondition *displayCondition; // @synthesize displayCondition=_displayCondition;
@property(readonly, copy, nonatomic) AVTAvatarPose *poseOverride; // @synthesize poseOverride=_poseOverride;
@property(readonly, nonatomic) AVTCoreModelFramingModeOverrides *framingModeOverrides; // @synthesize framingModeOverrides=_framingModeOverrides;
@property(readonly, copy, nonatomic) NSArray *presetOverrides; // @synthesize presetOverrides=_presetOverrides;
@property(readonly, nonatomic) BOOL separator; // @synthesize separator=_separator;
@property(readonly, copy, nonatomic) NSString *framingMode; // @synthesize framingMode=_framingMode;
// - (void).cxx_destruct;
- (id)initWithFramingMode:(id)arg1 separatorFlag:(BOOL)arg2 presetOverrides:(id)arg3 poseOverride:(id)arg4 framingModeOverrides:(id)arg5 displayMode:(NSUInteger)arg6 displayCondition:(id)arg7;

@end

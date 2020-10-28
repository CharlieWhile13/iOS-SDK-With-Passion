//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SBHFloatingDockStyleConfiguration : NSObject <NSCopying>
{
    BOOL _wantsPlatterShadow;
    NSUInteger _backgroundEffect;
    NSUInteger _platterEffect;
    NSUInteger _folderIconBackgroundStyle;
}

+ (id)defaultConfiguration;
@property(readonly, nonatomic) BOOL wantsPlatterShadow; // @synthesize wantsPlatterShadow=_wantsPlatterShadow;
@property(readonly, nonatomic) NSUInteger folderIconBackgroundStyle; // @synthesize folderIconBackgroundStyle=_folderIconBackgroundStyle;
- (id)description;
- (id)configurationWithWantsPlatterShadow:(BOOL)arg1;
@property(readonly, nonatomic) NSUInteger platterEffect; // @synthesize platterEffect=_platterEffect;
@property(readonly, nonatomic) NSUInteger backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBackgroundEffect:(NSUInteger)arg1 platterEffect:(NSUInteger)arg2 wantsPlatterShadow:(BOOL)arg3 folderIconBackgroundStyle:(NSUInteger)arg4;
- (id)init;

@end


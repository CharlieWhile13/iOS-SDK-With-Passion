//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/SBFWallpaperDataStore-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBFWallpaperMemoryDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding>
{
    NSMutableDictionary *_images;
    NSMutableDictionary *_originalImages;
    NSMutableDictionary *_thumbnails;
    NSMutableDictionary *_hashes;
    NSMutableDictionary *_proceduralInfo;
    NSMutableDictionary *_videoURLs;
    NSMutableDictionary *_originalVideoURLs;
    NSMutableDictionary *_wallpaperOptions;
    NSMutableDictionary *_colors;
    NSMutableDictionary *_colorNames;
    NSMutableDictionary *_gradients;
}

// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removeWallpaperGradientForVariants:(long long)arg1;
- (BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
- (id)wallpaperGradientForVariant:(long long)arg1;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
- (BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
- (id)wallpaperColorNameForVariant:(long long)arg1;
- (id)wallpaperColorForVariant:(long long)arg1;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (BOOL)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)removeWallpaperImageHashDataForVariants:(long long)arg1;
- (id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)removeWallpaperImageDataTypes:(NSUInteger)arg1 forVariants:(long long)arg2;
- (void)moveWallpaperImageDataTypes:(NSUInteger)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (BOOL)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
@property(readonly, nonatomic) NSUInteger numberOfStoredImages;
- (id)init;

@end


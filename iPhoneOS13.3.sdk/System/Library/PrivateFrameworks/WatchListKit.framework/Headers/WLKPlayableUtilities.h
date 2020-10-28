//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WLKPlayableUtilities : NSObject
{
}

+ (BOOL)_openPunchoutURL:(id)arg1 isPlaybackURL:(BOOL)arg2;
+ (id)_defaultPunchoutURLWithPlayable:(id)arg1 isPlaybackURL:(BOOL )arg2;
+ (id)_defaultPunchoutURLWithPlayable:(id)arg1 URLKey:(id)arg2;
+ (id)_defaultPlayPunchoutURLWithPlayable:(id)arg1;
+ (id)_defaultOpenPunchoutURLWithPlayable:(id)arg1;
+ (BOOL)_playNonITunesPlayableUsingAssociatedApp:(id)arg1;
+ (id)_punchoutURLForDirectPlayback:(id)arg1 ignoreExtras:(BOOL)arg2;
+ (id)_watchListAppPunchoutURLWithPlayable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 allowPlayAction:(BOOL)arg6 isPlaybackURL:(BOOL )arg7;
+ (id)_watchListAppOpenPunchoutURLWithITunesPlayable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (BOOL)_openNonITunesPlayableWatchListAppUnavailable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (BOOL)_openITunesPlayableWatchListAppUnavailable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (BOOL)_openNonITunesPlayableWatchListAppAvailable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (BOOL)_openITunesPlayableWatchListAppAvailable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (BOOL)openPlayable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (BOOL)openPlayable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4;
+ (BOOL)openPlayable:(id)arg1 forContentType:(NSUInteger)arg2 canonicalID:(id)arg3;

@end


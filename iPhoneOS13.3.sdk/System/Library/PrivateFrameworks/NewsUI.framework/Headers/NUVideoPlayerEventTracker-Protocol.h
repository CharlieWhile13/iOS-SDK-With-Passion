//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NUVideoAdEventTracker-Protocol.h>
#import <NewsUI/NUVideoEventTracker-Protocol.h>

@protocol NUVideoPlayerEventTracker <NUVideoEventTracker, NUVideoAdEventTracker>

@optional
- (void)videoPlayerDidBecomeInvisible;
- (void)videoPlayerDidBecomeVisible;
@end


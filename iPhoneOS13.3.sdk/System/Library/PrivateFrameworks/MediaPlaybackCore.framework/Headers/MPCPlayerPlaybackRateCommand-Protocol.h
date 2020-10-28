//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerPlaybackRateCommand <MPCPlayerCommand>
@property(readonly, nonatomic) float preferredPlaybackRate;
@property(readonly, copy, nonatomic) NSArray *supportedPlaybackRates;
- (MPCPlayerCommandRequest *)setPlaybackRate:(float)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class LPStreamingAudioPlayer;

@protocol LPStreamingAudioPlayerClient
- (void)streamingAudioPlayerDidFailToPlay:(LPStreamingAudioPlayer *)arg1;
- (void)streamingAudioPlayer:(LPStreamingAudioPlayer *)arg1 didChangeProgress:(float)arg2;
- (void)streamingAudioPlayer:(LPStreamingAudioPlayer *)arg1 didTransitionToState:(NSUInteger)arg2;
@end


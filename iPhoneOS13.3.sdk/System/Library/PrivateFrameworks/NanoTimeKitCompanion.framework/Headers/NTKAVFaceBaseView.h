//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>

#import <NanoTimeKitCompanion/CLKVideoPlayerViewDelegate-Protocol.h>

@class CLKVideoPlayerView, UIImageView;

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <CLKVideoPlayerViewDelegate>
{
    UIImageView *_posterImageView;
    CLKVideoPlayerView *_videoPlayerView;
}

@property(retain, nonatomic) CLKVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
// - (void).cxx_destruct;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (id)_posterImageView;
- (void)_reset;
- (void)_createVideoPlayerViewIfNeeded;
- (void)pauseVideoPlayerViewIfItExists;
- (void)layoutSubviews;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_beginTransitionToOption;
- (void)_prepareForEditing;
- (void)_transitionToPosterView:(id)arg1;
- (id)_selectedContentView;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)dealloc;

@end


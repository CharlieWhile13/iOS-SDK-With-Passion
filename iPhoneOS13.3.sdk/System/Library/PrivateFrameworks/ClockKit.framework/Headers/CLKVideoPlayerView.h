//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, AVPlayerItem, AVQueuePlayer, NSURL, NSValue, _CLKPlayerView;
@protocol CLKVideoPlayerViewDelegate;

@interface CLKVideoPlayerView : UIView
{
    _CLKPlayerView *_playerView;
    AVQueuePlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItem *_observedItem;
    AVPlayerItem *_queuedItem;
    NSURL *_assetURL;
    AVAsset *_asset;
    id _periodicTimeObserver;
    CDStruct_1b6d18a9 _willBeginPlayingTime;
    UIView *_pausedView;
    NSUInteger _servicingRequest;
    NSValue *_seekRequested;
    CDStruct_1b6d18a9 _seekWithTolerance;
    unsigned int _playRequested:1;
    unsigned int _prerollRequested:1;
    unsigned int _isExpectingPreroll:1;
    BOOL _pausedViewEnabled;
    BOOL _playing;
    id <CLKVideoPlayerViewDelegate> _delegate;
    long long _gravityResize;
}

+ (void)_prewarm;
@property(readonly, nonatomic) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) BOOL pausedViewEnabled; // @synthesize pausedViewEnabled=_pausedViewEnabled;
@property(nonatomic) long long gravityResize; // @synthesize gravityResize=_gravityResize;
@property(nonatomic) __weak id <CLKVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)queueVideo:(id)arg1;
- (void)play;
- (void)_play;
- (void)preroll;
- (void)expectPreroll;
- (void)_preroll;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 tolerance:(CDStruct_1b6d18a9)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)_pause;
- (void)loadVideo:(id)arg1;
- (id)_createPlayerItemForVideoURL:(id)arg1;
- (void)_hidePausedView;
- (void)_showPausedView;
- (void)_performNextRequest;
- (BOOL)_readyToPerformRequest;
- (void)resetRequestState;
- (BOOL)isPlaybackReady;
- (void)_periodicTimeObserverChanged:(CDStruct_1b6d18a9)arg1;
- (void)_handleDidPlayToEndTime:(id)arg1;
- (void)prepareNextQueuedVideo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_stopObservingPlayerItem;
- (void)_observePlayerItem:(id)arg1;
@property(readonly, nonatomic) AVQueuePlayer *player;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end


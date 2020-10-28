//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/AVPlayerViewControllerDelegatePrivate-Protocol.h>

@class AVPlayer, AVPlayerController, LPAVPlayerViewController, LPVideoView, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface LPFullScreenVideoController : NSObject <AVPlayerViewControllerDelegatePrivate>
{
    LPVideoView *_sourceView;
    LPAVPlayerViewController *_playerViewController;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    AVPlayer *_player;
}

// - (void).cxx_destruct;
- (BOOL)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)arg1;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)dismiss;
- (void)present;
- (void)setUpFullScreenVideoViewControllerIfNeeded;
- (void)prepareForDisplayWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithPlayer:(id)arg1 sourceView:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBasePlayerUIView.h>

#import <PhotosPlayer/ISChangeObserver-Protocol.h>

@class ISLivePhotoPlayer, ISTouchLivePhotoPlaybackFilter, UIGestureRecognizer, UIImpactFeedbackGenerator, UILabel;

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIGestureRecognizerDelegate, ISChangeObserver>
{
    UIImpactFeedbackGenerator *_feedbackGenerator;
    BOOL __playingVitality;
    UIGestureRecognizer *_playbackGestureRecognizer;
    ISTouchLivePhotoPlaybackFilter *__playbackFilter;
    UILabel *__overlayLabel;
    long long __overlayDismissalID;
}

@property(nonatomic, setter=_setOverlayDismissalID:) long long _overlayDismissalID; // @synthesize _overlayDismissalID=__overlayDismissalID;
@property(readonly, nonatomic) UILabel *_overlayLabel; // @synthesize _overlayLabel=__overlayLabel;
@property(nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality; // @synthesize _playingVitality=__playingVitality;
@property(retain, nonatomic, setter=_setPlaybackFilter:) ISTouchLivePhotoPlaybackFilter *_playbackFilter; // @synthesize _playbackFilter=__playbackFilter;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateGestureRecognizerParameters;
- (void)_playerDidChangeHinting;
- (void)_playerDidChangePlaybackStyle;
- (void)_dismissOverlayLabel:(long long)arg1;
- (void)_showOverlayLabel;
- (void)_updatePlaybackFilter;
- (void)contentDidChange;
- (void)audioSessionDidChange;
- (void)_updatePlaybackFilterInput;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (void)_ISLivePhotoUIViewCommonInitialization;
- (id)livePhotoPlayer;
@property(retain, nonatomic) ISLivePhotoPlayer *player; // @dynamic player;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end


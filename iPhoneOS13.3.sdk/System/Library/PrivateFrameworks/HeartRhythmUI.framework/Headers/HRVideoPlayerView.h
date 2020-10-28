//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLooper, AVQueuePlayer, NSArray, UIImage, UIImageView;
@protocol NSObject;

@interface HRVideoPlayerView : UIView
{
    BOOL _looping;
    BOOL _shouldBePlaying;
    NSArray *_items;
    UIImage *_thumbnail;
    UIImageView *_thumbnailImageView;
    AVQueuePlayer *_queuePlayer;
    AVPlayerLooper *_playerLooper;
    id <NSObject> _applicationActiveNotificationStub;
    id <NSObject> _applicationInactiveNotificationStub;
}

+ (Class)layerClass;
+ (id)playerViewWithURL:(id)arg1 looping:(BOOL)arg2;
@property(retain, nonatomic) id <NSObject> applicationInactiveNotificationStub; // @synthesize applicationInactiveNotificationStub=_applicationInactiveNotificationStub;
@property(retain, nonatomic) id <NSObject> applicationActiveNotificationStub; // @synthesize applicationActiveNotificationStub=_applicationActiveNotificationStub;
@property(nonatomic) BOOL shouldBePlaying; // @synthesize shouldBePlaying=_shouldBePlaying;
@property(nonatomic) BOOL looping; // @synthesize looping=_looping;
@property(retain, nonatomic) AVPlayerLooper *playerLooper; // @synthesize playerLooper=_playerLooper;
@property(retain, nonatomic) AVQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (void)_setUpNotifications;
- (void)_setUpUI;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)pause;
- (void)play;
@property(nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
- (void)dealloc;
- (id)initWithItems:(id)arg1 thumbnail:(id)arg2 looping:(BOOL)arg3;

@end


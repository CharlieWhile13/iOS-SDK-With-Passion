//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMAudioSessionController : NSObject
{
    BOOL _active;
    BOOL _dirty;
    NSUInteger _options;
}

+ (id)queue;
+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
@property NSUInteger options; // @synthesize options=_options;
@property(getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property(getter=isActive) BOOL active; // @synthesize active=_active;
- (void)configureAudioSessionWithOptions:(NSUInteger)arg1;
- (void)setActive:(BOOL)arg1 options:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(readonly) BOOL shouldDuckOthers;
@property(readonly) BOOL shouldStopPlayingWhenSilent;
@property(readonly) BOOL shouldUseSpeaker;
- (void)deactivate;
- (void)activateWithOptions:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;

@end


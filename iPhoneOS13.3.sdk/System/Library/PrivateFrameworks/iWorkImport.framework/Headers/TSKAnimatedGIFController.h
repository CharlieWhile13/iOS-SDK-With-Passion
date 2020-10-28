//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSKLayerMediaPlayerController-Protocol.h>

@class NSArray, NSMutableSet;
@protocol TSKMediaPlayerControllerDelegate;

__attribute__((visibility("hidden")))
@interface TSKAnimatedGIFController : NSObject <TSKLayerMediaPlayerController>
{
    id <TSKMediaPlayerControllerDelegate> mDelegate;
    CGImageSource mSource;
    NSArray *mFrames;
    NSMutableSet *mLayers;
    BOOL mPlaying;
    double mLastDisplayUpdateTime;
    double mAbsoluteCurrentTime;
    float mRate;
    float mRateBeforeScrubbing;
    NSUInteger mScrubbingCount;
    double mStartTime;
    double mEndTime;
    float mVolume;
    long long mRepeatMode;
    NSMutableSet *mObservationTokens;
    BOOL fastReversing;
    BOOL fastForwarding;
}

- (void)setFastForwarding:(BOOL)arg1;
- (BOOL)isFastForwarding;
- (void)setFastReversing:(BOOL)arg1;
- (BOOL)isFastReversing;
- (long long)repeatMode;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
@property(nonatomic) double lastDisplayUpdateTime; // @synthesize lastDisplayUpdateTime=mLastDisplayUpdateTime;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)delegate;
- (void)setRate:(float)arg1;
- (float)rate;
// - (void).cxx_destruct;
- (void)p_updateLayers;
- (void)p_prepareFrameTimes;
@property(readonly, nonatomic) CGImage imageForCurrentTime;
- (id)newLayer;
- (void)removeLayer:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)removeObservationToken:(id)arg1;
- (void)addObservationToken:(id)arg1;
- (void)removePeriodicTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (CGImage )imageForTime:(double)arg1;
- (void)seekToEnd;
- (void)seekToBeginning;
- (void)seekForwardByOneFrame;
- (void)seekBackwardByOneFrame;
- (BOOL)canFastForward;
- (BOOL)canFastReverse;
- (void)endScrubbing;
- (void)cancelPendingSeeks;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (BOOL)isScrubbing;
- (void)beginScrubbing;
- (void)setRepeatMode:(long long)arg1;
- (double)endTime;
- (double)duration;
- (double)absoluteDuration;
- (double)remainingTime;
- (double)absoluteCurrentTime;
- (void)p_setAbsoluteCurrentTime:(double)arg1;
- (double)currentTime;
- (void)stopSynchronously;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (BOOL)canPlay;
- (void)teardown;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (id)initWithImageSource:(CGImageSource )arg1 delegate:(id)arg2;

@end


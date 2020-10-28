//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoKit/NUMediaPlayer-Protocol.h>

@class AVComposition, NSArray, NUAVPlayerController, NUCoalescer, NUColorSpace, NUComposition, NULivePhotoRenderClient, NUMediaView, NUObservatory, NUPixelFormat, NUResponse, NUSurfaceRenderClient, NUVideoRenderClient, UIView;
@protocol NURenderStatistics, OS_dispatch_group, OS_dispatch_queue;

@interface NUMediaViewRenderer : NSObject <NUMediaPlayer>
{
    NUSurfaceRenderClient *_zoomClient;
    NUSurfaceRenderClient *_backfillClient;
    NULivePhotoRenderClient *_livePhotoClient;
    NUVideoRenderClient *_videoClient;
    UIView *_livePhotoView;
    NUCoalescer *_livePhotoUpdateCoalescer;
    NUCoalescer *_videoUpdateCoalescer;
    NUObservatory *_observatory;
    BOOL _canRenderLoopingVideoLive;
    long long _playbackMode;
    BOOL _muted;
    BOOL _didReleaseAVObjects;
    _Atomic int _videoRenderInFlightCount;
    NSObject<OS_dispatch_group> *_renderGroup;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NUResponse *_zoomRenderResponse;
    NUResponse *_backfillRenderResponse;
    CGRect _lastZoomRect;
    double _lastZoomScale;
    double _lastZoomRenderTime;
    id <NURenderStatistics> _lastZoomRenderStatistics;
    id <NURenderStatistics> _lastBackfillRenderStatictics;
    BOOL _isPanning;
    BOOL _isZooming;
    BOOL __videoEnabled;
    NUComposition *_composition;
    NUColorSpace *_colorSpace;
    NUPixelFormat *_pixelFormat;
    NUMediaView *_mediaView;
    double _backingScale;
    NSArray *_pipelineFilters;
    double _maximumZoomScale;
    NUAVPlayerController *_nuAVPlayerController;
    NSUInteger _displayType;
    NSUInteger _computedDisplayType;
    AVComposition *_previousVideo;
    NSArray *_previousPipelineFilters;
}

+ (BOOL)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4 isPlaying:(BOOL)arg5;
@property(readonly, copy, nonatomic) NSArray *previousPipelineFilters; // @synthesize previousPipelineFilters=_previousPipelineFilters;
@property(retain, nonatomic) AVComposition *previousVideo; // @synthesize previousVideo=_previousVideo;
@property(nonatomic, getter=_isVideoEnabled, setter=_setVideoEnabled:) BOOL _videoEnabled; // @synthesize _videoEnabled=__videoEnabled;
@property(readonly, nonatomic) NSUInteger computedDisplayType; // @synthesize computedDisplayType=_computedDisplayType;
@property(nonatomic) NSUInteger displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NUAVPlayerController *nuAVPlayerController; // @synthesize nuAVPlayerController=_nuAVPlayerController;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(copy, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(readonly, nonatomic) __weak NUMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(copy, nonatomic) NUComposition *composition; // @synthesize composition=_composition;
// - (void).cxx_destruct;
- (void)livePhotoViewDidEndScrubbing:(id)arg1;
- (void)livePhotoViewDidBeginScrubbing:(id)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)_notifyPlaybackTimeChange:(CDStruct_198678f7)arg1;
- (id)addPlaybackTimeObserver:(id /* CDUnknownBlockType */)arg1;
- (void)_notifyPlaybackStateChange:(long long)arg1;
- (id)addPlaybackStateObserver:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic, getter=isMuted) BOOL muted;
@property(nonatomic) long long playbackMode;
@property(nonatomic) double playbackRate;
- (void)pause;
- (void)play;
- (void)stepByCount:(long long)arg1;
- (void)seekToTime:(CDStruct_198678f7)arg1 exact:(BOOL)arg2;
- (void)seekToTime:(CDStruct_198678f7)arg1;
@property(readonly, nonatomic) CDStruct_198678f7 currentTime;
- (long long)_playbackStateFromPlayerStatus:(long long)arg1 rate:(float)arg2;
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) CDStruct_198678f7 mediaDuration;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
- (void)_addFullExtentConstraintsForView:(id)arg1;
- (id)_backfillRenderRequestForComposition:(id)arg1;
- (double)_lastRenderDuration;
- (CGRect)_zoomTargetRect;
- (double)_targetZoomScale;
- (id)_zoomRenderRequestForComposition:(id)arg1;
- (void)_updateLivePhotoWithResponse:(id)arg1;
- (id)_livePhotoFromResponse:(id)arg1;
- (void)_updateLivePhotoComposition:(id)arg1;
- (void)_coalesceUpdateLivePhotoComposition:(id)arg1;
- (void)_coalesceUpdateVideoComposition:(id)arg1;
- (void)_updateVideoViewLayoutWithGeometry:(id)arg1;
- (void)_updateVideoComposition:(id)arg1;
- (void)_updateVideoWithResult:(id)arg1;
- (id)cacheVideoRenderFilter;
- (void)_tearDownAVPlayerController;
- (void)_playerStatusDidChange:(long long)arg1;
- (void)_setupAVPlayerController;
- (void)_setDisplayType:(NSUInteger)arg1;
- (void)_updateDisplayForMediaType:(long long)arg1;
- (id)renderClient;
- (id)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2;
- (void)_updateBackfillLayerWithRenderResponse:(id)arg1;
- (void)_updateROILayerWithRenderResponse:(id)arg1;
- (void)_updateBackfillLayerWithLatestRenderResponse;
- (void)_updateROILayerWithLatestRenderResponse;
- (id /* CDUnknownBlockType */)_videoFrameImageRenderResponseHandler;
- (id /* CDUnknownBlockType */)_backfillRenderResponseHandler;
- (id /* CDUnknownBlockType */)_zoomRenderResponseHandler;
- (void)_updateImageRenderForComposition:(id)arg1;
- (void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2;
- (id)_regionPolicyForZoomTargetRect:(CGRect)arg1;
- (CGRect)_scrollBounds;
- (CGSize)targetSize;
- (CGRect)convertRect:(CGRect)arg1 fromImageToView:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toImageFromView:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromImageToView:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 toImageFromView:(id)arg2;
- (BOOL)canRenderVideoLive;
@property(readonly) BOOL isReady;
@property(readonly, nonatomic, getter=isZoomedToFit) BOOL zoomedToFit;
- (BOOL)pipelineFilersHaveChanged;
- (void)wait;
- (void)_endAnimating;
- (void)_beginAnimating;
- (void)endZooming;
- (void)beginZooming;
- (void)endPanning;
- (void)beginPanning;
- (void)updateComposition:(id)arg1;
- (id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3;
- (id)init;
- (id)initWithMediaView:(id)arg1;
- (void)_releaseAVObjects;
- (void)_withComposition:(id)arg1 visitRenderClient:(id /* CDUnknownBlockType */)arg2;

@end


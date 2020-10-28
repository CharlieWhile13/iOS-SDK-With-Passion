//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/ICEnvironmentMonitorObserver-Protocol.h>

@class MPAssistantAnalyticsReportingController, MPCJinglePlayActivityReportingController, MPCLyricsReportingController, MPCPlaybackEngine, MPCPlaybackHistoryController, MPCReportingPlaybackObserver, MPRTCReportingController;

@interface _MPCReportingController : NSObject <ICEnvironmentMonitorObserver>
{
    MPCPlaybackEngine *_playbackEngine;
    MPAssistantAnalyticsReportingController *_assistantAnalyticsController;
    MPCJinglePlayActivityReportingController *_jinglePlayActivityReportingController;
    MPCReportingPlaybackObserver *_reportingPlaybackObserver;
    MPRTCReportingController *_rtcReportingController;
    MPCPlaybackHistoryController *_playbackHistoryController;
    MPCLyricsReportingController *_lyricsReportingController;
}

@property(retain, nonatomic) MPCLyricsReportingController *lyricsReportingController; // @synthesize lyricsReportingController=_lyricsReportingController;
@property(retain, nonatomic) MPCPlaybackHistoryController *playbackHistoryController; // @synthesize playbackHistoryController=_playbackHistoryController;
@property(retain, nonatomic) MPRTCReportingController *rtcReportingController; // @synthesize rtcReportingController=_rtcReportingController;
@property(retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver; // @synthesize reportingPlaybackObserver=_reportingPlaybackObserver;
@property(retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController; // @synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController;
@property(retain, nonatomic) MPAssistantAnalyticsReportingController *assistantAnalyticsController; // @synthesize assistantAnalyticsController=_assistantAnalyticsController;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
// - (void).cxx_destruct;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1;

@end


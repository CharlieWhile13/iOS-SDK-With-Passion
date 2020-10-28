//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject
{
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSMutableDictionary *_onGoingEventsMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) NSMutableDictionary *onGoingEventsMap; // @synthesize onGoingEventsMap=_onGoingEventsMap;
- (void)metricAttachmentValidation:(BOOL)arg1 attachmentSize:(id)arg2 operationalErrorDomain:(id)arg3 operationalErrorCode:(id)arg4 validationErrorDomain:(id)arg5 validationErrorCode:(id)arg6;
- (void)forceAutoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (void)autoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (BOOL)finalizeEvent:(id)arg1 addingDicitonary:(id)arg2;
- (void)_finalizeEvent:(id)arg1 addingDicitonary:(id)arg2;
- (BOOL)updateEvent:(id)arg1 addToCount:(id)arg2 forKey:(id)arg3;
- (BOOL)updateEvent:(id)arg1 updateValue:(id)arg2 forKey:(id)arg3;
- (BOOL)startEvent:(id)arg1 initialDictionary:(id)arg2 timeout:(NSUInteger)arg3 autoBugCapture:(BOOL)arg4;
- (void)_resetTimerEventIfNeedForEventID:(id)arg1;
- (BOOL)startEvent:(id)arg1 initialDictionary:(id)arg2;
- (BOOL)trackEvent:(id)arg1 withDictionary:(id)arg2;
- (BOOL)trackEvent:(id)arg1 withCount:(id)arg2;
- (void)_timeoutTimerFired:(id)arg1;
- (id)_trimedEventID:(id)arg1;
- (void)_trackEvent:(id)arg1 withDictionary:(id)arg2;
- (void)_trackEvent:(id)arg1 withCount:(id)arg2;
- (BOOL)trackEvent:(id)arg1 withStatistic:(id)arg2;
- (void)_trackEvent:(id)arg1 withStatistic:(id)arg2;
- (BOOL)trackEvent:(id)arg1;
- (void)_trackEvent:(id)arg1;
- (void )_ADClientSetValueForScalarKeyApiInit;
- (void )_ADClientPushValueForDistributionKeyApiInit;
- (void )_ADClientAddValueForScalarKeyApiInit;
- (void)dealloc;
- (id)init;
- (void)noteMeticsForSyncEndedWithSuccces:(BOOL)arg1 duration:(id)arg2;
- (void)noteMeticsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2;
- (void)noteCompletedInitialSync;
- (void)noteSyncError:(id)arg1;
- (void)clearInitialCKSyncState;

@end


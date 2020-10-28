//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLScopeFilter, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_clientCacheIdentifier;
    BOOL _hasPreparedForMingling;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
    CPLScopeFilter *_scopeFilter;
}

+ (BOOL)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(BOOL )arg3 error:(id )arg4;
@property(retain, nonatomic) CPLScopeFilter *scopeFilter; // @synthesize scopeFilter=_scopeFilter;
// - (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_processNextBatch;
- (void)_taskDidFinishWithError:(id)arg1;
- (BOOL)_checkContinueMinglingInTransaction:(id)arg1;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_notifySchedulerPullQueueIsFull;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;

@end


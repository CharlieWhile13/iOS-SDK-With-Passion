//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource, NSData, NSMutableArray, NSString;
@protocol CPLEngineTransportResourcesDownloadTask;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask
{
    NSMutableArray *_stateProgressDates;
    NSString *_activeQueuesStatusAtEnqueingTime;
    NSUInteger _preemptingCount;
    BOOL _cancelledByEngine;
    CPLResource *_cloudResource;
    NSData *_transportScope;
    NSUInteger _taskIdentifierForQueue;
    NSString *_clientBundleID;
    id <CPLEngineTransportResourcesDownloadTask> _transportTask;
    id /* CDUnknownBlockType */ _launchHandler;
    id /* CDUnknownBlockType */ _cancelHandler;
    id /* CDUnknownBlockType */ _didStartHandler;
    id /* CDUnknownBlockType */ _progressHandler;
    id /* CDUnknownBlockType */ _completionHandler;
    NSString *_transportIdentifier;
}

+ (NSUInteger)maximumResourceDownloadSizeForResourceType:(NSUInteger)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *transportIdentifier; // @synthesize transportIdentifier=_transportIdentifier;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ didStartHandler; // @synthesize didStartHandler=_didStartHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ launchHandler; // @synthesize launchHandler=_launchHandler;
@property(nonatomic) __weak id <CPLEngineTransportResourcesDownloadTask> transportTask; // @synthesize transportTask=_transportTask;
@property(nonatomic, getter=isCancelledByEngine) BOOL cancelledByEngine; // @synthesize cancelledByEngine=_cancelledByEngine;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(nonatomic) NSUInteger taskIdentifierForQueue; // @synthesize taskIdentifierForQueue=_taskIdentifierForQueue;
@property(retain, nonatomic) NSData *transportScope; // @synthesize transportScope=_transportScope;
@property(retain, nonatomic) CPLResource *cloudResource; // @synthesize cloudResource=_cloudResource;
// - (void).cxx_destruct;
- (void)noteTaskHasBeenPreempted;
- (void)noteActiveQueuesStatusAtEnqueingTime:(id)arg1;
- (void)noteStateDidProgress:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL willGenerateReport;
- (void)cancelTask;
- (void)launch;
- (id)initWithLaunchHandler:(id /* CDUnknownBlockType */)arg1 cancelHandler:(id /* CDUnknownBlockType */)arg2 didStartHandler:(id /* CDUnknownBlockType */)arg3 progressHandler:(id /* CDUnknownBlockType */)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICRemoteRequestOperationController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _numberOfActiveRequests;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_source> *_clientConnectionInvalidationTimer;
}

+ (id)sharedRemoteRequestOperationController;
// - (void).cxx_destruct;
- (void)_willBeginExecutingRemoteRequestOperation;
- (void)_scheduleInvalidationOfClientConnection;
- (void)_clientConnectionInvalidationTimerDidExpire;
- (id)_clientConnection;
- (void)_invalidateClientConnection;
- (void)_didEndExecutingRemoteRequestOperation;
- (void)_cancelClientConnectionInvalidationTimer;
- (void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PLCloudTaskManager : NSObject
{
    NSMutableDictionary *_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

// - (void).cxx_destruct;
- (id)_identifierForResource:(id)arg1;
- (void)_removeTaskIdentifiersForResource:(id)arg1 highPriority:(BOOL)arg2;
- (void)_setTaskIdentifiers:(id)arg1 forResource:(id)arg2 highPriority:(BOOL)arg3;
- (id)_taskIdentifiersForResource:(id)arg1 highPriority:(BOOL)arg2;
- (id)_taskForResource:(id)arg1 highPriority:(BOOL)arg2;
- (void)reset;
- (void)cancelTaskWithTaskIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)getPendingTaskForTaskIdentifier:(id)arg1;
- (void)reportCompletionForResourceTransferTask:(id)arg1 withError:(id)arg2;
- (void)reportProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;
- (BOOL)addProgressBlock:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2 forResource:(id)arg3 highPriority:(BOOL)arg4 withTaskIdentifier:(id)arg5;
- (id)init;

@end


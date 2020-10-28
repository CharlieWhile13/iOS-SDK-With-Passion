//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface HMDObjectLookup : HMFObject <HMFLogging>
{
    NSMapTable *_uuidToObjectMapping;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMapTable *uuidToObjectMapping; // @synthesize uuidToObjectMapping=_uuidToObjectMapping;
// - (void).cxx_destruct;
- (void)applyChange:(id)arg1 previous:(id)arg2 onObject:(id)arg3 result:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)resetObjects;
- (void)_scanThroughObjects;
- (id)_lookupObjectWithUUID:(id)arg1 applyObjectChange:(id)arg2 previous:(id)arg3 result:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)initWithWorkQueue:(id)arg1;

@end

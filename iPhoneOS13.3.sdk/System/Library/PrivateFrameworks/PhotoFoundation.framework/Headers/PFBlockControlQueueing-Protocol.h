//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFBlockControlCommon-Protocol.h>

@class NSObject;
@protocol OS_dispatch_group;

@protocol PFBlockControlQueueing <PFBlockControlCommon>
- (BOOL)dequeue;
- (BOOL)groupNotify:(NSObject<OS_dispatch_group> *)arg1;
- (BOOL)enqueueWithDelay:(NSUInteger)arg1;
- (BOOL)enqueue;
@end

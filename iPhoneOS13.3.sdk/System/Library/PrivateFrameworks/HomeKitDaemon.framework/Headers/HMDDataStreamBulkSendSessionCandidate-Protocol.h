//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol HMDDataStreamBulkSendSessionCandidate
- (void)rejectBulkSendSessionWithStatus:(unsigned short)arg1;
- (void)acceptBulkSendSessionOnQueue:(NSObject<OS_dispatch_queue> *)arg1 callback:(void (^)(id <HMDDataStreamBulkSendSession>))arg2;
@end


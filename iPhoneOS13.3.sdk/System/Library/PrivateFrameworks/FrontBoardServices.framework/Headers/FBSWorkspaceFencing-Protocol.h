//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BKSAnimationFenceHandle;

@protocol FBSWorkspaceFencing <NSObject>
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(void (^)(BOOL))arg1;
- (BOOL)trackSystemAnimationFence:(BKSAnimationFenceHandle *)arg1;
- (BOOL)isTrackingAnySystemAnimationFence;
- (BKSAnimationFenceHandle *)requestSystemAnimationFence;
@end


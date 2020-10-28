//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFActionBuilder, HFMediaPlaybackActionBuilder, NAFuture, NSArray;

@protocol HFActionSetBuilderProtocol <NSObject>
@property(readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property(readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property(readonly, nonatomic) BOOL requiresDeviceUnlock;
@property(readonly, nonatomic) NSArray *actions;
- (NAFuture *)deleteActionSet;
- (void)removeAllActions;
- (void)removeAction:(HFActionBuilder *)arg1;
- (void)updateAction:(HFActionBuilder *)arg1;
- (void)addAction:(HFActionBuilder *)arg1;
@end


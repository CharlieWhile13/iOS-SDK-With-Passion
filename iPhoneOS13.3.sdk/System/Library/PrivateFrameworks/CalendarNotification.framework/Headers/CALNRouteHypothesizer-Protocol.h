//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/CADSyntheticRouteHypothesizer-Protocol.h>

@class EKTravelEngineHypothesis;

@protocol CALNRouteHypothesizer <CADSyntheticRouteHypothesizer>
@property(readonly, nonatomic) id /* CDUnknownBlockType */ updateHandler;
@property(readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property(readonly, nonatomic) NSUInteger state;
- (void)didPostUINotification:(NSUInteger)arg1;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(void (^)(void))arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMLocationEvent.h>

#import <Home/HFLocationBasedEvent-Protocol.h>

@interface HMLocationEvent (HFAdditions) <HFLocationBasedEvent>
+ (BOOL)hf_isRegion:(id)arg1 atHome:(id)arg2;
+ (NSUInteger)hf_locationEventTypeForRegion:(id)arg1;
- (BOOL)hf_isRegionAtHome:(id)arg1;
@property(readonly, nonatomic) NSUInteger hf_eventType;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
@end


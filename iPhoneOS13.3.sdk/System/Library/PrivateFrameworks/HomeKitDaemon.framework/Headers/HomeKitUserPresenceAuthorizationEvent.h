//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitUserPresenceAuthorization;

@interface HomeKitUserPresenceAuthorizationEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitUserPresenceAuthorization *_metric;
}

+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) AWDHomeKitUserPresenceAuthorization *metric; // @synthesize metric=_metric;
// - (void).cxx_destruct;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)init;

@end


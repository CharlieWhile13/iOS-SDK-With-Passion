//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

#import <VisualVoicemail/VMTelephonySubscription-Protocol.h>

@class NSString, NSUUID;

@interface CTXPCServiceSubscriptionContext (TelephonyVoicemail) <VMTelephonySubscription>
+ (id)telephonyClient;
@property(readonly, nonatomic) NSString *vm_telephoneNumber;
@property(readonly, nonatomic) NSUUID *vm_labelUUID;
@property(readonly, nonatomic) NSString *vm_isoCountryCode;
@end


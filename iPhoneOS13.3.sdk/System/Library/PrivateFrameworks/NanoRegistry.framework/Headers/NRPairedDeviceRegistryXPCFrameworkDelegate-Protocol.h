//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSNumber, NSUUID;

@protocol NRPairedDeviceRegistryXPCFrameworkDelegate
- (void)xpcHasNewOOBKey:(NSData *)arg1;
- (void)xpcDeviceID:(NSUUID *)arg1 needsPasscode:(NSNumber *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/__HMDRegisteredIdentity.h>

@class HMDDevice;

@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity
{
    HMDDevice *_device;
}

@property(readonly) HMDDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1 device:(id)arg2;
- (id)initWithIdentity:(id)arg1;

@end


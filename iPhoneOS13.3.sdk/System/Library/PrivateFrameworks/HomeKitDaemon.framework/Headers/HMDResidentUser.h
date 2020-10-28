//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDUser.h>

@class HMDDevice;

@interface HMDResidentUser : HMDUser
{
    HMDDevice *_device;
    NSUInteger _configurationState;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(NSUInteger)arg1 version:(long long)arg2;
- (id)legacyUser;
@property NSUInteger configurationState; // @synthesize configurationState=_configurationState;
@property(readonly, getter=isBlocked) BOOL blocked;
- (BOOL)updateWithDevice:(id)arg1;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)registerIdentity;
- (BOOL)requiresMakoSupport;
- (id)displayName;
- (BOOL)refreshDisplayName;
- (id)deviceIdentifier;
- (id)userID;
- (void)configureWithHome:(id)arg1;
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(NSUInteger)arg4;
- (id)initWithModelObject:(id)arg1;

@end


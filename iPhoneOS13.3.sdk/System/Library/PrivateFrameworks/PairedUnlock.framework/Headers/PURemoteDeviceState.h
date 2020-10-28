//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PURemoteDeviceState : NSObject <NSSecureCoding>
{
    BOOL _passcodeSet;
    BOOL _passcodeLocked;
    BOOL _unlockOnly;
    BOOL _wristDetectEnabled;
    unsigned int _version;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled; // @synthesize wristDetectEnabled=_wristDetectEnabled;
@property(nonatomic, getter=isUnlockOnly) BOOL unlockOnly; // @synthesize unlockOnly=_unlockOnly;
@property(nonatomic, getter=isPasscodeLocked) BOOL passcodeLocked; // @synthesize passcodeLocked=_passcodeLocked;
@property(nonatomic, getter=hasPasscodeSet) BOOL passcodeSet; // @synthesize passcodeSet=_passcodeSet;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end


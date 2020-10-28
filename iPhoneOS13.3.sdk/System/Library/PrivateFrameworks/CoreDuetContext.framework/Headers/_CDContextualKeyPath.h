//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isUserCentric;
    BOOL _isEphemeral;
    NSString *_key;
    NSString *_deviceID;
}

+ (BOOL)supportsSecureCoding;
+ (id)remoteKeyPathForKeyPath:(id)arg1 forDeviceID:(id)arg2;
+ (id)remotekeyPathForKeyPath:(id)arg1 forDevice:(NSUInteger)arg2;
+ (id)ephemeralKeyPathWithKey:(id)arg1;
+ (id)keyPathWithKey:(id)arg1;
+ (id)keyPathWithKey:(id)arg1 isUserCentric:(BOOL)arg2;
@property(nonatomic) BOOL isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(nonatomic) BOOL isUserCentric; // @synthesize isUserCentric=_isUserCentric;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isMultiDeviceKeyPath;
- (id)initWithKey:(id)arg1 forDeviceID:(id)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4;
- (id)initWithKey:(id)arg1 forDevice:(NSUInteger)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HAPBLEPeripheralInfo, NSMutableArray, NSString;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding>
{
    NSString *_pairingIdentifier;
    HAPBLEPeripheralInfo *_peripheralInfo;
    NSMutableArray *_cachedServices;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableArray *cachedServices; // @synthesize cachedServices=_cachedServices;
@property(retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // @synthesize peripheralInfo=_peripheralInfo;
@property(readonly, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (void)updateWithService:(id)arg1;
- (id)getCachedServiceWithUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateWithPeripheralInfo:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1;

@end


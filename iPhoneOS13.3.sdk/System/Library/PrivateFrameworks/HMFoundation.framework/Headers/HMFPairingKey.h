//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class NSData;

@interface HMFPairingKey : HMFObject <NSSecureCoding, NSCopying>
{
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
+ (void)load;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithPairingKeyData:(id)arg1;
- (id)init;

@end


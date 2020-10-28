//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary;

@interface PKSecureElementCertificateSet : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _supportsLegacyFormats;
    NSDictionary *_dictionary;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL supportsLegacyFormats; // @synthesize supportsLegacyFormats=_supportsLegacyFormats;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
// - (void).cxx_destruct;
- (id)certificateOfType:(NSUInteger)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRSACertificate:(id)arg1 ECDSACertificate:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end


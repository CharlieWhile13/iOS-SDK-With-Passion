//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface _SFSignedData : NSObject <NSCopying, NSSecureCoding>
{
    id _signedDataInternal;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
@property(readonly) NSData *signature;
@property(readonly) NSData *data;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 signature:(id)arg2;

@end


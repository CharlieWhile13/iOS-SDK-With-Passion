//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NRDevicePropertyDiff, NRPBDevicePropertyDiffType;

@interface NRDevicePropertyDiffType : NSObject <NSCopying, NSSecureCoding>
{
    NRDevicePropertyDiff *_diff;
    NSUInteger _changeType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NRDevicePropertyDiff *diff; // @synthesize diff=_diff;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NRPBDevicePropertyDiffType *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithDiff:(id)arg1 andChangeType:(NSUInteger)arg2;

@end


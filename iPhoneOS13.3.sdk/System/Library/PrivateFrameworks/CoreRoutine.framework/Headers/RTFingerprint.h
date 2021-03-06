//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSUUID;

@interface RTFingerprint : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSUInteger _settledState;
    NSDate *_start;
    NSArray *_accessPoints;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property(readonly, nonatomic) NSDate *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSUInteger settledState; // @synthesize settledState=_settledState;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 settledState:(NSUInteger)arg2 start:(id)arg3 accessPoints:(id)arg4;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/DNDSModeAssertionInvalidationPredicate.h>

@class NSArray;

@interface DNDSModeAssertionUUIDInvalidationPredicate : DNDSModeAssertionInvalidationPredicate
{
    NSArray *_UUIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *UUIDs; // @synthesize UUIDs=_UUIDs;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)predicateType;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithUUIDs:(id)arg1;

@end


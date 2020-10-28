//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, RBInheritanceCollection, RBSProcessIdentity;

@interface RBProcessState : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    RBSProcessIdentity *_identity;
    RBInheritanceCollection *_inheritances;
    NSMutableDictionary *_maxCPULimitsByRole;
    NSMutableDictionary *_minCPULimitsByRole;
    NSMutableDictionary *_jetsamLenientModeByRole;
    NSMutableSet *_preventIdleSleepIdentifiers;
    NSMutableSet *_tags;
    NSMutableSet *_legacyAssertions;
    NSMutableSet *_primitiveAssertions;
    NSUInteger _legacyFinishTaskReason;
    unsigned char _terminationResistance;
    unsigned char _jetsamBand;
    unsigned char _role;
    unsigned char _flags;
    NSSet *_preventLaunchReasons;
}

@property(readonly, nonatomic) NSSet *preventLaunchReasons; // @synthesize preventLaunchReasons=_preventLaunchReasons;
@property(readonly, nonatomic) NSUInteger legacyFinishTaskReason; // @synthesize legacyFinishTaskReason=_legacyFinishTaskReason;
@property(copy, nonatomic) NSSet *primitiveAssertions; // @synthesize primitiveAssertions=_primitiveAssertions;
@property(copy, nonatomic) NSSet *legacyAssertions; // @synthesize legacyAssertions=_legacyAssertions;
@property(copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSMutableDictionary *minCPULimitsByRole; // @synthesize minCPULimitsByRole=_minCPULimitsByRole;
@property(retain, nonatomic) NSMutableDictionary *maxCPULimitsByRole; // @synthesize maxCPULimitsByRole=_maxCPULimitsByRole;
@property(readonly, nonatomic) NSSet *preventIdleSleepIdentifiers; // @synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers;
@property(readonly, nonatomic) unsigned char role; // @synthesize role=_role;
@property(readonly, nonatomic) unsigned char jetsamBand; // @synthesize jetsamBand=_jetsamBand;
@property(readonly, copy, nonatomic) RBSProcessIdentity *identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) unsigned char terminationResistance; // @synthesize terminationResistance=_terminationResistance;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (BOOL)isEqualToProcessStateIgnoringInheritances:(id)arg1;
- (BOOL)isEqualToProcessStateIgnoringIdentity:(id)arg1;
- (BOOL)_isEqualToProcessStateIgnoringIdentityAndInheritances:(id)arg1;
- (id)minCPUUsageLimitsForRole:(unsigned char)arg1;
- (id)maxCPUUsageLimitsForRole:(unsigned char)arg1;
- (id)inheritancesForEnvironment:(id)arg1;
@property(readonly, nonatomic) RBInheritanceCollection *inheritances; // @synthesize inheritances=_inheritances;
@property(readonly, nonatomic) BOOL effectiveJetsamLenientMode;
@property(readonly, nonatomic) NSUInteger effectiveMinCPUPercentage;
@property(readonly, nonatomic) NSUInteger effectiveMinCPUDuration;
@property(readonly, nonatomic) NSUInteger effectiveMaxCPUPercentage;
@property(readonly, nonatomic) NSUInteger effectiveMaxCPUDuration;
@property(readonly, nonatomic) NSUInteger effectiveMaxCPUUsageViolationPolicy;
@property(readonly, nonatomic) BOOL throttleBestEffortNetworking;
@property(readonly, nonatomic) BOOL jetsamLenientMode;
@property(readonly, nonatomic) BOOL preventLaunch;
@property(readonly, nonatomic) BOOL preventIdleSleep;
@property(readonly, nonatomic) BOOL isBeingDebugged;
@property(readonly, nonatomic) BOOL GPUAllowed;
- (id)_initWithProcessState:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)init;

@end


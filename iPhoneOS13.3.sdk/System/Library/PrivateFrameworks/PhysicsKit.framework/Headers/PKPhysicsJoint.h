//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSSecureCoding>
{
    BOOL _inUse;
    BOOL _implicit;
    struct b2Joint _baseJoint;
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKPhysicsBody *bodyB; // @synthesize bodyB=_bodyB;
@property(retain, nonatomic) PKPhysicsBody *bodyA; // @synthesize bodyA=_bodyA;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double reactionTorque;
@property(readonly, nonatomic) CGVector reactionForce;
- (id)init;
- (BOOL)isEqualToJoint:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)create;
@property(readonly, nonatomic) struct b2JointDef _jointDef;
- (void)set_inUse:(BOOL)arg1;
- (BOOL)_inUse;
- (void)set_implicit:(BOOL)arg1;
- (BOOL)_implicit;
@property(nonatomic) struct b2Joint _joint;

@end


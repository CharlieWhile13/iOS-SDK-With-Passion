//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding>
{
    NSString *_identifier;
    NSString *_machName;
    NSDictionary *_servicesByIdentifier;
    NSOrderedSet *_orderedServices;
}

@property(readonly, copy, nonatomic) NSOrderedSet *_orderedServices; // @synthesize _orderedServices;
@property(readonly, copy, nonatomic) NSString *machName; // @synthesize machName=_machName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_domainWithAdditionalServices:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 machName:(id)arg2 servicesByIdentifier:(id)arg3;
- (id)serviceForIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *services;
- (id)init;

@end


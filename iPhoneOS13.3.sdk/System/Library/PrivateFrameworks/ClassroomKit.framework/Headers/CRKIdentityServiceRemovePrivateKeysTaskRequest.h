//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSSet;

@interface CRKIdentityServiceRemovePrivateKeysTaskRequest : CATTaskRequest
{
    NSSet *_keyPairMarkers;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *keyPairMarkers; // @synthesize keyPairMarkers=_keyPairMarkers;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


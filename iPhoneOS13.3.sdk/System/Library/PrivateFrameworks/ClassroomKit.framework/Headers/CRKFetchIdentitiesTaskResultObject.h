//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchIdentitiesTaskResultObject : CATTaskResultObject
{
    NSDictionary *_courseIdentityInfosByGroupIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *courseIdentityInfosByGroupIdentifier; // @synthesize courseIdentityInfosByGroupIdentifier=_courseIdentityInfosByGroupIdentifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


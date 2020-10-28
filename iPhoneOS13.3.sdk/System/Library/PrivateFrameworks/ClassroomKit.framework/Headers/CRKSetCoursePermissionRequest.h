//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSNumber, NSString;

@interface CRKSetCoursePermissionRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_feature;
    NSNumber *_permission;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *permission; // @synthesize permission=_permission;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


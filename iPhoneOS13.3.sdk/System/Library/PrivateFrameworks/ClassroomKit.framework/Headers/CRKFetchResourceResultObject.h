//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject
{
    NSData *_resourceData;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


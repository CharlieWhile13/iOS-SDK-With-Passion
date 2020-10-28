//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSGrant.h>

@class NSObject, NSString;
@protocol OS_xpc_object;

@interface RBSEndowmentGrant : RBSGrant
{
    NSString _endowmentNamespace;
    NSObject<OS_xpc_object> *_encodedEndowment;
}

+ (id)grantWithNamespace:(id)arg1 endowment:(NSObject )arg2;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // @synthesize encodedEndowment=_encodedEndowment;
@property(readonly, copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
// - (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end


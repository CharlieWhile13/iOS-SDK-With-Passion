//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyPreferences/TPSSecureObject-Protocol.h>

@class CTXPCServiceSubscriptionContext, NSString;

@interface TPSRequest : NSObject <TPSSecureObject>
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id )arg2;
+ (id)unarchivedObjectClasses;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
// - (void).cxx_destruct;
- (id)archivedDataWithError:(id )arg1;
- (BOOL)isEqualToRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)init;

@end


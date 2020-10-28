//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMSecuritySingleSignOnDeclaration_Kerberos : CEMPayloadBase
{
    NSString *_payloadPrincipalName;
    NSString *_payloadPayloadCertificateUUID;
    NSString *_payloadRealm;
    NSArray *_payloadURLPrefixMatches;
    NSArray *_payloadAppIdentifierMatches;
}

+ (id)buildRequiredOnlyWithRealm:(id)arg1;
+ (id)buildWithPrincipalName:(id)arg1 withPayloadCertificateUUID:(id)arg2 withRealm:(id)arg3 withURLPrefixMatches:(id)arg4 withAppIdentifierMatches:(id)arg5;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadAppIdentifierMatches; // @synthesize payloadAppIdentifierMatches=_payloadAppIdentifierMatches;
@property(copy, nonatomic) NSArray *payloadURLPrefixMatches; // @synthesize payloadURLPrefixMatches=_payloadURLPrefixMatches;
@property(copy, nonatomic) NSString *payloadRealm; // @synthesize payloadRealm=_payloadRealm;
@property(copy, nonatomic) NSString *payloadPayloadCertificateUUID; // @synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID;
@property(copy, nonatomic) NSString *payloadPrincipalName; // @synthesize payloadPrincipalName=_payloadPrincipalName;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end


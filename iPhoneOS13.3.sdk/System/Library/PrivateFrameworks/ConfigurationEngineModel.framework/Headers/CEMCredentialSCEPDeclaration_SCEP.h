//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMCredentialSCEPDeclaration_SCEPSubjectAltName, NSArray, NSData, NSNumber, NSString;

@interface CEMCredentialSCEPDeclaration_SCEP : CEMPayloadBase
{
    NSString *_payloadURL;
    NSString *_payloadName;
    NSArray *_payloadSubject;
    NSNumber *_payloadKeysize;
    NSString *_payloadKeyType;
    NSNumber *_payloadKeyUsage;
    NSData *_payloadCAFingerprint;
    NSNumber *_payloadRetries;
    NSNumber *_payloadRetryDelay;
    CEMCredentialSCEPDeclaration_SCEPSubjectAltName *_payloadSubjectAltName;
    NSNumber *_payloadKeyIsExtractable;
    NSString *_payloadChallengeCredential;
    NSNumber *_payloadAllowAllAppsAccess;
}

+ (id)buildRequiredOnlyWithURL:(id)arg1;
+ (id)buildWithURL:(id)arg1 withName:(id)arg2 withSubject:(id)arg3 withKeysize:(id)arg4 withKeyType:(id)arg5 withKeyUsage:(id)arg6 withCAFingerprint:(id)arg7 withRetries:(id)arg8 withRetryDelay:(id)arg9 withSubjectAltName:(id)arg10 withKeyIsExtractable:(id)arg11 withChallengeCredential:(id)arg12 withAllowAllAppsAccess:(id)arg13;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadAllowAllAppsAccess; // @synthesize payloadAllowAllAppsAccess=_payloadAllowAllAppsAccess;
@property(copy, nonatomic) NSString *payloadChallengeCredential; // @synthesize payloadChallengeCredential=_payloadChallengeCredential;
@property(copy, nonatomic) NSNumber *payloadKeyIsExtractable; // @synthesize payloadKeyIsExtractable=_payloadKeyIsExtractable;
@property(copy, nonatomic) CEMCredentialSCEPDeclaration_SCEPSubjectAltName *payloadSubjectAltName; // @synthesize payloadSubjectAltName=_payloadSubjectAltName;
@property(copy, nonatomic) NSNumber *payloadRetryDelay; // @synthesize payloadRetryDelay=_payloadRetryDelay;
@property(copy, nonatomic) NSNumber *payloadRetries; // @synthesize payloadRetries=_payloadRetries;
@property(copy, nonatomic) NSData *payloadCAFingerprint; // @synthesize payloadCAFingerprint=_payloadCAFingerprint;
@property(copy, nonatomic) NSNumber *payloadKeyUsage; // @synthesize payloadKeyUsage=_payloadKeyUsage;
@property(copy, nonatomic) NSString *payloadKeyType; // @synthesize payloadKeyType=_payloadKeyType;
@property(copy, nonatomic) NSNumber *payloadKeysize; // @synthesize payloadKeysize=_payloadKeysize;
@property(copy, nonatomic) NSArray *payloadSubject; // @synthesize payloadSubject=_payloadSubject;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
@property(copy, nonatomic) NSString *payloadURL; // @synthesize payloadURL=_payloadURL;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end


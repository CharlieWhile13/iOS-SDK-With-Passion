//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMAccountCalDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalDAVAccountDescription;
    NSString *_payloadCalDAVHostName;
    NSString *_payloadCalDAVPrincipalURL;
    NSNumber *_payloadCalDAVUseSSL;
    NSNumber *_payloadCalDAVPort;
    NSString *_payloadCalDAVCredentials;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCalDAVHostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withCalDAVAccountDescription:(id)arg2 withCalDAVHostName:(id)arg3 withCalDAVPrincipalURL:(id)arg4 withCalDAVUseSSL:(id)arg5 withCalDAVPort:(id)arg6 withCalDAVCredentials:(id)arg7;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadCalDAVCredentials; // @synthesize payloadCalDAVCredentials=_payloadCalDAVCredentials;
@property(copy, nonatomic) NSNumber *payloadCalDAVPort; // @synthesize payloadCalDAVPort=_payloadCalDAVPort;
@property(copy, nonatomic) NSNumber *payloadCalDAVUseSSL; // @synthesize payloadCalDAVUseSSL=_payloadCalDAVUseSSL;
@property(copy, nonatomic) NSString *payloadCalDAVPrincipalURL; // @synthesize payloadCalDAVPrincipalURL=_payloadCalDAVPrincipalURL;
@property(copy, nonatomic) NSString *payloadCalDAVHostName; // @synthesize payloadCalDAVHostName=_payloadCalDAVHostName;
@property(copy, nonatomic) NSString *payloadCalDAVAccountDescription; // @synthesize payloadCalDAVAccountDescription=_payloadCalDAVAccountDescription;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end


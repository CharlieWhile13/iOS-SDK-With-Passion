//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray;

@interface CEMApplicationLoginItemsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadAutoLaunchedApplicationDictionaryManaged;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withAutoLaunchedApplicationDictionaryManaged:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withAutoLaunchedApplicationDictionaryManaged:(id)arg2;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadAutoLaunchedApplicationDictionaryManaged; // @synthesize payloadAutoLaunchedApplicationDictionaryManaged=_payloadAutoLaunchedApplicationDictionaryManaged;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end


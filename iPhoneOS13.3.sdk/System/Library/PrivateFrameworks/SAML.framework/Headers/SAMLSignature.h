//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSData, NSString, SAMLKeyInfo, SAMLSignedInfo;

__attribute__((visibility("hidden")))
@interface SAMLSignature : SAMLBaseElement
{
}

+ (id)createElement:(id )arg1;
- (BOOL)isValid;
@property(readonly, nonatomic) SAMLKeyInfo *keyInfo;
@property(readonly, nonatomic) NSString *signatureValueId;
@property(readonly, nonatomic) NSData *signatureValue;
@property(readonly, nonatomic) SAMLSignedInfo *signedInfo;
@property(readonly, nonatomic) NSString *identifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupSendPaymentSnippet : SAUISnippet
{
}

+ (id)sendPaymentSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sendPaymentSnippet;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


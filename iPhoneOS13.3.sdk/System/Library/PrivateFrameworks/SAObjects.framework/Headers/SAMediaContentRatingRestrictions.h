//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>
{
}

+ (id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaContentRatingRestrictions;
@property(nonatomic) long long tvRestriction;
@property(nonatomic) long long movieRestriction;
@property(copy, nonatomic) NSString *countryCode;
@property(nonatomic) long long appRestriction;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, SAPersonAttribute;

@interface SAPhoneCallSearchResult : SADomainObject
{
}

+ (id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callSearchResult;
@property(copy, nonatomic) NSNumber *isNew;
@property(retain, nonatomic) SAPersonAttribute *contact;
@property(copy, nonatomic) NSDate *callTime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject
{
}

+ (id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceMicroblogSearchResult;
@property(copy, nonatomic) NSURL *webAddress;
@property(retain, nonatomic) SADecoratedString *summary;
@property(copy, nonatomic) NSArray *resultUsers;
@property(copy, nonatomic) NSArray *resultPosts;
@property(copy, nonatomic) NSArray *resultNews;
@property(copy, nonatomic) NSString *query;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(retain, nonatomic) SAMicroblogTwitterPostAuthor *globalAuthor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


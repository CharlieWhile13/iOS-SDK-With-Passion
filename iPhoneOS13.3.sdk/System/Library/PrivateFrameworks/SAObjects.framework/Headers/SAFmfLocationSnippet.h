//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAFmfLocationSnippet : SAUISnippet
{
}

+ (id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSnippet;
@property(copy, nonatomic) NSURL *searchContext;
@property(copy, nonatomic) NSString *proximity;
@property(copy, nonatomic) NSArray *locations;
@property(copy, nonatomic) NSNumber *atRequestedLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


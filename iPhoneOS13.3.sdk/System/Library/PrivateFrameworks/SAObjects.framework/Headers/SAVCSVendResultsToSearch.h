//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand
{
}

+ (id)vendResultsToSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)vendResultsToSearch;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *shelves;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


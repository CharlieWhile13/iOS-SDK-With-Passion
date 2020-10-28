//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNContact, NSArray, NSPredicate, NSString;

@protocol TUContactsDataSource <NSObject>
- (const void )personFromContact:(CNContact *)arg1;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2 error:(id )arg3;
- (CNContact *)unifiedContactWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 error:(id )arg3;
@end


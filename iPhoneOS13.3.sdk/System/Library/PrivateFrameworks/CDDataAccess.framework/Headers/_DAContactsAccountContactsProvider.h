//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CDDataAccess/DAContactsAccountProvider.h>

@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider
{
    CNContactStore *_contactStore;
}

@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
// - (void).cxx_destruct;
- (id)accountForContainerWithIdentifier:(id)arg1;
- (id)allAccounts;
- (id)accountWithExternalIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)initWithContactStore:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataAccess/DAContactsAccount-Protocol.h>

@class CNAccount;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount>
{
    BOOL _markedForDeletion;
    CNAccount *_account;
}

@property(nonatomic) BOOL markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(readonly, nonatomic) CNAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;
- (BOOL)isAccount;
- (BOOL)isContainer;
- (BOOL)isGroup;
- (BOOL)isContact;
- (id)externalIdentifier;
- (id)identifier;
- (int)legacyIdentifier;
- (id)initWithAccount:(id)arg1;

@end


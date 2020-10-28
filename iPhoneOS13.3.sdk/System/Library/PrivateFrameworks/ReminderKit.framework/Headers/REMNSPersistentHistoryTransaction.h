//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMChangeTransaction.h>

@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction
{
    _REMNSPersistentHistoryTransactionStorage *_storage;
}

+ (BOOL)supportsSecureCoding;
@property(retain) _REMNSPersistentHistoryTransactionStorage *storage; // @synthesize storage=_storage;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)author;
- (id)storeID;
- (id)accountID;
- (id)token;
- (id)changes;
- (id)timestamp;
- (id)description;
- (void)_resolveAccountID:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


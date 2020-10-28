//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDatabaseTransactionContext.h>

@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext
{
}

// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) BOOL requiresNewDatabaseConnection; // @dynamic requiresNewDatabaseConnection;
@property(nonatomic) BOOL skipJournalMerge; // @dynamic skipJournalMerge;
@property(nonatomic) BOOL highPriority; // @dynamic highPriority;
@property(nonatomic) BOOL requiresProtectedData; // @dynamic requiresProtectedData;
@property(nonatomic) BOOL requiresWrite; // @dynamic requiresWrite;
@property(nonatomic) long long cacheScope; // @dynamic cacheScope;
@property(nonatomic) long long journalType; // @dynamic journalType;
- (void)addAccessibilityAssertion:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDProfile, HDSQLitePredicate, HDSyncEntityIdentifier, HDSyncSession, NSArray, NSData, NSDate, NSNumber, NSSet;
@protocol HDSyncCodable, HDSyncMessageHandler, HDSyncStore;

@protocol HDSyncEntity <NSObject>
+ (HDSyncEntityIdentifier *)syncEntityIdentifier;
+ (long long)receiveSyncObjects:(NSArray *)arg1 syncStore:(id <HDSyncStore>)arg2 profile:(HDProfile *)arg3 error:(id )arg4;
+ (id <HDSyncCodable>)decodeSyncObjectWithData:(NSData *)arg1;
+ (NSSet *)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;

@optional
+ (NSNumber *)pruneSyncedObjectsThroughAnchor:(NSNumber *)arg1 limit:(NSUInteger)arg2 nowDate:(NSDate *)arg3 profile:(HDProfile *)arg4 error:(id )arg5;
+ (NSSet *)excludedSyncStoresForSession:(HDSyncSession *)arg1;
+ (BOOL)supportsSyncStore:(id <HDSyncStore>)arg1;
+ (long long)nextSyncAnchorWithSession:(HDSyncSession *)arg1 predicate:(HDSQLitePredicate *)arg2 startSyncAnchor:(long long)arg3 profile:(HDProfile *)arg4 error:(id )arg5;
+ (long long)nextSyncAnchorWithSession:(HDSyncSession *)arg1 startSyncAnchor:(long long)arg2 profile:(HDProfile *)arg3 error:(id )arg4;
+ (BOOL)generateSyncObjectsForSession:(HDSyncSession *)arg1 predicate:(HDSQLitePredicate *)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(HDProfile *)arg5 error:(id )arg6 handler:(BOOL (^)(NSArray *, long long, BOOL, id ))arg7;
+ (BOOL)generateSyncObjectsForSession:(HDSyncSession *)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(HDProfile *)arg3 messageHandler:(id <HDSyncMessageHandler>)arg4 error:(id )arg5;
@end


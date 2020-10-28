//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDInMemoryThreadQueryHandler, EDThreadPersistence, EFLocked, EMThreadScope;
@protocol EDThreadMigratorDelegate, OS_dispatch_queue;

@interface EDThreadMigrator : NSObject <EFLoggable>
{
//     struct os_unfair_lock_s _migrationLock;
    _Atomic BOOL _cancelled;
    EMThreadScope *_threadScope;
    EFLocked *_state;
    NSObject<OS_dispatch_queue> *_workQueue;
    EDThreadPersistence *_threadPersistence;
    EDInMemoryThreadQueryHandler *_queryHandler;
    id <EDThreadMigratorDelegate> _delegate;
}

+ (id)log;
@property(readonly, nonatomic) __weak id <EDThreadMigratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) EDInMemoryThreadQueryHandler *queryHandler; // @synthesize queryHandler=_queryHandler;
@property(readonly, nonatomic) EDThreadPersistence *threadPersistence; // @synthesize threadPersistence=_threadPersistence;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) EFLocked *state; // @synthesize state=_state;
@property(readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
// - (void).cxx_destruct;
- (void)deleteObjectIDsToMigrate:(id)arg1;
- (void)changeObjectIDsToMigrate:(id)arg1;
- (void)addObjectIDsToMigrate:(id)arg1;
- (void)_scheduleCleanupForBatchedObjectIDs:(id)arg1;
- (void)_performMigration;
- (void)_failMigration;
- (void)reset;
- (void)_resumeMigration;
- (void)cancel;
- (void)start;
@property(readonly) NSUInteger migrationState;
- (id)initWithThreadScope:(id)arg1 threadPersistence:(id)arg2 queryHandler:(id)arg3 delegate:(id)arg4;

@end


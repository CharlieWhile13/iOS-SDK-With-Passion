//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKContainer, CKDatabase, NSError, NSMutableArray, NSOperation, NSOperationQueue, SGFuture, _PASKVOHandler, _SGDCloudKitSyncPersistedState;
@protocol OS_dispatch_queue;

@interface SGDCloudKitSync : NSObject <APSConnectionDelegate>
{
    _PASKVOHandler *_kvoHandler;
    CKDatabase *_database;
    id /* CDUnknownBlockType */ _callback;
    id /* CDUnknownBlockType */ _deleteAllSyncedItemsCallback;
    BOOL _readyForNewEntities;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_opQueue;
    NSMutableArray *_operationsToAddToOpQueue;
    CKContainer *_container;
    SGFuture *_accountInfoFuture;
    _SGDCloudKitSyncPersistedState *_persistedState;
    long long _suspendCount;
    BOOL _noZone;
    BOOL _disabledBecauseOutOfDateSoftware;
    NSOperation *_inProgressProcureSaltOperation;
    NSOperation *_inProgressCreateZoneOperation;
    NSOperation *_inProgressDeleteZoneOperation;
    NSOperation *_inProgressFetchNewEntitiesOperation;
    BOOL _requestedFetchNewEntitiesWhileRequestAlreadyInFlight;
    NSError *_createZoneError;
    NSError *_deleteZoneError;
    NSError *_procureSaltError;
    BOOL _processingStateChanges;
    BOOL _pendingProcessStateChanges;
    struct ct_green_tea_logger_s _greenTeaLogger;
}

+ (id)apsEnvironmentStringForContainer:(id)arg1;
+ (void)setSharedInstanceConfigurationBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)sharedInstance;
+ (id)_sharedInstanceConfigurationQueue;
// - (void).cxx_destruct;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)privacySalt;
- (void)deleteZoneWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)deleteStorageEvent:(id)arg1;
- (id)recordZoneId;
- (id)invokeNewEntitiesCallbackWithEntity:(id)arg1;
- (void)setDeleteAllSyncedItemsCallback:(id /* CDUnknownBlockType */)arg1;
- (void)setNewEntitiesCallback:(id /* CDUnknownBlockType */)arg1;
- (void)setReadyForNewEntities:(BOOL)arg1;
- (void)deleteGroupId:(id)arg1;
- (void)addEntity:(id)arg1 withParentEntity:(id)arg2;
- (void)setDatabase:(id)arg1;
- (void)createSubscriptionWithRetries:(NSUInteger)arg1;
- (id)shouldRemoveEventsFromEventKit;
- (id)accountInfo;
- (void)accountChanged:(id)arg1;
- (void)processStateChanges;
- (void)dealloc;
- (id)init;
- (id)addOperation;
- (id)addOperation:(id)arg1;
- (id)addWriteOperationForRecordGetter:(id /* CDUnknownBlockType */)arg1 deleteGetter:(id /* CDUnknownBlockType */)arg2 withRetries:(NSUInteger)arg3 isFirstTry:(BOOL)arg4;
- (id)addWriteOperationForRecordGetter:(id /* CDUnknownBlockType */)arg1 deleteGetter:(id /* CDUnknownBlockType */)arg2 withRetries:(NSUInteger)arg3;
- (id)addDeleteAndRecreateZoneOperation;
- (BOOL)shouldRecreateZoneForRecordError:(id)arg1 operationError:(id)arg2;
- (id)addFetchNewEntitiesAttemptOperationWithRetries:(NSUInteger)arg1;
- (id)addFetchNewEntitiesOperation;
- (id)addProcureSaltAttemptOperationWithRetries:(NSUInteger)arg1;
- (id)_ckErrorForId:(id)arg1 inError:(id)arg2;
- (id)ckErrorForRecordZoneId:(id)arg1 inError:(id)arg2;
- (id)ckErrorForRecordId:(id)arg1 inError:(id)arg2;
- (id)addProcureSaltOperation;
- (id)addManateeSanityCheckOperation;
- (id)addCreateZoneAttemptOperationWithRetries:(NSUInteger)arg1;
- (id)addCreateZoneOperation;
- (id)addDeleteZoneAttemptOperationWithRetries:(NSUInteger)arg1;
- (id)addDeleteZoneOperation;
- (BOOL)pauseIfNeededAndReturnRetryEligibilityForError:(id)arg1;
- (id)getUnderlyingError:(id)arg1;
- (void)resume;
- (void)suspendAndResumeAfter:(double)arg1;
- (void)suspend;
- (void)failSalt;
- (void)disable;
- (void)clearErrors;
- (void)_addDependency:(id)arg1 toTrain:(id)arg2;
- (void)_coupleOperationTrainWithStart:(id)arg1 end:(id)arg2;

@end


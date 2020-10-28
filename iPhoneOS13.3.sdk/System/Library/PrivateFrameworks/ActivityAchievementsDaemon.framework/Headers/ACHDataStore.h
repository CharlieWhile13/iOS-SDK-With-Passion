//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <ActivityAchievementsDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDKeyValueDomain, HDProfile, NSError, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface ACHDataStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>
{
    BOOL _needsPopulationWhenProtectedDataAvailable;
    BOOL _hasCompletedFirstPopulateFromDatabase;
    BOOL _populatesValuesFromDatabase;
    NSString *_databaseIdentifier;
    HDProfile *_profile;
    HDKeyValueDomain *_defaultsDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSHashTable *_observers;
    NSError *_injectedError;
    id /* CDUnknownBlockType */ _populationCompleteBlock;
    NSHashTable *_propertyProviders;
}

@property(retain, nonatomic) NSHashTable *propertyProviders; // @synthesize propertyProviders=_propertyProviders;
@property(copy, nonatomic) id /* CDUnknownBlockType */ populationCompleteBlock; // @synthesize populationCompleteBlock=_populationCompleteBlock;
@property(retain, nonatomic) NSError *injectedError; // @synthesize injectedError=_injectedError;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(nonatomic) BOOL populatesValuesFromDatabase; // @synthesize populatesValuesFromDatabase=_populatesValuesFromDatabase;
@property(nonatomic) BOOL hasCompletedFirstPopulateFromDatabase; // @synthesize hasCompletedFirstPopulateFromDatabase=_hasCompletedFirstPopulateFromDatabase;
@property(nonatomic) BOOL needsPopulationWhenProtectedDataAvailable; // @synthesize needsPopulationWhenProtectedDataAvailable=_needsPopulationWhenProtectedDataAvailable;
@property(retain, nonatomic) HDKeyValueDomain *defaultsDomain; // @synthesize defaultsDomain=_defaultsDomain;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (BOOL)_forceDatabasePopulate;
- (void)_injectError:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)_queue_populateFromDatabaseForProviders:(id)arg1 error:(id )arg2;
- (BOOL)_queue_setDatabaseIdentifier:(id)arg1 error:(id )arg2;
- (id)_queue_allPropertyProviderKeys;
- (id)_queue_dictionaryRepresentationOfAllProviderProperties;
- (BOOL)_queue_populateAllPropertiesFromDatabase;
- (void)commitAllPropertiesToDatabaseWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)clearAllPropertiesWithError:(id )arg1 databaseContext:(id)arg2;
@property(copy, nonatomic) NSString *databaseIdentifier; // @synthesize databaseIdentifier=_databaseIdentifier;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (void)addPropertyProvider:(id)arg1;
- (void)_syncEntityDidReceiveValues:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end


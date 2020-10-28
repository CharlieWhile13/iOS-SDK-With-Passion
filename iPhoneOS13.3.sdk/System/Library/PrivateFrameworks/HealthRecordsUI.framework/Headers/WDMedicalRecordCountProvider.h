//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/HKSampleTypeUpdateControllerObserver-Protocol.h>

@class HRProfile, NSArray, NSHashTable, NSMutableDictionary, NSNumber;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordCountProvider : NSObject <HKSampleTypeUpdateControllerObserver>
{
    NSNumber *_allRecordsCount;
    id /* CDUnknownBlockType */ _unitTesting_allObserversReadyCallback;
    HRProfile *_profile;
    NSMutableDictionary *_countByCategory;
    NSMutableDictionary *_countBySampleType;
    NSArray *_supportedCategories;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_countingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *countingQueue; // @synthesize countingQueue=_countingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSArray *supportedCategories; // @synthesize supportedCategories=_supportedCategories;
@property(retain, nonatomic) NSMutableDictionary *countBySampleType; // @synthesize countBySampleType=_countBySampleType;
@property(retain, nonatomic) NSMutableDictionary *countByCategory; // @synthesize countByCategory=_countByCategory;
@property(retain, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) id /* CDUnknownBlockType */ unitTesting_allObserversReadyCallback; // @synthesize unitTesting_allObserversReadyCallback=_unitTesting_allObserversReadyCallback;
@property(retain, nonatomic) NSNumber *allRecordsCount; // @synthesize allRecordsCount=_allRecordsCount;
// - (void).cxx_destruct;
- (BOOL)_areAllObserverQueriesRunning;
- (void)_sampleCountForSampleTypes:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)loadCountOfSamplesForCategories:(id)arg1 additionalSampleTypes:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_includeCategoryInAllRecordCount:(id)arg1;
- (void)_queue_updateAllCategoryRecordCount;
- (void)_queue_incorporateAndNotifyObserversWithCategoryCounts:(id)arg1 sampleTypeCounts:(id)arg2;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)_loadInitialCounts;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)CDASampleCount;
- (id)numberOfRecordsForSampleType:(id)arg1;
- (id)numberOfRecordsForCategory:(id)arg1;
- (void)_callAllObserversReadyCallbackIfNecessary;
- (void)_setupSampleUpdateObserver;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end


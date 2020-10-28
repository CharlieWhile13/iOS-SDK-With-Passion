//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKObserverQuery, MTObserverStore;
@protocol NAScheduler;

@interface MTSleepMetrics : NSObject
{
    id <NAScheduler> _serializer;
    HKHealthStore *_healthStore;
    HKObserverQuery *_healthObserver;
    MTObserverStore *_sleepDataObservers;
}

+ (id)_sourcePredicate:(NSUInteger)arg1;
+ (id)sleepDaysForRange:(id)arg1 requestAuthorization:(BOOL)arg2 dataSource:(NSUInteger)arg3;
+ (id)sleepDaysForRange:(id)arg1 requestAuthorization:(BOOL)arg2;
+ (id)sleepDaysForRange:(id)arg1;
+ (id)lastSleepDayRequestAuthorization:(BOOL)arg1 dataSource:(NSUInteger)arg2;
+ (id)lastSleepDayRequestAuthorization:(BOOL)arg1;
+ (id)lastSleepDay;
+ (id)sleepDataForRange:(id)arg1;
+ (id)sleepDataForPastWeekRequestAuthorization:(BOOL)arg1 dataSource:(NSUInteger)arg2;
+ (id)sleepDataForPastWeekRequestAuthorization:(BOOL)arg1;
+ (id)sleepDataForPastWeek;
+ (void)unregisterSleepDataObserver:(id)arg1;
+ (void)registerSleepDataObserver:(id)arg1;
+ (id)_sharedPublicMetrics;
@property(retain, nonatomic) MTObserverStore *sleepDataObservers; // @synthesize sleepDataObservers=_sleepDataObservers;
@property(retain, nonatomic) HKObserverQuery *healthObserver; // @synthesize healthObserver=_healthObserver;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
// - (void).cxx_destruct;
- (void)_executeSleepQuery:(id)arg1 requestAuthorization:(BOOL)arg2 future:(id)arg3;
- (id)sleepDaysForRange:(id)arg1 requestAuthorization:(BOOL)arg2 dataSource:(NSUInteger)arg3;
- (id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2 requestAuthorization:(BOOL)arg3 dataSource:(NSUInteger)arg4;
- (id)sleepDataForRange:(id)arg1 requestAuthorization:(BOOL)arg2 dataSource:(NSUInteger)arg3;
- (id)sleepDataForRange:(id)arg1;
- (id)sleepDataForPastWeekRequestAuthorization:(BOOL)arg1 dataSource:(NSUInteger)arg2;
- (void)unregisterSleepDataObserver:(id)arg1;
- (void)registerSleepDataObserver:(id)arg1;
- (id)init;

@end


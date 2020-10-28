//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKObjectType, NSString;

@protocol HDHealthDataCollector <NSObject>
@property BOOL disabled;
- (NSString *)dataCollectorDiagnosticDescription;
- (void)updateHistoricalDataForcedUpdate:(BOOL)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)updateHistoricalDataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)updateHistoricalData;
- (void)collectionStoppedForType:(HKObjectType *)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(HKObjectType *)arg2;
- (void)collectionStartedForType:(HKObjectType *)arg1 collectionInterval:(double)arg2;
@end


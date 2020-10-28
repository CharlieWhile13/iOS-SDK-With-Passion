//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject;
@protocol FCCoreConfiguration, FCCoreConfigurationObserving, OS_dispatch_queue;

@protocol FCCoreConfigurationManager <NSObject>
@property(readonly, nonatomic) id <FCCoreConfiguration> configuration;
- (void)removeObserver:(id <FCCoreConfigurationObserving>)arg1;
- (void)addObserver:(id <FCCoreConfigurationObserving>)arg1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(id <FCCoreConfiguration>, NSError *))arg2;
- (void)fetchConfigurationIfNeededWithCompletion:(void (^)(id <FCCoreConfiguration>, NSError *))arg1;
@end


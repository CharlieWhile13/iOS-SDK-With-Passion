//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDLocationEventDelegate-Protocol.h>
#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionObserver-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>
#import <HealthDaemon/HKWorkoutRouteDataSourceServerInterface-Protocol.h>

@class HDLocationDataCollector, HDWorkoutSessionServer, HKDataFlowLink, HKQuantity, HKUnit, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDWorkoutRouteDataSource : HDStandardTaskServer <HDWorkoutSessionObserver, HDLocationEventDelegate, HKDataFlowLinkProcessor, HKWorkoutRouteDataSourceServerInterface, HDWorkoutDataSource>
{
    HDWorkoutSessionServer *_sessionServer;
    HDLocationDataCollector *_locationDataCollector;
    HKDataFlowLink *_workoutDataFlowLink;
    HKUnit *_elevationUnit;
    HKQuantity *_currentElevation;
    HKQuantity *_latestAltitude;
    NSUUID *_workoutUUID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (id)_unitTest_locationDataCollector;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)_queue_createLocationDataCollectorWithActivityType:(NSUInteger)arg1 workoutUUID:(id)arg2;
- (void)_queue_setupLocationDataCollector;
- (id)_workoutBuilderServer;
- (void)_queue_recoverCurrentElevation;
- (void)altitudeUpdated:(double)arg1;
- (void)workoutRouteUpdated:(id)arg1;
- (void)elevationUpdated:(NSUInteger)arg1;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)remote_setupWithSessionIdentifier:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end


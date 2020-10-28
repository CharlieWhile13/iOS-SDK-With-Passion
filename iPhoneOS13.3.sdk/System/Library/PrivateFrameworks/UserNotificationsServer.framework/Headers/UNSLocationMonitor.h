//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSLocationMonitor : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (void)_queue_triggerDidFireForRegion:(id)arg1;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)setMonitoredRegions:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)markAsHavingReceivedLocation;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1;
- (id)initWithQueue:(id)arg1 locationManager:(id)arg2 observable:(id)arg3;
- (id)initWithQueue:(id)arg1 locationManager:(id)arg2;
- (id)init;

@end


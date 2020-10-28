//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOCountryConfigurationServerProxy-Protocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source, _GEOCountryConfigurationServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationLocalProxy : NSObject <_GEOCountryConfigurationServerProxy>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;
    id _countryCodeOverrideChangeListener;
}

// - (void).cxx_destruct;
- (void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(id /* CDUnknownBlockType */)arg2;
- (void)_updateCountryCodeWithCallbackQueue:(id)arg1 callback:(id /* CDUnknownBlockType */)arg2;
- (void)_determineCurrentCountryCode:(id /* CDUnknownBlockType */)arg1;
- (void)_scheduleUpdate;
- (void)_reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

@end


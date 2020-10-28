//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject
{
    NSLock *_lock;
    NSString *_hostname;
    struct __SCNetworkReachability _reachability;
    unsigned int _flags;
    struct __CFDictionary _observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (BOOL)hasObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithHostname:(id)arg1;

@end


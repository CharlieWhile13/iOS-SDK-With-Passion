//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMReachability : NSObject
{
    BOOL localWiFiRef;
    struct __SCNetworkReachability reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in )arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (NSUInteger)currentReachabilityStatus;
- (BOOL)connectionRequired;
- (NSUInteger)networkStatusForFlags:(unsigned int)arg1;
- (NSUInteger)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (BOOL)startNotifier;

@end


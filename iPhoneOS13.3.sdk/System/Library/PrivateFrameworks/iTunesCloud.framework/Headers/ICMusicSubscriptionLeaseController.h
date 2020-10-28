//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICEnvironmentMonitorObserver-Protocol.h>
#import <iTunesCloud/ICMusicSubscriptionLeaseSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionLeaseController : NSObject <ICEnvironmentMonitorObserver, ICMusicSubscriptionLeaseSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_accountDSIDToFairPlayKeyStatus;
    NSMutableDictionary *_cacheKeyToLeaseSession;
    BOOL _hasReceivedUserInteractionEvent;
    BOOL _isRemoteServerLikelyReachable;
    BOOL _isServerReachable;
    NSString *_lastKnownHouseholdID;
    int _leaseDidEndNotificationToken;
    NSOperationQueue *_leaseSessionPreparationOperationQueue;
}

+ (id)sharedController;
// - (void).cxx_destruct;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void)receivedUserInteractionEvent;
- (void)getLeaseSessionWithRequestContext:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getLastKnownHouseholdIDWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)musicLeaseSession:(id)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)musicLeaseSession:(id)arg1 didFinishPlaybackRequest:(id)arg2 withPlaybackResponse:(id)arg3 responseError:(id)arg4 updatedFairPlayKeyStatusList:(id)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)dealloc;
- (id)_init;

@end


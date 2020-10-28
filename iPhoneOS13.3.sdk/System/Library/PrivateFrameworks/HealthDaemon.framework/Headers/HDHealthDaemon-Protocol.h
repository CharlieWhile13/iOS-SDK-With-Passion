//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, HDXPCListener, NSArray, NSObject, NSString, Protocol, _HKBehavior;
@protocol HDHealthDaemonReadyObserver, HDNanoAlertSuppressionService, OS_dispatch_queue;

@protocol HDHealthDaemon <NSObject>
@property(readonly, nonatomic) _HKBehavior *behavior;
@property(retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService;
@property(readonly, nonatomic) HDPrimaryProfile *primaryProfile;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
- (NSArray *)daemonExtensionsConformingToProtocol:(Protocol *)arg1;
- (id)daemonExtensionWithIdentifier:(NSString *)arg1;
- (HDXPCListener *)createXPCListenerWithMachServiceName:(NSString *)arg1;
- (void)unregisterForLaunchNotification:(const char )arg1;
- (void)registerForLaunchNotification:(const char )arg1;
- (void)registerDaemonReadyObserver:(id <HDHealthDaemonReadyObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
@end


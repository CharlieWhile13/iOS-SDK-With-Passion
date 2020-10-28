//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDNotificationCenter, ASDServiceBroker;

@interface ASDAppLibrary : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
    ASDNotificationCenter *_notificationCenter;
}

+ (id)interface;
+ (void)uninstallApp:(id)arg1 withResultHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)launchMessagesExtensionForApp:(id)arg1 withResultHandler:(id /* CDUnknownBlockType */)arg2;
+ (long long)launchMessagesExtensionForApp:(id)arg1;
+ (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)launchApp:(id)arg1 withResultHandler:(id /* CDUnknownBlockType */)arg2;
+ (long long)launchApp:(id)arg1 onPairedDevice:(id)arg2;
+ (long long)launchApp:(id)arg1;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1 notificationCenter:(id)arg2;
- (id)init;

@end


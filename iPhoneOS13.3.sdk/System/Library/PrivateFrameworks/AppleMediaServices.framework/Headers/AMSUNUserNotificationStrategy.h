//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSUserNotificationStrategy-Protocol.h>

__attribute__((visibility("hidden")))
@interface AMSUNUserNotificationStrategy : NSObject <AMSUserNotificationStrategy>
{
}

+ (id)_centerForBundleId:(id)arg1;
+ (id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3;
+ (id)_removeNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;
+ (id)_activeNotificationsWithCenterBundleId:(id)arg1;

@end

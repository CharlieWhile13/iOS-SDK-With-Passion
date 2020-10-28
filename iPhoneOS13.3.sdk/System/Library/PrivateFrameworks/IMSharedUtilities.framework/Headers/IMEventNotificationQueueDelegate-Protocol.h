//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMEventNotificationQueue;

@protocol IMEventNotificationQueueDelegate <NSObject>

@optional
- (void)eventNotificationQueueDidSendNotifications:(IMEventNotificationQueue *)arg1;
- (void)eventNotificationQueueWillSendNotifications:(IMEventNotificationQueue *)arg1;
- (void)eventNotificationQueue:(IMEventNotificationQueue *)arg1 didChangePausedState:(BOOL)arg2;
- (void)eventNotificationQueue:(IMEventNotificationQueue *)arg1 didChangeBusyState:(BOOL)arg2;
@end


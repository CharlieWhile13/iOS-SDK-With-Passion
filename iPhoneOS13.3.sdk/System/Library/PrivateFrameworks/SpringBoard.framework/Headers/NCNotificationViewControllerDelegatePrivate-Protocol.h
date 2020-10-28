//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NCNotificationViewControllerDelegate-Protocol.h>

@class NCNotificationRequest, NCNotificationViewController;
@protocol NCAuxiliaryOptionsProviding, NCNotificationStaticContentProviding;

@protocol NCNotificationViewControllerDelegatePrivate <NCNotificationViewControllerDelegate>

@optional
- (id <NCAuxiliaryOptionsProviding>)notificationViewController:(NCNotificationViewController *)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 withLongLook:(BOOL)arg3;
- (id <NCNotificationStaticContentProviding>)notificationViewController:(NCNotificationViewController *)arg1 staticContentProviderForNotificationRequest:(NCNotificationRequest *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/UNUserNotificationCenterDelegate-Protocol.h>

@interface CKSceneController : NSObject <UNUserNotificationCenterDelegate>
{
}

- (id)_suppressionContextsForChatIdentifier:(id)arg1 personCentricID:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_starkManagerSharedInstance;
- (id)messagesSceneDelegate;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSCFBundle, UNSNotificationCategoryRepository;

@interface UNSNotificationRecordMapper : NSObject
{
    BSCFBundle *_bundle;
    UNSNotificationCategoryRepository *_categoryRepository;
}

// - (void).cxx_destruct;
- (id)_notificationTriggerForNotificationRecord:(id)arg1;
- (id)_notificationSoundForNotificationRecord:(id)arg1;
- (id)_notificationIconForNotificationRecord:(id)arg1;
- (id)_notificationContentForNotificationRecord:(id)arg1;
- (id)notificationRequestForNotificationRecord:(id)arg1;
- (id)notificationForNotificationRecord:(id)arg1;
- (id)initWithBundle:(id)arg1 categoryRepository:(id)arg2;

@end


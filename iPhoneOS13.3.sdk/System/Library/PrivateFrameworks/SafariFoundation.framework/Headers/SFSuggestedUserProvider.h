//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface SFSuggestedUserProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedEmails;
    NSArray *_suggestedNonEmails;
}

+ (id)sharedProvider;
// - (void).cxx_destruct;
- (void)_getSuggestedUsersFromSavedPasswords:(id)arg1 suggestedEmails:(id )arg2 suggestedNonEmails:(id )arg3;
- (void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)suggestedUsersOfType:(long long)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2;
- (id)_allCachedSuggestedUsersWithType:(long long)arg1;
- (void)_passwordStoreChangedNotification:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKPrivacyMaintainer : NSObject
{
}

+ (void)maintainPrivacyWithKnowledgeStorage:(id)arg1 installedApps:(id)arg2 deleteMaxCount:(NSUInteger)arg3 objectMaxCount:(NSUInteger)arg4 objectMaxLifespan:(double)arg5 activity:(id)arg6;
+ (id)deletionPredicateForBundleID:(id)arg1;

@end


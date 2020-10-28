//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ISSoftwareApplication, NSNumber, NSString;

@interface SUScriptSoftwareApplication : SUScriptObject
{
    ISSoftwareApplication *_application;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *softwareTypeNewsstand;
@property(readonly) long long launchResultSyncing;
@property(readonly) long long launchResultSuccess;
@property(readonly) long long launchResultSpringBoardUnavailable;
@property(readonly) long long launchResultSecurityPolicy;
@property(readonly) long long launchResultLockedOut;
@property(readonly) long long launchResultLocked;
@property(readonly) long long launchResultLaunchOrSuspendInProgress;
@property(readonly) long long launchResultInvalidArgument;
@property(readonly) long long launchResultApplicationNotFound;
@property(readonly) long long launchResultApplicationDisabled;
@property(readonly) NSString *environmentSandbox;
@property(readonly) NSString *environmentProduction;
@property(readonly) NSNumber *versionID;
@property(readonly) NSString *storeFrontID;
@property(readonly) NSString *softwareType;
@property(readonly) NSString *ratingSystem;
@property(readonly) NSNumber *ratingRank;
@property(readonly) NSNumber *dsID;
- (id)_className;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSString *bundleShortVersionString;
@property(readonly) NSString *bundleID;
@property(readonly) NSNumber *adamID;
- (long long)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3;
- (void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

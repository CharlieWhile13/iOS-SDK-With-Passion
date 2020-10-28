//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/FCTagSettingsDelegate-Protocol.h>

@class FCMTWriterLock, FCTagSettings, NSDate, NSDictionary, NSNumber, NSString;

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate>
{
    BOOL _useParsecResults;
    FCTagSettings *_tagSettings;
    NSDictionary *_readOnlyUserInfo;
    FCMTWriterLock *_userInfoLock;
}

+ (id)overrideFeldsparID;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (NSUInteger)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresPushNotificationSupport;
+ (id)userInfoCKRecordFromUserInfoDictionary:(id)arg1;
+ (id)iCloudDataKeys;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMTWriterLock *userInfoLock; // @synthesize userInfoLock=_userInfoLock;
@property(retain, nonatomic) NSDictionary *readOnlyUserInfo; // @synthesize readOnlyUserInfo=_readOnlyUserInfo;
@property(readonly, nonatomic) BOOL useParsecResults; // @synthesize useParsecResults=_useParsecResults;
@property(retain, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
// - (void).cxx_destruct;
- (id)_userInfoValueForKey:(id)arg1;
- (void)_modifyUserInfoWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)recordsForRestoringZoneName:(id)arg1;
- (BOOL)canHelpRestoreZoneName:(id)arg1;
- (void)_persistNotificationsUserID:(id)arg1;
- (void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2;
- (void)handleSyncWithDeletedUserInfoRecord;
- (void)handleSyncWithUserInfoRecord:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(BOOL)arg2;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)syncWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)asCKRecord;
@property(nonatomic) BOOL newIssueNotificationsEnabled;
@property(nonatomic) BOOL marketingNotificationsEnabled;
@property(copy, nonatomic) NSString *canonicalLanguage;
@property(copy, nonatomic) NSString *editorialArticleVersion;
@property(readonly, nonatomic) NSDate *dateLastViewedSaved;
- (void)markSavedAsViewed;
- (void)maybeUpdateOnboardingVersion:(id /* CDUnknownBlockType */)arg1;
- (void)updateOnboardingVersion;
- (void)refreshOnboardingVersion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL mightNeedToUpdateOnboardingVersion;
@property(copy, nonatomic) NSString *lastAppLaunchUpsellInstanceID;
@property(copy, nonatomic) NSNumber *upsellAppLaunchCount;
@property(copy, nonatomic) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property(copy, nonatomic) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property(copy, nonatomic) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property(copy, nonatomic) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property(nonatomic) BOOL userHasCompletedFavoritesSetup;
@property(nonatomic) BOOL hasShownProgressivePersonalizationWelcomeBrick;
@property(readonly, nonatomic) NSUInteger progressivePersonalization;
@property(readonly, nonatomic) BOOL shouldShowDefaultForYou;
@property(copy, nonatomic) NSDate *dateLastOpened;
@property(copy, nonatomic) NSDate *userStartDate;
@property(copy, nonatomic) NSNumber *onboardingVersionNumber;
@property(readonly, copy, nonatomic) NSString *notificationsUserID;
@property(copy, nonatomic) NSString *feldsparID;
- (void)prepareForUse;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

@end


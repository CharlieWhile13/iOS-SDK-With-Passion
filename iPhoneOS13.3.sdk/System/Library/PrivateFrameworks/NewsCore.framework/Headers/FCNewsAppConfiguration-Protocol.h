//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCoreConfiguration-Protocol.h>
#import <NewsCore/NFCopying-Protocol.h>

@class FCIAdConfiguration, FCPrefetchConfiguration, NSArray, NSString, NTPBDiscoverMoreVideosInfo;

@protocol FCNewsAppConfiguration <FCCoreConfiguration, NFCopying>
@property(readonly, nonatomic) NSString *articleRecirculationComponentPlacementConfigJSON;
@property(readonly, nonatomic) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) NSUInteger trendingStyle;
@property(readonly, copy, nonatomic) NSArray *topStoriesPublishDates;
@property(readonly, nonatomic) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(readonly, nonatomic) long long autoRefreshMinimumInterval;
@property(readonly, nonatomic) long long stateRestorationAllowedTimeWindow;
@property(readonly, nonatomic) NSArray *mediaSharingBlacklistedChannelIDs;
@property(readonly, nonatomic) NSArray *externalAnalyticsConfigurations;
@property(readonly, nonatomic) NSString *exploreArticleID;
@property(readonly, nonatomic) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForSingleArticle;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForArticleList;
@property(readonly, nonatomic) NSString *personalizationFavorabilityResourceId;
@property(readonly, nonatomic) NSString *personalizationWhitelistResourceId;
@property(readonly, nonatomic) NSString *personalizationUrlMappingResourceId;
@property(readonly, nonatomic) NSString *personalizationBundleIdMappingResourceId;
@property(readonly, nonatomic) long long analyticsEndpointMaxPayloadSize;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationStart;
@property(readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property(readonly, nonatomic) NSString *widgetConfigID;
@property(readonly, nonatomic) double parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor;
@property(readonly, nonatomic) BOOL universalLinksEnabled;
@property(readonly, nonatomic) NSString *embedConfigurationAssetID;
@property(readonly, nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property(readonly, nonatomic) long long notificationArticleCacheTimeout;
@property(readonly, nonatomic) long long newFavoriteNotificationAlertsFrequency;
@property(readonly, nonatomic) FCPrefetchConfiguration *prefetchConfig;
@property(readonly, nonatomic) FCIAdConfiguration *iAdConfig;
@property(readonly, nonatomic) double tileProminenceScoreBalanceValue;
@property(readonly, nonatomic) double prerollLoadingTimeout;
@property(readonly, nonatomic) double interstitialAdLoadDelay;
@property(readonly, nonatomic) long long autoScrollToTopFeedTimeout;
@property(readonly, nonatomic) NSArray *onboardingFeedIDs;

@optional
@property(readonly, nonatomic) NSString *localAreasMappingResourceId;
@property(readonly, nonatomic) BOOL enableLocationBasedAutofavorites;
@property(readonly, nonatomic) long long emailSignupRequiredAppLaunchCount;
@property(readonly, nonatomic) NSUInteger bestOfBundleFeedGroupKind;
@property(readonly, nonatomic) NSUInteger likeDislikeBehavior;
@property(readonly, nonatomic) long long maximumTrendingGroupSizeiPhone;
@property(readonly, nonatomic) long long maximumTrendingGroupSizeiPad;
@property(readonly, nonatomic) long long feedContentExposureTestMaximumInterval;
@property(readonly, nonatomic) long long criticalStorageThreshold;
@property(readonly, nonatomic) long long lowStorageThreshold;
@property(readonly, nonatomic, getter=isArticleToolbarCompressionEnabled) BOOL articleToolbarCompressionEnabled;
@property(readonly, nonatomic) NSString *issueArticleRecirculationConfigJSON;
@property(readonly, nonatomic) NSString *translationMapResourceID;
@property(readonly, nonatomic) BOOL enableBadgeInSpotlightTabBar;
@property(readonly, nonatomic) NSString *anfRenderingConfiguration;
@property(readonly, nonatomic) NSString *webEmbedContentBlockerOverrides;
@property(readonly, nonatomic) NSString *webEmbedContentBlockers;
@property(readonly, nonatomic) NSString *feedNavigationConfigJSON;
@property(readonly, nonatomic) BOOL disableThumbnailsForArticleRecirculation;
@property(readonly, nonatomic) long long articleRecirculationPopularFeedQueryTimeRange;
@property(readonly, nonatomic) BOOL isExpired;
@end


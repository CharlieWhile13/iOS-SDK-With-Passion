//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

#import <MediaPlaybackCore/AVAssetResourceLoaderDelegate-Protocol.h>
#import <MediaPlaybackCore/AVPlayerItemMetadataOutputPushDelegate-Protocol.h>
#import <MediaPlaybackCore/ICEnvironmentMonitorObserver-Protocol.h>
#import <MediaPlaybackCore/MPRTCReportingItemSessionCreating-Protocol.h>

@class ICMusicSubscriptionLeaseSession, ICMusicSubscriptionLeaseStatus, ICStoreRequestContext, MPCModelGenericAVItemTimedMetadataRequest, MPCModelGenericAVItemTimedMetadataResponse, MPCModelGenericAVItemUserIdentityPropertySet, MPCPlaybackRequestEnvironment, MPCSuzeLeaseSession, MPMediaLibrary, MPModelGenericObject, MPPropertySet, MPSubscriptionStatusPlaybackInformation, NSArray, NSData, NSDictionary, NSNumber, NSObject, NSOperationQueue, NSString, NSURL;
@protocol MPCModelPlaybackAssetCacheProviding, MPCReportingIdentityPropertiesLoading, OS_dispatch_queue;

@interface MPCModelGenericAVItem : MPAVItem <AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, ICEnvironmentMonitorObserver, MPRTCReportingItemSessionCreating>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _allowsAirPlayFromCloud;
    NSNumber *_bookmarkTime;
    BOOL _hasLoadedSubscriptionLeaseSession;
    NSObject<OS_dispatch_queue> *_subscriptionLeaseSessionLoadQueue;
    ICMusicSubscriptionLeaseSession *_subscriptionLeaseSession;
    BOOL _hasLoadedSubscriptionPlaybackInformation;
    MPSubscriptionStatusPlaybackInformation *_subscriptionPlaybackInformation;
    NSObject<OS_dispatch_queue> *_subscriptionPlaybackInformationLoadQueue;
    BOOL _shouldAutomaticallyRefreshSubscriptionLease;
    BOOL _isAssetSubscriptionProtectionType;
    BOOL _isSubscriptionPolicyContent;
    BOOL _lastPreparedForNonZeroRate;
    long long _subscriptionLeaseRequestCount;
    BOOL _didDeferPreventionStatusUpdate;
    MPCSuzeLeaseSession *_suzeLeaseSession;
    BOOL _isAutomaticallyRefreshingSuzeLeaseSession;
    id /* CDUnknownBlockType */ _firstBecomeActivePlayerItemBlock;
    NSArray *_currentGlobalTimedMetadataGroups;
    MPModelGenericObject *_flattenedGenericObject;
    MPModelGenericObject *_flattenedMetadataGenericObject;
    MPModelGenericObject *_metadataGenericObject;
    MPPropertySet *_itemProperties;
    id <MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
    MPCModelGenericAVItemTimedMetadataRequest *_timedMetadataRequest;
    MPCModelGenericAVItemTimedMetadataResponse *_timedMetadataResponse;
    NSOperationQueue *_timedMetadataOperationQueue;
    BOOL _isMusicCellularStreamingAllowed;
    BOOL _isHLSAsset;
    BOOL _isiTunesStoreStream;
    ICStoreRequestContext *_storeRequestContext;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_streamingKeyServerURL;
    id _rtcReportingParentHierarchyToken;
    NSString *_rtcReportingServiceIdentifier;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    BOOL supportsRadioTrackActions;
    BOOL _radioPlayback;
    BOOL _radioStreamPlayback;
    BOOL _subscriptionRequired;
    long long _leasePlaybackPreventionState;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    id <MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
    NSString *_assetSourceStoreFrontID;
    long long _equivalencySourceAdamID;
    MPModelGenericObject *_genericObject;
    NSData *_jingleTimedMetadata;
    MPMediaLibrary *_mediaLibrary;
    NSNumber *_siriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    long long _stationItemLikedState;
    NSDictionary *_trackInfo;
}

+ (id)_utilitySerialQueue;
+ (BOOL)_prefersHighQualityVideoContentForNetworkType:(long long)arg1;
+ (BOOL)_prefersHighQualityAudioContentForNetworkType:(long long)arg1;
@property(retain, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) long long stationItemLikedState; // @synthesize stationItemLikedState=_stationItemLikedState;
@property(readonly, copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
@property(nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired; // @synthesize subscriptionRequired=_subscriptionRequired;
@property(nonatomic, getter=isRadioStreamPlayback) BOOL radioStreamPlayback; // @synthesize radioStreamPlayback=_radioStreamPlayback;
@property(nonatomic, getter=isRadioPlayback) BOOL radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property(copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // @synthesize siriInitiated=_siriInitiated;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(readonly, copy, nonatomic) NSData *jingleTimedMetadata; // @synthesize jingleTimedMetadata=_jingleTimedMetadata;
@property(retain, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property(copy, nonatomic) NSString *assetSourceStoreFrontID; // @synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID;
@property(retain, nonatomic) id <MPCModelPlaybackAssetCacheProviding> assetCacheProvider; // @synthesize assetCacheProvider=_assetCacheProvider;
@property(nonatomic) BOOL supportsRadioTrackActions; // @synthesize supportsRadioTrackActions;
- (id)leaseStatus;
- (long long)leasePlaybackPreventionState;
// - (void).cxx_destruct;
- (void)_updatePreventionStatusWithLeaseSession:(id)arg1;
- (void)_updateJingleTimedMetadata;
- (void)_updateBookmarkTime:(double)arg1 isCheckpoint:(BOOL)arg2;
- (void)_updateAutomaticSubscriptionLeaseRefresh;
- (id)_storeUbiquitousIdentifier;
- (id)_stopTime;
- (double)_startTime;
- (id)_storeRequestContext;
- (BOOL)_shouldRememberBookmarkTime;
- (id)_rtcReportingServiceIdentifierWithAssetURL:(id)arg1;
- (id)_radioStation;
- (void)_postInvalidationNotifications;
- (id)_modelPlaybackPosition;
- (id)_isPrivateListeningEnabled;
- (void)_invalidateContentItem;
- (void)_updateHasBeenPlayedWithElapsedTime:(double)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_handlePlaybackFinishedTime:(double)arg1 didFinishByHittingEnd:(BOOL)arg2;
- (void)_getUnverifiedSubscriptionLeaseSessionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_getSubscriptionLeasePropertiesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)_bookmarkTime;
- (void)_applyPreferredPeakBitRateToPlayerItem:(id)arg1 withItemType:(long long)arg2;
- (void)_applyLoudnessInfo;
- (BOOL)_allowsStreamingPlayback;
- (BOOL)_allowsAssetCaching;
- (CDStruct_4a9aa5a8)_timeoutValues;
- (void)_timedMetadataResponseDidInvalidateNotification:(id)arg1;
- (void)_suzeLeaseSessionRenewDidFailNotification:(id)arg1;
- (void)_subscriptionLeaseStatusDidChangeNotification:(id)arg1;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_reloadTimedMetadataRequest;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
@property(readonly, nonatomic) long long rtcReportingAssetType;
@property(readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier;
@property(readonly, nonatomic) id rtcReportingParentHierarchyToken;
- (id)mpcReporting_trackInfo;
- (id)mpcReporting_siriInitiated;
- (id)mpcReporting_privateListeningEnabled;
- (BOOL)mpcReporting_shouldReportPlayEventsToStore;
- (BOOL)mpcReporting_shouldUseRelativeTimePositions;
- (id)mpcReporting_requestingBundleVersion;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_jingleTimedMetadata;
- (id)mpcReporting_identityPropertiesLoader;
- (NSUInteger)mpcReporting_itemType;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id /* CDUnknownBlockType */)artworkCatalogBlock;
- (void)_willResignActivePlayerItem;
- (void)_willBecomeActivePlayerItem;
- (long long)_persistedLikedState;
- (void)_handleUpdatedLikedState:(long long)arg1 forUserIdentity:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (BOOL)usesSubscriptionLease;
- (id)useListeningHistory;
- (id)storeFrontIdentifier;
- (id)storeAccountID;
- (BOOL)shouldPreventPlayback;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)resolvePlaybackError:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)requiresLoadedAssetForAirPlayProperties;
- (id)bookmarkTime;
- (BOOL)allowsExternalPlayback;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)canUseLoadedAsset;
- (float)userRating;
- (BOOL)useEmbeddedChapterData;
- (id)urlTimeMarkers;
- (long long)type;
- (id)playbackInfo;
- (id)containerUniqueID;
- (BOOL)hasTimeSyncedLyrics;
- (BOOL)hasStoreLyrics;
- (id)libraryLyrics;
- (BOOL)supportsLikedState;
- (long long)storeSubscriptionAdamID;
- (long long)storeItemInt64ID;
- (id)stationStringID;
- (id)stationName;
- (id)stationHash;
- (long long)stationID;
@property(readonly, nonatomic) BOOL shouldReportPlayEventsToStore;
- (void)setRating:(float)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)reevaluateType;
- (void)prepareForRate:(float)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)prefersSeekOverSkip;
- (BOOL)shouldShowComposer;
- (id)playbackError;
- (void)notePlaybackFinishedByHittingEnd;
- (long long)storePurchasedAdamID;
- (NSUInteger)composerPersistentID;
- (NSUInteger)genrePersistentID;
- (NSUInteger)artistPersistentID;
- (NSUInteger)albumArtistPersistentID;
- (NSUInteger)albumPersistentID;
- (id)cloudAlbumID;
- (id)cloudUniversalLibraryID;
- (id)personID;
- (NSUInteger)cloudID;
- (id)databaseID;
- (NSUInteger)persistentID;
- (NSUInteger)mediaType;
- (id)modelGenericObject;
- (id)mediaItem;
- (id)mainTitle;
- (void)loadAssetAndPlayerItem;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (BOOL)isStreamable;
- (BOOL)isRadioItem;
- (BOOL)isLikedStateEnabled;
- (BOOL)isExplicitTrack;
- (BOOL)isAssetURLValid;
- (BOOL)isAlwaysLive;
- (id)genre;
- (id)externalContentIdentifier;
- (double)durationFromExternalMetadata;
- (id)copyrightText;
- (id)chapterTimeMarkers;
- (id)composer;
- (id)artworkTimeMarkers;
- (id)artist;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1;
- (BOOL)allowsEQ;
- (NSUInteger)albumTrackCount;
- (NSUInteger)albumTrackNumber;
- (long long)artistStoreID;
- (long long)albumStoreID;
- (id)albumArtist;
- (long long)albumYear;
- (id)album;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithGenericObject:(id)arg1 itemProperties:(id)arg2 playbackRequestEnvironment:(id)arg3 identityPropertySet:(id)arg4;

@end


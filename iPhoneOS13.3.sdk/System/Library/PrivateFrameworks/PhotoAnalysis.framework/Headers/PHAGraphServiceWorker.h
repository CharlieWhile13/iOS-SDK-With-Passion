//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import <PhotoAnalysis/PGGraphDataModelEnrichmentManagerDelegate-Protocol.h>
#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisGraphServiceProtocol-Protocol.h>

@class NSDate, NSDictionary, NSHashTable, NSMutableDictionary, NSObject, NSProgress, PGManager, PHAPredicateValidator;
@protocol OS_dispatch_queue, OS_os_transaction, PGGraphHealthRecording;

@interface PHAGraphServiceWorker : PHAWorker <PHAGraphRegistration, PGGraphDataModelEnrichmentManagerDelegate, PLPhotoAnalysisGraphServiceProtocol>
{
    NSUInteger _inq_state;
    BOOL _serviceEnabled;
    NSDate *_lastTodayWidgetMemoryCreationDate;
    NSDictionary *_snapshotFilenameLookup;
    NSUInteger _pendingGraphRequests;
    id <PGGraphHealthRecording> _graphHealthRecorder;
    NSProgress *_currentGraphRebuildProgress;
    PGManager *_graphManager;
    NSMutableDictionary *_pendingGraphReadyCallbacks;
    PHAPredicateValidator *_relatedRequestPredicateValidator;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSDate *_lastLibraryChangeGraphUpdateJobCompletionDate;
    NSHashTable *_pendingRequestReferences;
    long long _pendingRequestReferenceCount;
    NSObject<OS_os_transaction> *_graphWorkerWarmedUpTransaction;
}

+ (void)initialize;
+ (id)stringFromGraphServiceState:(NSUInteger)arg1;
+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
+ (void)configureXPCConnection:(id)arg1;
@property(retain, nonatomic) NSObject<OS_os_transaction> *graphWorkerWarmedUpTransaction; // @synthesize graphWorkerWarmedUpTransaction=_graphWorkerWarmedUpTransaction;
@property(nonatomic) long long pendingRequestReferenceCount; // @synthesize pendingRequestReferenceCount=_pendingRequestReferenceCount;
@property(retain, nonatomic) NSHashTable *pendingRequestReferences; // @synthesize pendingRequestReferences=_pendingRequestReferences;
@property(retain, nonatomic) NSDate *lastLibraryChangeGraphUpdateJobCompletionDate; // @synthesize lastLibraryChangeGraphUpdateJobCompletionDate=_lastLibraryChangeGraphUpdateJobCompletionDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
@property(retain, nonatomic) PHAPredicateValidator *relatedRequestPredicateValidator; // @synthesize relatedRequestPredicateValidator=_relatedRequestPredicateValidator;
@property(retain, nonatomic) NSMutableDictionary *pendingGraphReadyCallbacks; // @synthesize pendingGraphReadyCallbacks=_pendingGraphReadyCallbacks;
@property(retain, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property(retain, nonatomic) NSProgress *currentGraphRebuildProgress; // @synthesize currentGraphRebuildProgress=_currentGraphRebuildProgress;
// - (void).cxx_destruct;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateDidStop;
- (BOOL)wantsGraphUpdateNotifications;
- (BOOL)wantsLiveGraphUpdates;
- (void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_shouldAggregateDataForReporting:(NSUInteger)arg1;
- (void)_logAggregatedStatistics:(id)arg1;
- (id)_dataAggregationKeyForCategory:(NSUInteger)arg1 subCategory:(NSUInteger)arg2 lookupTable:(id)arg3;
- (id)_aggregatedStatsForMoodKeywordCountedSet:(id)arg1;
- (id)_aggregatedStatsForMiroMoodCountVector:(id)arg1;
- (id)_aggregatedStatsForPossibleMoodCountVector:(id)arg1;
- (id)_aggregatedStatsForSuggestedMoodCountVector:(id)arg1;
- (id)_PHMemoryBlacklistedFeatureTypeValueToDataAggregationKeyLookup;
- (id)_PHMemoryBlacklistableFeatureTypeValueToDataAggregationKeyLookup;
- (id)_PHMemoryCategoryValueToDataAggregationKeyLookup;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(id /* CDUnknownBlockType */)arg5;
- (void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (id)_assetCollectionForRelatedIdentifier:(id)arg1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(id /* CDUnknownBlockType */)arg7;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 context:(id)arg5 reply:(id /* CDUnknownBlockType */)arg6;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)requestHighlightEstimatesWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(NSUInteger)arg4 relatedType:(NSUInteger)arg5 context:(id)arg6 reply:(id /* CDUnknownBlockType */)arg7;
- (void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(NSUInteger)arg4 relatedType:(NSUInteger)arg5 context:(id)arg6 reply:(id /* CDUnknownBlockType */)arg7;
- (void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(id /* CDUnknownBlockType */)arg5;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(id /* CDUnknownBlockType */)arg5;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (NSUInteger)_validatedMemoryNotificationState:(int)arg1;
- (void)didCompleteRebuildOrDiffSuccessfully;
- (BOOL)shouldAllowBackgroundActivityWithDescription:(id)arg1;
- (id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2;
- (long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1;
- (id)_collectionListForLocalIdentifier:(id)arg1;
- (id)_assetCollectionForLocalIdentifier:(id)arg1;
- (id)informationDictionaryForAsset:(id)arg1;
- (void)stopProcessingGraphUpdateJob:(id)arg1;
- (void)startProcessingGraphUpdateJob:(id)arg1;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id )arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id )arg2;
- (void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestM5CompatibleMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (id)_diagnosticsLogsRootFolderPath;
- (void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(NSUInteger)arg2 precision:(NSUInteger)arg3 options:(id)arg4 context:(id)arg5 reply:(id /* CDUnknownBlockType */)arg6;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(NSUInteger)arg3 options:(id)arg4 context:(id)arg5 reply:(id /* CDUnknownBlockType */)arg6;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (id)libraryTemporarilyUnavailableError;
- (id)currentlyUnavailableError;
- (long long)unavailableErrorCodeForCurrentState;
- (BOOL)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)shouldStopOperationInProgress;
- (BOOL)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
- (void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (id)_propertiesFromMemory:(id)arg1;
- (void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (id)_memoryInfoFromMemory:(id)arg1 options:(id)arg2;
- (id)_basicPropertiesFromMemory:(id)arg1;
- (void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)_processMoodForMemory:(id)arg1 withMoodHistory:(id)arg2;
- (id)_infoForNotificationQualityOfMemory:(id)arg1;
- (id)_infoForGraphCollectionBasedMemory:(id)arg1;
- (id)_infoForMomentsBackingMemory:(id)arg1;
- (id)_minimalLegacyFeatureVectorWithMemory:(id)arg1;
- (id)_featureVectorWithMemory:(id)arg1;
- (long long)_phTitleCategoryForPGTitleCategory:(long long)arg1;
- (id)_infoForMemory:(id)arg1 representativeAssetCount:(NSUInteger)arg2 isTransientMemory:(BOOL)arg3;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)enrichDataModelWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)invalidateGraphWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)_markEnrichmentNeededFollowingBackgroundRebuild:(BOOL)arg1;
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 isRequestedRebuild:(BOOL)arg3 progressHandler:(id /* CDUnknownBlockType */)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (id)statusAsDictionary;
- (void)handleOperation:(id)arg1;
- (void)pendingRequestReferenceDidDeallocateForAddress:(void )arg1;
- (id)pendingRequestReferenceForLabel:(id)arg1;
@property(nonatomic) NSUInteger state;
- (NSUInteger)synchronousOffQueueState;
- (void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 progressHandler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)metricReportingJobWithScenario:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)enrichmentManager:(id)arg1 didCancelProcessor:(id)arg2;
- (void)enrichmentManager:(id)arg1 didRunProcessor:(id)arg2;
- (BOOL)enrichmentManager:(id)arg1 shouldRunProcessor:(id)arg2;
- (void)enrichDataModelWithOptions:(id)arg1 isBackgroundEnrichmentJob:(BOOL)arg2 context:(id)arg3 progressHandler:(id /* CDUnknownBlockType */)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)graphProcessHistoricalChangeJobWithScenario:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)graphRebuildJobWithScenario:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)dataModelEnrichmentJobWithScenario:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)backgroundMemoryGenerationJobWithScenario:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)shutdownAndWaitForGraphManager;
- (void)setupGraphManagerWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_graphShouldBeConnected;
- (BOOL)canRunWhenGraphIsLoaded;
- (void)shutdown;
- (void)cooldown;
- (void)callAndClearPendingReadyCallbacksWithResult:(BOOL)arg1 error:(id)arg2;
- (void)warmupWithProgressBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)retryStartup;
- (BOOL)checkForWritablePersistentStorageDirectoryURL;
- (void)startup;
- (BOOL)isQuiescent;
- (BOOL)isEnabled;
@property(readonly, nonatomic) NSDate *dateOfLastGraphRebuild;
- (void)markLastBackgroundGraphConsistencyUpdateJobDate;
- (void)markLastBackgroundGraphRebuildJobDate;
- (id)nextAdditionalJobWithScenario:(NSUInteger)arg1 requestReason:(NSUInteger)arg2;
- (BOOL)didExceedtimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2;
- (BOOL)hasAdditionalJobForDataModelEnrichmentInScenario:(NSUInteger)arg1;
- (BOOL)hasAdditionalJobForGraphRebuildInScenario:(NSUInteger)arg1;
- (BOOL)hasAdditionalJobForMetricsReportingInScenario:(NSUInteger)arg1;
- (BOOL)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(NSUInteger)arg1;
- (BOOL)hasAdditionalJobsForScenario:(NSUInteger)arg1 requestReason:(NSUInteger)arg2;
- (BOOL)hasAdditionalJobForGraphConsistencyUpdateInScenario:(NSUInteger)arg1 requestReason:(NSUInteger)arg2;
- (void)setupPredicateValidator;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

@end


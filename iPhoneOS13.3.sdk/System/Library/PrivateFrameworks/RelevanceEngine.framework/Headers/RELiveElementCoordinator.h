//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REElementCoordinator.h>

#import <RelevanceEngine/REDataSourceManagerObserver-Protocol.h>
#import <RelevanceEngine/REElementDataSourceActivityDelegate-Protocol.h>
#import <RelevanceEngine/REElementDataSourceControllerDelegate-Protocol.h>
#import <RelevanceEngine/REElementRelevanceEngineDelegate-Protocol.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSObject, REElementRelevanceEngine, REUpNextScheduler;
@protocol OS_dispatch_queue;

@interface RELiveElementCoordinator : REElementCoordinator <REElementDataSourceControllerDelegate, REElementRelevanceEngineDelegate, REElementDataSourceActivityDelegate, REDataSourceManagerObserver>
{
    REElementRelevanceEngine *_relevanceEngine;
    NSMutableDictionary *_elementIdElementMap;
    REUpNextScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_controllerQueue;
    NSUInteger _scheduleCount;
    BOOL _reloadImmediately;
    NSCountedSet *_remainingInsertOperations;
    NSCountedSet *_remainingRemoveOperations;
    NSUInteger _currentReloadTryCount;
    NSMutableSet *_refreshedElements;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

// - (void).cxx_destruct;
- (void)_onqueue_async:(id /* CDUnknownBlockType */)arg1;
- (void)relevanceEngine:(id)arg1 didUpdateRelevanceOfElement:(id)arg2;
- (void)relevanceEngine:(id)arg1 elementWasRemoved:(id)arg2;
- (void)relevanceEngine:(id)arg1 elementWasAdded:(id)arg2;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 performedBatchUpdates:(id /* CDUnknownBlockType */)arg2;
- (void)_queue_scheduleContentUpdate:(BOOL)arg1;
- (void)_queue_reload;
- (void)_queue_removeElement:(id)arg1;
- (void)_queue_refreshElement:(id)arg1;
- (BOOL)_queue_reloadElement:(id)arg1 withElement:(id)arg2;
- (void)_queue_reloadElement:(id)arg1;
- (void)_queue_addElement:(id)arg1 toSection:(id)arg2;
- (void)dataSource:(id)arg1 didFinishActivity:(id)arg2;
- (void)dataSource:(id)arg1 didBeginActivity:(id)arg2;
- (BOOL)elementDataSourceController:(id)arg1 isElementVisible:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didRefreshElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didRemoveElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didReloadElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didAddElement:(id)arg2 toSection:(id)arg3;
- (void)elementDataSourceController:(id)arg1 performBatchUpdates:(id /* CDUnknownBlockType */)arg2;
- (id)_predictionForElement:(id)arg1;
- (id)elementRankerForSection:(id)arg1;
- (id)featureProviderForElementAtPath:(id)arg1;
- (id)featureProviderForElement:(id)arg1;
- (id)predictionForElement:(id)arg1;
- (id)predictionForElementAtPath:(id)arg1;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1 toSection:(id)arg2;
- (void)dataSourceManager:(id)arg1 willUnloadDataSourceController:(id)arg2;
- (void)dataSourceManager:(id)arg1 didLoadDataSourceController:(id)arg2;
- (void)_enumerateSectionsWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_enumerateSectionsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)elementForElementId:(id)arg1;
- (id)featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)featureMapForElementId:(id)arg1 trainingContext:(id)arg2;
- (id)elementRelevanceEngine;

@end


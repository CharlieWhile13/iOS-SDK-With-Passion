//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ISObservable : NSObject
{
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    NSUInteger _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
    BOOL _hasObservers;
}

@property(readonly, nonatomic) BOOL hasObservers; // @synthesize hasObservers=_hasObservers;
// - (void).cxx_destruct;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_applyPendingChanges;
- (void)_publishChanges;
- (void)_didChange;
- (void)_willChange;
- (void)_setHasObservers:(BOOL)arg1;
- (void)enumerateObserversUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)signalChange:(NSUInteger)arg1;
- (void)hasObserversDidChange;
- (void)didPublishChanges;
- (void)didPerformChanges;
- (void)willPerformChanges;
- (id)mutableChangeObject;
- (void)unregisterChangeObserver:(id)arg1 context:(void )arg2;
- (void)registerChangeObserver:(id)arg1 context:(void )arg2;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end


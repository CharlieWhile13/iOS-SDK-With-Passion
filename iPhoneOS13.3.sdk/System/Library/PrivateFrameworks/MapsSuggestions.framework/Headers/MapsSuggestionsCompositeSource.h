//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate-Protocol.h>

@class MapsSuggestionsSuppressor, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate>
{
    NSMutableSet _sources;
    NSMutableDictionary *_nextUpdateTimes;
    struct Queue _queue;
    NSObject<OS_dispatch_source> *_updateTimer;
    MapsSuggestionsSuppressor *_suppressor;
    BOOL _running;
}

+ (NSUInteger)disposition;
+ (BOOL)isEnabled;
@property BOOL running; // @synthesize running=_running;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)test_resetSuppressions;
- (double)test_suppressionDurationForBehavior:(long long)arg1 type:(long long)arg2;
- (id)test_dateUntilSuppressedEntry:(id)arg1;
- (void)test_sync;
- (NSSet )children;
- (BOOL)removeChildSource:(id)arg1;
- (BOOL)addChildSource:(id)arg1;
- (BOOL)detachSource:(id)arg1;
- (BOOL)attachSource:(id)arg1;
- (NSUInteger)addOrUpdateSuggestionEntries:(NSArray )arg1 source:(NSString )arg2;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (double)_suppressionTimeForEntry:(id)arg1 snoozeOnly:(BOOL)arg2;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)_updateChildSourcesForType:(long long)arg1;
- (void)_updateChildSourcesForceAll:(BOOL)arg1;
- (double)_updateChildSource:(id)arg1;
- (void)_stopUpdateChildSources;
- (void)_scheduleNextUpdateChildSourcesWithin:(double)arg1;
- (void)_startUpdateChildSources;
- (void)_initUpdateTimerIfNecessary;
- (BOOL)_shouldUpdateSource:(id)arg1;

@end


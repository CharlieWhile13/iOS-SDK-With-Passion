//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteFetchRequest, NSMutableOrderedSet;
@protocol CNAutocompleteFetchDelegate, CNFuture, CNPromise;

@interface CNAutocompleteQueryResponsePreparer : NSObject
{
    NSMutableOrderedSet *_previouslyReturnedResults;
    id <CNAutocompleteFetchDelegate> _delegate;
    CNAutocompleteFetchRequest *_fetchRequest;
    id <CNFuture> _priorityResultsFuture;
    id <CNPromise> _matchingPriorityResultsPromise;
}

+ (id)makeBundleIdentifierOfCurrentProcess;
+ (id)bundleIdentifierOfCurrentProcess;
@property(retain, nonatomic) id <CNPromise> matchingPriorityResultsPromise; // @synthesize matchingPriorityResultsPromise=_matchingPriorityResultsPromise;
@property(retain, nonatomic) id <CNFuture> priorityResultsFuture; // @synthesize priorityResultsFuture=_priorityResultsFuture;
@property(readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) __weak id <CNAutocompleteFetchDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)suppressResultsWithAddresses:(id)arg1;
- (id)askDelegateToAdjustResults;
- (id)sortResults;
- (id)addDiagnosticLog:(id /* CDUnknownBlockType */)arg1;
- (id)resultsNotPreviouslyReturned:(id)arg1;
- (id)findUniqueResults:(id)arg1;
- (BOOL)resultIdentifierIsValidMessagesChatGuid:(id)arg1;
- (BOOL)resultMatchesPrefix:(id)arg1 inNameComponentsOfResult:(id)arg2;
- (id)partitionCandidatesForRanking:(id)arg1;
- (id)applyPriorityResultsOrder:(id)arg1;
- (id)prepareResults:(id)arg1;
- (id)initWithDelegate:(id)arg1 fetchRequest:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end


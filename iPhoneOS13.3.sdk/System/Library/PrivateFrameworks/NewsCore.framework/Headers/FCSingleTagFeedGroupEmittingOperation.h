//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCSingleTagFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
}

- (void)_fetchPinnedHeadlinesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_fetchOrdinaryHeadlinesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_runningPPT;
- (id)feedTransformations;
- (NSUInteger)feedItemsToFetchForDesiredHeadlineCount:(NSUInteger)arg1;
- (void)supplementFeedItems:(id)arg1 fromCursor:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)performOperation;

@end


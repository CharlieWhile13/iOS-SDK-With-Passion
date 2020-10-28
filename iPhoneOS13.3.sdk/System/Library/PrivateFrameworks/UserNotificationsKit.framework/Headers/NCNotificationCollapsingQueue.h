//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface NCNotificationCollapsingQueue : NSObject
{
    NSUInteger _collapsingThreshold;
    NSMutableArray *_requests;
}

@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(nonatomic) NSUInteger collapsingThreshold; // @synthesize collapsingThreshold=_collapsingThreshold;
// - (void).cxx_destruct;
- (id)_collapsedNotificationRequestForNotificationRequest:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)_collapsedNotificationRequestFromCollapsibleRequests:(id)arg1;
- (NSUInteger)_collapsedCountForCollapsibleRequests:(id)arg1;
- (id)_requestsCollapsibleWithNotificationRequest:(id)arg1;
- (NSUInteger)_indexOfRequestMatchingNotificationRequest:(id)arg1;
- (void)_insertPreemptingNotificationRequest:(id)arg1;
- (id)notificationRequestsCoalescebleWithCoalescedRequest:(id)arg1;
- (id)peekNextNotificationRequestPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)peekNextNotificationRequest;
- (BOOL)containsNotificationRequestMatchingRequest:(id)arg1;
- (BOOL)containsNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)replaceNotificationRequest:(id)arg1;
- (void)addNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSArray *enqueuedRequestIdentifiers;
@property(readonly, nonatomic) NSUInteger count;
- (id)init;

@end


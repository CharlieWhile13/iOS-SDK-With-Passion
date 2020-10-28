//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKQuery.h>

#import <DuetRecommendation/_DKExecutableQuery-Protocol.h>

@class NSObject, NSPredicate, _DRTopicInterestSummary;
@protocol OS_dispatch_queue;

@interface _DRTopicStatisticsQuery : _DKQuery <_DKExecutableQuery>
{
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSPredicate *_predicate;
    _DRTopicInterestSummary *_summary;
}

+ (id)sumExpression;
+ (id)countExpression;
+ (id)topicStatisticsQueryWithFilter:(id)arg1;
+ (id)topicStatisticsQuery;
@property(retain) _DRTopicInterestSummary *summary; // @synthesize summary=_summary;
// - (void).cxx_destruct;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id )arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (void)clearSummary;
- (id)initWithPredicate:(id)arg1;

@end


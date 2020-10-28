//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TITypologyStatistic : NSObject
{
}

+ (id)statistic;
@property(readonly, nonatomic) NSDictionary *aggregateReport;
@property(readonly, nonatomic) NSDictionary *structuredReport;
- (void)finalizeComputation;
- (void)prepareForComputation;
- (void)visitRecordLastAcceptedCandidateCorrected:(id)arg1;
- (void)visitRecordCandidateRejected:(id)arg1;
- (void)visitRecordTextAccepted:(id)arg1;
- (void)visitRecordSetOriginalInput:(id)arg1;
- (void)visitRecordPhraseBoundaryAdjustment:(id)arg1;
- (void)visitRecordSkipHitTest:(id)arg1;
- (void)visitRecordHitTest:(id)arg1;
- (void)visitRecordRefinements:(id)arg1;
- (void)visitRecordReplacements:(id)arg1;
- (void)visitRecordAcceptedCandidate:(id)arg1;
- (void)visitRecordCandidateResultSet:(id)arg1;
- (void)visitRecordAutocorrections:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordSync:(id)arg1;
- (void)visitTypologyRecord:(id)arg1;
- (void)visitTypologyLog:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class NSString, PPNamedEntityQuery;

@protocol PPNamedEntityReadOnlyServerProtocol <PPFeedbackAccepting>
- (void)mapItemForPlaceName:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)namedEntityRecordsWithQuery:(PPNamedEntityQuery *)arg1 queryId:(NSUInteger)arg2;
- (void)rankedNamedEntitiesWithQuery:(PPNamedEntityQuery *)arg1 queryId:(NSUInteger)arg2;
@end


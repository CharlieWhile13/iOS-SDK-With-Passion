//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@protocol _CPResultSectionForFeedback <NSObject>
@property(readonly, nonatomic) NSUInteger whichBundleid;
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSData *fallbackResultSection;
@property(nonatomic) double rankingScore;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSArray *results;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)resultsAtIndex:(NSUInteger)arg1;
- (NSUInteger)resultsCount;
- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearResults;
@end


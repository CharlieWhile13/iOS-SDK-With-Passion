//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol NUArticleDataProvider;

@protocol NUArticlePrefetcherType
- (id <NUArticleDataProvider>)prefetchedArticleDataProviderForArticleID:(NSString *)arg1;
- (void)removePrefetchInterestInArticleID:(NSString *)arg1;
- (void)addPrefetchInterestInArticleID:(NSString *)arg1;
@end


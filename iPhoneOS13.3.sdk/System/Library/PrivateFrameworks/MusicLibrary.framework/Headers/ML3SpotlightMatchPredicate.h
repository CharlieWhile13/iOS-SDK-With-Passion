//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@class ML3SpotlightNameCache, NSArray, NSString;

@interface ML3SpotlightMatchPredicate : ML3Predicate
{
    ML3SpotlightNameCache *_names;
    NSArray *_searchProperties;
    NSString *_searchString;
}

+ (id)predicateWithProperties:(id)arg1 searchString:(id)arg2;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 matchingProperties:(id)arg2;
- (id)spotlightPredicate;

@end


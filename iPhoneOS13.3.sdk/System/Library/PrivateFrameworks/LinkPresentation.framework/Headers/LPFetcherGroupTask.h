//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPFetcher, LPFetcherResponse;

__attribute__((visibility("hidden")))
@interface LPFetcherGroupTask : NSObject
{
    BOOL _hasStarted;
    LPFetcher *_fetcher;
    LPFetcherResponse *_response;
}

@property(nonatomic) BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(retain, nonatomic) LPFetcherResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) LPFetcher *fetcher; // @synthesize fetcher=_fetcher;
// - (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUILoadTrendingSearchPageOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSURL *_pageURL;
    id /* CDUnknownBlockType */ _outputBlock;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ outputBlock; // @synthesize outputBlock=_outputBlock;
@property(readonly, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)main;
- (id)initWithClientContext:(id)arg1 pageURL:(id)arg2 outputBlock:(id /* CDUnknownBlockType */)arg3;

@end


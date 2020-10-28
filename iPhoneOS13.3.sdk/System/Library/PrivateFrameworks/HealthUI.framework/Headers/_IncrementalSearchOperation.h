//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSRegularExpression, NSString;

@interface _IncrementalSearchOperation : NSOperation
{
    NSRegularExpression *_regularExpression;
    NSString *_searchBody;
    id /* CDUnknownBlockType */ _searchResultsBlock;
    id /* CDUnknownBlockType */ _searchFinishedBlock;
}

@property(readonly) id /* CDUnknownBlockType */ searchFinishedBlock; // @synthesize searchFinishedBlock=_searchFinishedBlock;
@property(readonly) id /* CDUnknownBlockType */ searchResultsBlock; // @synthesize searchResultsBlock=_searchResultsBlock;
@property(readonly) NSString *searchBody; // @synthesize searchBody=_searchBody;
@property(readonly) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
// - (void).cxx_destruct;
- (void)main;
- (id)initWithSearchString:(id)arg1 searchBody:(id)arg2 resultsBlock:(id /* CDUnknownBlockType */)arg3 finishedBlock:(id /* CDUnknownBlockType */)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedDescriptor, FCFeedViewport, FCFeedViewportDiff;
@protocol FCCoreConfiguration;

@interface FCFeedViewportRefreshOperation : FCOperation
{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    id /* CDUnknownBlockType */ _refreshCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_resultDiff;
}

@property(retain, nonatomic) FCFeedViewportDiff *resultDiff; // @synthesize resultDiff=_resultDiff;
@property(retain, nonatomic) FCFeedViewport *resultViewport; // @synthesize resultViewport=_resultViewport;
@property(copy, nonatomic) id /* CDUnknownBlockType */ refreshCompletionHandler; // @synthesize refreshCompletionHandler=_refreshCompletionHandler;
@property(retain, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(retain, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_continueWithRefreshDate:(id)arg1 forYouConfig:(id)arg2;
- (void)performOperation;
- (BOOL)validateOperation;

@end


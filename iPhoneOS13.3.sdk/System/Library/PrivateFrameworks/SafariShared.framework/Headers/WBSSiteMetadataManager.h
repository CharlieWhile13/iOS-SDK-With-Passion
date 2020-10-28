//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSiteMetadataProviderDelegate-Protocol.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSURL, WKProcessPool;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataManager : NSObject <WBSSiteMetadataProviderDelegate>
{
    WKProcessPool *_processPool;
    NSMutableSet *_usedWebViews;
    NSMutableSet *_reusableWebViews;
    NSMutableArray *_siteMetadataProviders;
    NSObject<OS_dispatch_queue> *_siteMetadataProvidersAccessQueue;
    NSOperationQueue *_operationQueue;
    NSCountedSet *_activeOperations;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableSet *_tokens;
    NSMutableDictionary *_requestsToRequestInfos;
    NSURL *_injectedBundleURL;
}

@property(readonly, copy, nonatomic) NSURL *injectedBundleURL; // @synthesize injectedBundleURL=_injectedBundleURL;
// - (void).cxx_destruct;
- (void)siteMetadataProvider:(id)arg1 didFinishUsingWebView:(id)arg2;
- (void)siteMetadataProvider:(id)arg1 getWebViewOfSize:(CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)siteMetadataProvider:(id)arg1 cancelRequestsWithTokens:(id)arg2;
- (id)siteMetadataProvider:(id)arg1 registerOneTimeRequest:(id)arg2 priority:(long long)arg3 responseHandler:(id /* CDUnknownBlockType */)arg4;
- (id)siteMetadataProvider:(id)arg1 registerRequest:(id)arg2 priority:(long long)arg3 responseHandler:(id /* CDUnknownBlockType */)arg4;
- (void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3 beginOperationUsingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 ofType:(long long)arg3 didReceiveNewData:(BOOL)arg4 forRequest:(id)arg5;
- (void)_scheduleDelayedResponse:(id)arg1 forRequestToken:(id)arg2;
- (id)_makeWebViewOfSize:(CGSize)arg1 withConfiguration:(id)arg2;
- (void)_setUpOperationForRequest:(id)arg1 withSiteMetadataProvider:(id)arg2 usingOperationBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_updateOperationForRequestIfPossible:(id)arg1;
- (void)_reprioritizeOperationForRequest:(id)arg1;
- (long long)_highestRequestPriorityForRequest:(id)arg1;
- (id)_providerForRequest:(id)arg1;
- (void)_registerToken:(id)arg1 withProvider:(id)arg2;
- (void)savePendingProviderChangesBeforeTermination;
- (void)emptyProviderCachesIncludingFavicons:(BOOL)arg1;
- (void)emptyProviderCaches;
- (void)setPriority:(long long)arg1 ofRequestsWithTokens:(id)arg2;
- (void)setPriority:(long long)arg1 ofRequestWithToken:(id)arg2;
- (BOOL)_requestIsCancelledForToken:(id)arg1;
- (void)_internalSetPriority:(long long)arg1 ofRequestWithToken:(id)arg2;
- (void)cancelRequestsWithTokens:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cancelRequestsWithTokens:(id)arg1;
- (void)cancelRequestWithToken:(id)arg1;
- (void)_internalCancelRequestWithToken:(id)arg1;
- (void)_sendResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2 didReceiveNewData:(BOOL)arg3;
- (void)_sendRequiresDownloadResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2;
- (void)preloadRequests:(id)arg1 withPriority:(long long)arg2 responseHandler:(id /* CDUnknownBlockType */)arg3;
- (void)preloadRequest:(id)arg1 withPriority:(long long)arg2 responseHandler:(id /* CDUnknownBlockType */)arg3;
- (id)registerOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(id /* CDUnknownBlockType */)arg3;
- (id)registerRequest:(id)arg1 priority:(long long)arg2 responseHandler:(id /* CDUnknownBlockType */)arg3;
- (void)registerSiteMetadataProvider:(id)arg1;
- (NSUInteger)_numberOfConcurrentRequests;
- (void)_discardWebViewSoon:(id)arg1;
- (id)_popReusableWebView;
- (id)_processPool;
@property(nonatomic, getter=isSuspended) BOOL suspended;
- (id)initWithInjectedBundleURL:(id)arg1;
- (id)init;

@end


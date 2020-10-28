//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIHTTPRequest.h>


@class NSURL, RUIParser, RUIStyle, _RUILoaderSessionDelegateAdapter;
@protocol RUIParserDelegate;

@interface RUILoader : RUIHTTPRequest <NSURLSessionTaskDelegate>
{
    RUIParser *_parser;
    NSURL *_url;
    _RUILoaderSessionDelegateAdapter *_sessionDelegateAdapter;
    BOOL _allowNonSecureHTTP;
    id <RUIParserDelegate> _parserDelegate;
    RUIStyle *_style;
    long long _userInterfaceStyle;
}

@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property(nonatomic) __weak id <RUIParserDelegate> parserDelegate; // @synthesize parserDelegate=_parserDelegate;
@property(nonatomic) BOOL allowNonSecureHTTP; // @synthesize allowNonSecureHTTP=_allowNonSecureHTTP;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (BOOL)receivedValidResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)webViewFinishedLoading;
- (void)didParseData;
- (BOOL)anyWebViewLoading;
- (void)allWebViewsFinishedLoading;
- (void)_finishLoad;
- (void)parseData:(id)arg1;
- (id)URL;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithURL:(id)arg1;
- (id)urlSessionDelegate;
- (id)sessionConfiguration;
- (void)shouldLoadRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_handleShouldLoadRequestResult:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)loadRequest:(id)arg1;
- (void)cancel;
- (void)dealloc;

@end


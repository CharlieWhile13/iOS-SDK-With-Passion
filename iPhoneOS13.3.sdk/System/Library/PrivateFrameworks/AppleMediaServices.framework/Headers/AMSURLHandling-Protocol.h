//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AMSURLAction, AMSURLSession, NSData, NSMutableURLRequest, NSURLRequest, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol AMSURLHandling <NSObject>
@property(nonatomic) __weak AMSURLSession *session;
- (void)reconfigureNewRequest:(NSMutableURLRequest *)arg1 originalTask:(NSURLSessionTask *)arg2 redirect:(BOOL)arg3 error:(id )arg4;
- (AMSURLAction *)handleResponse:(NSURLResponse *)arg1 task:(NSURLSessionTask *)arg2;
- (AMSURLAction *)handleCompletionWithTask:(NSURLSessionTask *)arg1 metrics:(NSURLSessionTaskMetrics *)arg2 decodedObject:(id)arg3;
- (void)didCreateTask:(NSURLSessionTask *)arg1 fromRequest:(NSURLRequest *)arg2 error:(id )arg3;
- (id)decodeData:(NSData *)arg1 task:(NSURLSessionTask *)arg2 error:(id )arg3;
@end


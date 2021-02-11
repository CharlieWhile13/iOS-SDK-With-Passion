/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAssetResolver : NSObject <RMAssetResolver> {
    NSURLSession * _URLSession;
    NSObject<OS_dispatch_queue> * _completionQueue;
}

@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;

- (void).cxx_destruct;
- (id)URLSession;
- (id)_createRequestWithURL:(id)arg1 acceptType:(id)arg2;
- (bool)_validateAsset:(id)arg1 reference:(id)arg2 didFinishWithResponse:(id)arg3 data:(id)arg4 error:(id*)arg5;
- (id)completionQueue;
- (id)dataTaskWithAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithURLSession:(id)arg1;
- (id)initWithURLSessionConfiguration:(id)arg1;
- (void)resolveAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletionQueue:(id)arg1;
- (void)setURLSession:(id)arg1;
- (id)userAgent;

@end
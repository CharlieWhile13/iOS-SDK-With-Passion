/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

@interface SOAuthorizationRequest : NSObject {
    bool  _authorizationCanceled;
    SOAuthorizationCredential * _canceledAuthorizationCredential;
    NSError * _canceledAuthorizationError;
    SORemoteExtensionContext * _remoteExtensionContext;
    SOAuthorizationRequestParameters * _requestParameters;
}

@property (getter=isAuthorizationCanceled, nonatomic) bool authorizationCanceled;
@property (nonatomic, retain) NSDictionary *authorizationOptions;
@property (nonatomic, retain) NSString *callerBundleIdentifier;
@property (nonatomic, retain) SOAuthorizationCredential *canceledAuthorizationCredential;
@property (nonatomic, retain) NSError *canceledAuthorizationError;
@property (nonatomic, retain) NSDictionary *extensionData;
@property (nonatomic, retain) NSData *httpBody;
@property (nonatomic, retain) NSDictionary *httpHeaders;
@property (nonatomic, retain) NSString *realm;
@property (nonatomic, retain) NSString *requestedOperation;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)_hostExtensionContext;
- (bool)_isUserInterfaceAllowed;
- (id)authorizationOptions;
- (id)callerBundleIdentifier;
- (void)cancel;
- (id)canceledAuthorizationCredential;
- (id)canceledAuthorizationError;
- (void)complete;
- (void)completeWithError:(id)arg1;
- (void)completeWithHTTPAuthorizationHeaders:(id)arg1;
- (void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2;
- (void)doNotHandle;
- (id)extensionData;
- (id)httpBody;
- (id)httpHeaders;
- (id)initWithRequestParameters:(id)arg1 remoteExtensionContext:(id)arg2;
- (bool)isAuthorizationCanceled;
- (void)presentAuthorizationViewControllerWithCompletion:(id /* block */)arg1;
- (id)realm;
- (id)requestedOperation;
- (void)setAuthorizationCanceled:(bool)arg1;
- (void)setAuthorizationOptions:(id)arg1;
- (void)setCallerBundleIdentifier:(id)arg1;
- (void)setCanceledAuthorizationCredential:(id)arg1;
- (void)setCanceledAuthorizationError:(id)arg1;
- (void)setExtensionData:(id)arg1;
- (void)setHttpBody:(id)arg1;
- (void)setHttpHeaders:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setRequestedOperation:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLRequestEncoder : NSObject <AMSBagConsumer, AMSBagConsumer_Project, AMSRequestEncoding> {
    ACAccount * _account;
    NSDictionary * _additionalMetrics;
    long long  _anisetteType;
    <AMSBagProtocol> * _bag;
    <AMSURLBagContract> * _bagContract;
    AMSProcessInfo * _clientInfo;
    bool  _compressRequestBody;
    long long  _dialogOptions;
    bool  _disableResponseDecoding;
    long long  _encodeCount;
    bool  _includeClientVersions;
    NSObject<OS_dispatch_queue> * _internalQueue;
    AMSKeychainOptions * _keychainOptions;
    NSString * _logUUID;
    long long  _mescalType;
    NSURLSessionTask * _parentTask;
    long long  _requestEncoding;
    <AMSResponseDecoding> * _responseDecoder;
    bool  _shouldSetCookiesFromResponse;
    bool  _shouldSetStorefrontFromResponse;
    bool  _urlKnownToBeTrusted;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) <AMSURLBagContract> *bagContract;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic) bool compressRequestBody;
@property (nonatomic) long long dataEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) bool disableResponseDecoding;
@property (nonatomic) long long encodeCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeClientVersions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) AMSKeychainOptions *keychainOptions;
@property (nonatomic, retain) NSString *logUUID;
@property (nonatomic) long long mescalType;
@property (nonatomic, retain) NSURLSessionTask *parentTask;
@property (nonatomic) long long requestEncoding;
@property (nonatomic, retain) <AMSResponseDecoding> *responseDecoder;
@property (nonatomic) bool shouldSetCookiesFromResponse;
@property (nonatomic) bool shouldSetStorefrontFromResponse;
@property (readonly) Class superclass;
@property (nonatomic) bool urlKnownToBeTrusted;

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (void).cxx_destruct;
- (id)_methodStringFromMethod:(long long)arg1;
- (id)account;
- (id)additionalMetrics;
- (long long)anisetteType;
- (id)bag;
- (id)bagContract;
- (id)clientInfo;
- (bool)compressRequestBody;
- (long long)dataEncoding;
- (long long)dialogOptions;
- (bool)disableResponseDecoding;
- (long long)encodeCount;
- (bool)includeClientVersions;
- (id)init;
- (id)initWithBag:(id)arg1;
- (id)initWithBagContract:(id)arg1;
- (id)internalQueue;
- (id)keychainOptions;
- (id)logUUID;
- (long long)mescalType;
- (id)parentTask;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 error:(id*)arg3;
- (long long)requestEncoding;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 error:(id*)arg3;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)requestWithMethod:(long long)arg1 URLString:(id)arg2 error:(id*)arg3;
- (id)requestWithMethod:(long long)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 error:(id*)arg3;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)responseDecoder;
- (void)setAccount:(id)arg1;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setAnisetteType:(long long)arg1;
- (void)setBag:(id)arg1;
- (void)setBagContract:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setCompressRequestBody:(bool)arg1;
- (void)setDataEncoding:(long long)arg1;
- (void)setDialogOptions:(long long)arg1;
- (void)setDisableResponseDecoding:(bool)arg1;
- (void)setEncodeCount:(long long)arg1;
- (void)setIncludeClientVersions:(bool)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setKeychainOptions:(id)arg1;
- (void)setLogUUID:(id)arg1;
- (void)setMescalType:(long long)arg1;
- (void)setParentTask:(id)arg1;
- (void)setRequestEncoding:(long long)arg1;
- (void)setResponseDecoder:(id)arg1;
- (void)setShouldSetCookiesFromResponse:(bool)arg1;
- (void)setShouldSetStorefrontFromResponse:(bool)arg1;
- (void)setUrlKnownToBeTrusted:(bool)arg1;
- (bool)shouldSetCookiesFromResponse;
- (bool)shouldSetStorefrontFromResponse;
- (bool)urlKnownToBeTrusted;

@end
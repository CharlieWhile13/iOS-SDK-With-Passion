/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface IMURLBag : NSObject <AMSBagProtocol> {
    AMSBag * _bag;
    NSDate * expirationDate;
    bool  expired;
    NSString * profile;
    NSString * profileVersion;
}

@property (nonatomic, retain) AMSBag *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

+ (void)_registerBagKeysIfNeeded;
+ (void)registerBagKeys:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)bag;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (id)mescalCertificateURL;
- (id)mescalSetupURL;
- (id)mescalSignSapRequests;
- (id)mescalSignSapResponses;
- (id)mescalSignedActions;
- (id)metricsDictionary;
- (id)metricsURL;
- (id)personalizedLookupURL;
- (id)profile;
- (id)profileVersion;
- (void)setBag:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)trustedDomains;
- (id)unpersonalizedLookupURL;

@end

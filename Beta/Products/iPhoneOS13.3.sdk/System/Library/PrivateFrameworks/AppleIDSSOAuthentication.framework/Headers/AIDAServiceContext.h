/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
 */

@interface AIDAServiceContext : NSObject <NSCopying, NSMutableCopying> {
    NSDictionary * _authenticationResults;
    <CDPStateUIProvider> * _cdpUiProvider;
    long long  _operationUIPermissions;
    bool  _shouldForceOperation;
    UIViewController * _viewController;
}

@property (nonatomic, readonly, copy) NSDictionary *authenticationResults;
@property (nonatomic, readonly) <CDPStateUIProvider> *cdpUiProvider;
@property (nonatomic, readonly) long long operationUIPermissions;
@property (nonatomic, readonly) bool shouldForceOperation;
@property (nonatomic, readonly) UIViewController *viewController;

+ (bool)accessInstanceVariablesDirectly;
+ (id)contextWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)authenticationResults;
- (id)cdpUiProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)operationUIPermissions;
- (bool)shouldForceOperation;
- (id)viewController;

@end
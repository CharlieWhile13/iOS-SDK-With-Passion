//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICDelegateToken, ICUserIdentity, ICUserIdentityProperties, NSArray, NSDate;

@protocol ICDelegateAccountStoreService <NSObject>
- (void)setToken:(ICDelegateToken *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)setIdentityProperties:(ICUserIdentityProperties *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)removeTokensExpiringBeforeDate:(NSDate *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)removeTokenForUserIdentity:(ICUserIdentity *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)removeIdentityPropertiesForUserIdentity:(ICUserIdentity *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)removeDelegationUUIDs:(NSArray *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)removeAllTokensWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)addDelegationUUIDs:(NSArray *)arg1 forUserIdentity:(ICUserIdentity *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)recreateWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)openWithCompletionHandler:(void (^)(BOOL, NSString *, NSError *))arg1;
@end


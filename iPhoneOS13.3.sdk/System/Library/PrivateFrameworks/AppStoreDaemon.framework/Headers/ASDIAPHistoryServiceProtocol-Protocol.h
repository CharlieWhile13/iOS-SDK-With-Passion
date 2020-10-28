//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSNumber;

@protocol ASDIAPHistoryServiceProtocol
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(void (^)(NSArray *, BOOL, NSError *))arg1;
- (void)getCachedSubscriptionEntitlementsForSegment:(NSUInteger)arg1 withReplyHandler:(void (^)(NSArray *, BOOL, NSError *))arg2;
- (void)getSubscriptionEntitlementsForSegment:(NSUInteger)arg1 ignoreCaches:(BOOL)arg2 withReplyHandler:(void (^)(NSArray *, BOOL, BOOL, NSError *))arg3;
- (void)setSubscriptionEntitlementsWithDictionary:(NSDictionary *)arg1 forAccountID:(NSNumber *)arg2 segment:(NSUInteger)arg3;
- (void)refreshIAPsForActiveAccountWithReplyHandler:(void (^)(NSError *))arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(NSArray *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getAllIAPsForActiveAccountWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol CDMSetupXPCListenerService <NSObject>
- (void)invalidateClientFlowCacheWithCompletion:(void (^)(NSError *))arg1;
- (void)getClientFlowStatusWithReply:(void (^)(NSArray *))arg1;
- (void)getNLAssetStatusForType:(NSString *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
@end


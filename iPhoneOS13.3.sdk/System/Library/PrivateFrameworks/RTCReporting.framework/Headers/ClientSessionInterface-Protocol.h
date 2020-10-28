//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSObject, NSString, NSURL;

@protocol ClientSessionInterface
- (void)setDigestKey:(NSData *)arg1 algorithm:(int)arg2;
- (void)updateSharedDataForKey:(NSString *)arg1 value:(NSObject *)arg2;
- (void)updateSharedDataWithDictionary:(NSDictionary *)arg1;
- (void)sendMessageWithSessionInfo:(NSDictionary *)arg1 userInfo:(NSDictionary *)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(NSDictionary *)arg5 reply:(void (^)(NSString *))arg6;
- (void)uploadLogData:(NSArray *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)uploadFileAtPath:(NSURL *)arg1 extensionToken:(char )arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)finishSessionGracefully;
- (void)flushMessagesWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)sendMessageWithDictionary:(NSDictionary *)arg1 reply:(void (^)(NSString *))arg2;
- (void)fetchDisplayURL:(void (^)(NSString *))arg1;
- (void)fetchStatesWithUserInfo:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *, NSArray *, NSArray *))arg2;
- (void)startConfigWithCompletionHandler:(void (^)(NSArray *, NSArray *, NSArray *))arg1;
- (void)setSessionInfo:(NSDictionary *)arg1 userInfo:(NSDictionary *)arg2 frameworksToCheck:(NSArray *)arg3 hasAggregationBlock:(BOOL)arg4;
@end


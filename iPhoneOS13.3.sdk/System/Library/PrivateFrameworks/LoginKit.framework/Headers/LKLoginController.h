//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginKit/LKLoginDaemonProtocol-Protocol.h>

@class NSXPCConnection;

@interface LKLoginController : NSObject <LKLoginDaemonProtocol>
{
    NSXPCConnection *_connection;
    id /* CDUnknownBlockType */ _completionHandler;
}

+ (id)sharedController;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)updateGlobalDefaultsValue:(id)arg1 forKey:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)recentUsers;
- (void)checkInWithCurrentEnvironment:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)isReadyToLogoutWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)isReadyToLoginWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)saveClassConfiguration:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)loginAppleID:(id)arg1 password:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)logoutWithLogoutType:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)proxy;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, _TtC8FMClient24AuthenticationCredential;

@protocol _TtP8FMClient23AuthenticationProviding_
- (void)credentialDidFail:(_TtC8FMClient24AuthenticationCredential *)arg1 error:(NSError *)arg2 completion:(void (^)(NSError *))arg3;
- (void)credentialWithCompletion:(void (^)(_TtC8FMClient24AuthenticationCredential *, NSError *))arg1;
@end


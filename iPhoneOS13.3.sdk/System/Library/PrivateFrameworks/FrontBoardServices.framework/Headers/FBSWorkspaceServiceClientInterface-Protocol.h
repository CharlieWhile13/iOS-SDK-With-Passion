//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FBSSceneClientSettingsDiff, FBSSceneMessage, FBSSceneTransitionContext, FBSWorkspaceSceneRequestOptions, NSSet, NSString;
@protocol __BSAction__;

@protocol FBSWorkspaceServiceClientInterface
- (oneway void)sceneID:(NSString *)arg1 sendMessage:(FBSSceneMessage *)arg2 withResponse:(void (^)(FBSSceneMessage *, NSError *))arg3;
- (oneway void)sceneID:(NSString *)arg1 didReceiveActions:(NSSet<__BSAction__> *)arg2;
- (oneway void)sceneID:(NSString *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (oneway void)requestSceneWithOptions:(FBSWorkspaceSceneRequestOptions *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFUISceneClientSettings, AFUISceneConfiguration, AFUISceneController, FBScene;

@protocol AFUISceneControllerDelegate <NSObject>
- (AFUISceneConfiguration *)sceneConfigurationForDelegate;

@optional
- (void)sceneController:(AFUISceneController *)arg1 sceneDidUpdateClientSettings:(AFUISceneClientSettings *)arg2;
- (void)sceneController:(AFUISceneController *)arg1 sceneWasInvalidated:(FBScene *)arg2 forReason:(NSUInteger)arg3;
- (void)sceneController:(AFUISceneController *)arg1 willInvalidateScene:(FBScene *)arg2 forReason:(NSUInteger)arg3;
- (void)sceneController:(AFUISceneController *)arg1 sceneContentStateDidChange:(FBScene *)arg2;
@end


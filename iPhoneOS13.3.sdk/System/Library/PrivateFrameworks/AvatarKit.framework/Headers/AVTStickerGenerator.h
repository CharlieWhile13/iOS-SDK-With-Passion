//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/SCNSceneRendererDelegate-Protocol.h>
#import <AvatarKit/_SCNSceneRendererDelegateSPI-Protocol.h>

@class AVTAvatar, AVTAvatarEnvironment, AVTStickerConfiguration, NSArray, SCNRenderer, SCNScene;
@protocol OS_dispatch_queue;

@interface AVTStickerGenerator : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>
{
    BOOL _async;
    AVTAvatar *_avatar;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    SCNScene *_scene;
    SCNRenderer *_renderer;
    AVTAvatarEnvironment *_environment;
    AVTStickerConfiguration *_previousConfiguration;
    NSArray *_overridenMorphers;
    NSArray *_overridenPresets;
    NSArray *_appliedShaderModifiers;
}

+ (CGRect)clippingRectForBaseSize:(CGSize)arg1;
+ (id)createPropsParentNodeIfNeededInScene:(id)arg1;
+ (id)findNodesNamed:(id)arg1 inAvatar:(id)arg2;
+ (id)addCamera:(id)arg1 inScene:(id)arg2;
+ (void)addProps:(id)arg1 toScene:(id)arg2 forAvatar:(id)arg3 withCamera:(id)arg4 forExport:(BOOL)arg5 async:(BOOL)arg6 workQueue:(id)arg7 callbackQueue:(id)arg8 completion:(id /* CDUnknownBlockType */)arg9;
+ (void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 defaultCamera:(id)arg4 forExport:(BOOL)arg5 async:(BOOL)arg6 workQueue:(id)arg7 callbackQueue:(id)arg8 completion:(id /* CDUnknownBlockType */)arg9;
+ (void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 defaultCamera:(id)arg4 forExport:(BOOL)arg5 completion:(id /* CDUnknownBlockType */)arg6 async:(BOOL)arg7;
+ (void)removeConfiguration:(id)arg1 fromScene:(id)arg2 withAvatar:(id)arg3 appliedShaderModifier:(id)arg4;
+ (void)removeConfiguration:(id)arg1 fromScene:(id)arg2 withAvatar:(id)arg3;
@property(retain, nonatomic) NSArray *appliedShaderModifiers; // @synthesize appliedShaderModifiers=_appliedShaderModifiers;
@property(retain, nonatomic) NSArray *overridenPresets; // @synthesize overridenPresets=_overridenPresets;
@property(retain, nonatomic) NSArray *overridenMorphers; // @synthesize overridenMorphers=_overridenMorphers;
@property(retain, nonatomic) AVTStickerConfiguration *previousConfiguration; // @synthesize previousConfiguration=_previousConfiguration;
@property(retain, nonatomic) AVTAvatarEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) SCNRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) SCNScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) BOOL async; // @synthesize async=_async;
@property(retain, nonatomic) AVTAvatar *avatar; // @synthesize avatar=_avatar;
// - (void).cxx_destruct;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(id /* CDUnknownBlockType */)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)stickerImageWithConfiguration:(id)arg1 correctClipping:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)stickerImageWithConfiguration:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)rendererWithConfiguration:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)clearPreviousConfigurationBeforeNewConfiguration:(id)arg1;
- (UIImage )snapshotAtTime:(double)arg1 withRenderer:(id)arg2 configuration:(id)arg3 correctClipping:(BOOL)arg4;
- (void)setupRendererWithAvatar:(id)arg1;
- (void)setupAvatar:(id)arg1;
- (id)initWithAvatar:(id)arg1;

@end


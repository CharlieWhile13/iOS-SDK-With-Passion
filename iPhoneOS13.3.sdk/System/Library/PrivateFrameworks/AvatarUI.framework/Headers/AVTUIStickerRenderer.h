//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTClippableImageStore, AVTUIEnvironment, AVTUILogger, AVTUIStickerGeneratorPool;
@protocol AVTAvatarRecord, AVTCacheableResource, AVTResourceCache, AVTTaskScheduler, OS_dispatch_queue;

@interface AVTUIStickerRenderer : NSObject
{
    BOOL _parallelizeEncoding;
    id <AVTResourceCache> _cache;
    AVTClippableImageStore *_imageStore;
    AVTUIEnvironment *_environment;
    AVTUILogger *_logger;
    id <AVTTaskScheduler> _renderingScheduler;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <AVTAvatarRecord> _avatarRecord;
    id <AVTCacheableResource> _cacheableResourceItem;
    AVTUIStickerGeneratorPool *_stickerGeneratorPool;
}

+ (BOOL)clearStickersForAvatarRecordIdentifier:(id)arg1 withEnvironment:(id)arg2;
+ (id)imageEncoder;
@property(nonatomic) BOOL parallelizeEncoding; // @synthesize parallelizeEncoding=_parallelizeEncoding;
@property(readonly, nonatomic) AVTUIStickerGeneratorPool *stickerGeneratorPool; // @synthesize stickerGeneratorPool=_stickerGeneratorPool;
@property(readonly, nonatomic) id <AVTCacheableResource> cacheableResourceItem; // @synthesize cacheableResourceItem=_cacheableResourceItem;
@property(readonly, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue; // @synthesize encodingQueue=_encodingQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(readonly, nonatomic) id <AVTTaskScheduler> renderingScheduler; // @synthesize renderingScheduler=_renderingScheduler;
@property(readonly, nonatomic) AVTUILogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AVTClippableImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property(readonly, nonatomic) id <AVTResourceCache> cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (void)stopUsingResources;
- (id /* CDUnknownBlockType */)scheduledStickerResourceProviderForStickerConfiguration:(id)arg1;
- (id)renderStickerResourceForItem:(id)arg1 scope:(id)arg2 configuration:(id)arg3;
- (void)saveImageForResource:(id)arg1 forScope:(id)arg2 synchronous:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id /* CDUnknownBlockType */)providerForResourceForScope:(id)arg1 queue:(id)arg2 renderingHandler:(id /* CDUnknownBlockType */)arg3;
- (id /* CDUnknownBlockType */)scheduledTaskForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(id /* CDUnknownBlockType */)arg4 resourceHandler:(id /* CDUnknownBlockType */)arg5 synchronous:(BOOL)arg6;
- (id)initWithAvatarRecord:(id)arg1 cache:(id)arg2 imageStore:(id)arg3 stickerGeneratorPool:(id)arg4 environment:(id)arg5 renderingScheduler:(id)arg6 renderingQueue:(id)arg7 encodingQueue:(id)arg8 callbackQueue:(id)arg9;
- (id)initWithAvatarRecord:(id)arg1 cache:(id)arg2 renderingScheduler:(id)arg3 renderingQueue:(id)arg4 encodingQueue:(id)arg5 stickerGeneratorPool:(id)arg6 environment:(id)arg7;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSURL;
@protocol OS_dispatch_queue;

@interface PLPhotoKitVariationCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSCache *_memoryCache;
    NSURL *_cacheURL;
}

@property(readonly) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
// - (void).cxx_destruct;
- (BOOL)_removeCachesForURL:(id)arg1;
- (void)_saveToMemoryCache:(id)arg1 forFileURL:(id)arg2 fileSize:(NSUInteger)arg3;
- (id)_readInfoForURL:(id)arg1;
- (BOOL)_writeInfo:(id)arg1 atURL:(id)arg2;
- (id)_fileURLWithIdentifier:(id)arg1 pathExtension:(id)arg2;
- (BOOL)deleteCacheForAssetIdentifier:(id)arg1;
- (NSUInteger)purgeAll;
- (NSUInteger)evictIfNeeded;
- (BOOL)_performChangesForAssetIdentifier:(id)arg1 changesBlock:(id /* CDUnknownBlockType */)arg2;
- (id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2;
- (void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3;
- (id)portraitEffectSettingsForAssetIdentifier:(id)arg1;
- (void)savePortraitEffectSettings:(id)arg1 assetIdentifier:(id)arg2;
- (id)analysisResultForAssetIdentifier:(id)arg1;
- (void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2;
- (id)_suggestionKeyForVariationType:(long long)arg1;
- (id)_gatingKeyForVariationType:(long long)arg1;
- (id)_recipeKeyForVariationType:(long long)arg1;
- (id)_keyForVariationType:(long long)arg1;
- (id)initWithCacheURL:(id)arg1;
- (id)initWithPathManager:(id)arg1;

@end


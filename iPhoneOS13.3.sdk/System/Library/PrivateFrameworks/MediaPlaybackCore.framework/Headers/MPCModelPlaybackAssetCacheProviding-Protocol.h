//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPModelFileAsset, MPModelGenericObject, NSString;

@protocol MPCModelPlaybackAssetCacheProviding <NSObject>
- (void)setPlaybackAssetCacheFileAsset:(MPModelFileAsset *)arg1 forGenericObject:(MPModelGenericObject *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)getPlaybackAssetCacheDestinationURL:(id )arg1 purchaseBundleDestinationURL:(id )arg2 forGenericObject:(MPModelGenericObject *)arg3 assetQualityType:(long long)arg4 pathExtension:(NSString *)arg5;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(MPModelGenericObject *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
@end


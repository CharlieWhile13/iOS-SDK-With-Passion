//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIImageProvider-Protocol.h>

@protocol PXUIImageProvider;

@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider>
{
    id <PXUIImageProvider> _underlyingAssetImageProvider;
}

@property(readonly, nonatomic) id <PXUIImageProvider> underlyingAssetImageProvider; // @synthesize underlyingAssetImageProvider=_underlyingAssetImageProvider;
// - (void).cxx_destruct;
- (id)_underlyingAssetsFromPreviewAssets:(id)arg1;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* CDUnknownBlockType */)arg5;
- (void)cancelImageRequest:(long long)arg1;
- (id)init;
- (id)initWithUnderlyingAssetImageProvider:(id)arg1;

@end


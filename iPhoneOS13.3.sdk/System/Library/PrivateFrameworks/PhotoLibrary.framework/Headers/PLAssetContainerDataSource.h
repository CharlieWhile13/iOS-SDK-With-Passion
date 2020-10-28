//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibrary/PHAssetCollectionDataSource-Protocol.h>

@class NSMutableDictionary, NSString, PHFetchResult;

@interface PLAssetContainerDataSource : NSObject <PHAssetCollectionDataSource>
{
    PHFetchResult *_assetCollectionsFetchResult;
    NSMutableDictionary *_assetsFetchResultByAssetCollection;
    NSUInteger _allAssetsCount;
    NSUInteger _containerCounts;
    BOOL _cachedValuesNeedUpdate;
    NSUInteger _lastAssetCollectionIndex;
}

@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult; // @synthesize assetCollectionsFetchResult=_assetCollectionsFetchResult;
@property(readonly, copy) NSString *description;
- (void)viewControllerPhotoLibraryDidChange:(id)arg1;
- (id)pl_fetchAllAssets;
- (id)assetInAssetContainer:(id)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)assetCountForContainerAtIndex:(NSUInteger)arg1;
- (NSUInteger)assetCountForContainer:(id)arg1;
- (id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (NSUInteger)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(NSUInteger)arg1 wrap:(BOOL)arg2;
- (NSUInteger)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(NSUInteger)arg1 wrap:(BOOL)arg2;
- (id)findNearestIndexPath:(id)arg1 preferNext:(BOOL)arg2;
- (BOOL)hasAssetAtIndexPath:(id)arg1;
- (id)lastAssetIndexPath;
- (id)firstAssetIndexPath;
- (NSUInteger)indexOfContainer:(id)arg1;
- (id)assetContainerAtIndex:(NSUInteger)arg1;
- (id)indexPathOfAsset:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (id)newAssetsFetchResults;
- (id)assetsInAssetCollectionAtIndex:(NSUInteger)arg1;
- (id)assetWithObjectID:(id)arg1;
- (NSUInteger)indexOffsetForAssetContainerAtAssetIndex:(NSUInteger)arg1;
- (NSUInteger)globalIndexOfAsset:(id)arg1;
- (id)assetAtGlobalIndex:(NSUInteger)arg1;
- (NSUInteger)decrementGlobalIndex:(NSUInteger)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (NSUInteger)incrementGlobalIndex:(NSUInteger)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (id)indexPathForGlobalIndex:(NSUInteger)arg1;
- (NSUInteger)globalIndexForIndexPath:(id)arg1;
- (id)assetContainerForAssetGlobalIndex:(NSUInteger)arg1;
- (id)assetContainerForAsset:(id)arg1;
- (NSUInteger)allAssetsCount;
- (void)_updateCachedCount:(NSUInteger)arg1 forContainerAtContainerIndex:(NSUInteger)arg2;
- (void)_updateCachedValues;
- (void)dealloc;
- (id)initWithAssetCollectionsFetchResult:(id)arg1 collectionsAssetsFetchResults:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXAssetEditOperationManager;
@protocol PXDisplayAsset;

@protocol PXAssetEditOperationManagerObserver <NSObject>

@optional
- (void)assetEditOperationManager:(PXAssetEditOperationManager *)arg1 didChangeEditOperationStatusForAsset:(id <PXDisplayAsset>)arg2 context:(void )arg3;
- (void)assetEditOperationManager:(PXAssetEditOperationManager *)arg1 didChangeEditOperationsPerformedOnAsset:(id <PXDisplayAsset>)arg2 context:(void )arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphEvent-Protocol.h>

@class NSArray, NSString, PHAssetCollection;

@protocol PGGraphPhotoEvent <PGGraphEvent>
+ (NSArray *)scoreSortDescriptors;
- (PHAssetCollection *)fetchAssetCollection;
- (NSString *)localIdentifier;
@end


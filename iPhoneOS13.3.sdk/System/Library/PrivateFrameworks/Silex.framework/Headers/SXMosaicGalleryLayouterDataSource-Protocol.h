//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXColumnLayout, SXMosaicGalleryLayouter, UIView;

@protocol SXMosaicGalleryLayouterDataSource <NSObject>
- (SXColumnLayout *)documentColumnLayoutForGalleryLayouter:(SXMosaicGalleryLayouter *)arg1;
- (BOOL)galleryLayouter:(SXMosaicGalleryLayouter *)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(NSUInteger)arg2;
- (UIView *)galleryLayouter:(SXMosaicGalleryLayouter *)arg1 viewForItemAtIndex:(NSUInteger)arg2;
- (CGSize)galleryLayouter:(SXMosaicGalleryLayouter *)arg1 dimensionsForItemAtIndex:(NSUInteger)arg2;
- (NSUInteger)numberOfItemsForGalleryLayouter:(SXMosaicGalleryLayouter *)arg1;
@end


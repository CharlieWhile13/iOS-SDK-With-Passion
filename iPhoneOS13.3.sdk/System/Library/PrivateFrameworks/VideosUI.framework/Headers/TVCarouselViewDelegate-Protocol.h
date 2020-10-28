//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UICollectionViewCell, _TVCarouselView;

@protocol TVCarouselViewDelegate <NSObject>

@optional
- (void)carouselView:(_TVCarouselView *)arg1 didPlayItemAtIndex:(NSUInteger)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didFocusItemAtIndex:(NSUInteger)arg2;
- (void)carouselViewDidScroll:(_TVCarouselView *)arg1;
- (void)carouselView:(_TVCarouselView *)arg1 didEndDisplayingItemAtIndex:(NSUInteger)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 willDisplayItemAtIndex:(NSUInteger)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forItemAtIndex:(NSUInteger)arg3;
- (void)carouselView:(_TVCarouselView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndex:(NSUInteger)arg3;
- (void)carouselView:(_TVCarouselView *)arg1 didDeselectItemAtIndex:(NSUInteger)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didSelectItemAtIndex:(NSUInteger)arg2;
- (BOOL)carouselView:(_TVCarouselView *)arg1 shouldDeselectItemAtIndex:(NSUInteger)arg2;
- (BOOL)carouselView:(_TVCarouselView *)arg1 shouldSelectItemAtIndex:(NSUInteger)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didUnhighlightItemAtIndex:(NSUInteger)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didHighlightItemAtIndex:(NSUInteger)arg2;
- (BOOL)carouselView:(_TVCarouselView *)arg1 shouldHighlightItemAtIndex:(NSUInteger)arg2;
@end


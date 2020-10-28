//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;

@protocol PXMutableBrowserSummaryController <NSObject>
@property(copy, nonatomic) NSDictionary *selectionAttributes;
@property(copy, nonatomic) NSDictionary *emphasizedAttributes;
@property(copy, nonatomic) NSDictionary *defaultAttributes;
@property(nonatomic) BOOL shouldShowLocationNames;
@property(nonatomic) BOOL shouldUseAbbreviatedDates;
@property(nonatomic) BOOL shouldUseNavigationTitle;
@property(nonatomic) BOOL shouldUseSubtitles;
- (void)invalidateFilteringContainerContent;
- (void)invalidateSelection;
- (void)invalidateVisibleContent;
- (void)invalidateContainerDateInterval;
- (void)invalidateLocalizedContainerItemsCount;
- (void)invalidateContainerTitle;
@end


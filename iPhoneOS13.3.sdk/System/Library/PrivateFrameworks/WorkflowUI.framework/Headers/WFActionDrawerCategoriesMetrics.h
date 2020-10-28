//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UITraitCollection;
@protocol WFActionDrawerCategoriesMetricsProviderCellDimension;

@interface WFActionDrawerCategoriesMetrics : NSObject
{
    BOOL _verticalPresentation;
    BOOL _valid;
    NSArray *_sizesForCells;
    double _heightForDisplay;
    NSArray *_categories;
    UITraitCollection *_traitCollection;
    id <WFActionDrawerCategoriesMetricsProviderCellDimension> _cellDimensions;
    CGSize _maximumSizeCellThatFits;
    CGSize _containerSize;
}

@property(readonly, nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) id <WFActionDrawerCategoriesMetricsProviderCellDimension> cellDimensions; // @synthesize cellDimensions=_cellDimensions;
@property(nonatomic) CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) __weak UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) BOOL verticalPresentation; // @synthesize verticalPresentation=_verticalPresentation;
// - (void).cxx_destruct;
- (BOOL)shouldStackVertically;
- (BOOL)canFitVertically;
- (BOOL)isAccessibilityContentSize;
- (void)computeHeightForDisplay;
@property(readonly, nonatomic) double heightForDisplay; // @synthesize heightForDisplay=_heightForDisplay;
- (void)computeMaximumSizeCellThatFits;
@property(readonly, nonatomic) CGSize maximumSizeCellThatFits; // @synthesize maximumSizeCellThatFits=_maximumSizeCellThatFits;
- (CGSize)sizeForCellAtIndex:(NSUInteger)arg1;
- (CGSize)computeSizeForCell:(id)arg1;
- (void)computeSizesForCells;
@property(readonly, nonatomic) NSArray *sizesForCells; // @synthesize sizesForCells=_sizesForCells;
- (CGSize)sizeForLabel:(id)arg1 inSize:(CGSize)arg2;
- (UIEdgeInsets)containerEdgeInsets;
- (UIEdgeInsets)textPadding;
- (UIEdgeInsets)cellPadding;
- (CGSize)cellImageSize;
- (NSUInteger)numberOfCellsPerRow;
- (void)recompute;
- (void)recomputeIfNeeded;
- (void)loadCellDimensions;
- (NSUInteger)numberOfRowsRequired;
- (id)initWithCategories:(id)arg1;

@end


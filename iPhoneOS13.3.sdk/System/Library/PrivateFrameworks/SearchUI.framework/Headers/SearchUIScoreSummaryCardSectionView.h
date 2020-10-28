//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class TLKSplitHeaderView;

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>
{
    TLKSplitHeaderView *_splitHeaderView;
}

+ (id)dragTitleForCardSection:(id)arg1;
+ (id)titleForScoreBoard:(id)arg1 forDisplay:(BOOL)arg2;
+ (int)separatorStyleForCardSection:(id)arg1;
+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
@property(retain, nonatomic) TLKSplitHeaderView *splitHeaderView; // @synthesize splitHeaderView=_splitHeaderView;
// - (void).cxx_destruct;
- (void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2;
- (CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

@end

